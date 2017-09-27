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
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标资源加载监听
			/// </summary>
			public class DynamicModelObjectResourceListener : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 动态目标资源加载监听构造函数
				/// </summary>
				public DynamicModelObjectResourceListener(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("CDynamicModelObjectResourceListenerProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void afterAttached_CallBack_void_CDynamicModelObject(IntPtr dynamicObject);

				protected afterAttached_CallBack_void_CDynamicModelObject m_afterAttached_CallBack_void_CDynamicModelObject;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_NoVirtual(IntPtr pNativeObject, IntPtr dynamicObject);

				/// <summary>
				/// 当加载完成资源，并挂接到场景图之后触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				public virtual void AfterAttached_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_NoVirtual(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Function(IntPtr dynamicObject)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_dynamicObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dynamicObject.BindNativeObject(dynamicObject,"CDynamicModelObject");
					csobj_dynamicObject.Delegate = true;
					IClassFactory csobj_dynamicObjectClassFactory = GlobalClassFactoryMap.Get(csobj_dynamicObject.GetCppInstanceTypeName());
					if (csobj_dynamicObjectClassFactory != null)
					{
						csobj_dynamicObject.Delegate = true;
						csobj_dynamicObject = csobj_dynamicObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_dynamicObject.BindNativeObject(dynamicObject, "CDynamicModelObject");
						csobj_dynamicObject.Delegate = true;
					}
					
					AfterAttached(csobj_dynamicObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(IntPtr pNativeObject, IntPtr dynamicObject);

				/// <summary>
				/// 当加载完成资源，并挂接到场景图之后触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				public virtual void AfterAttached(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void beforeAttached_CallBack_void_CDynamicModelObject(IntPtr dynamicObject);

				protected beforeAttached_CallBack_void_CDynamicModelObject m_beforeAttached_CallBack_void_CDynamicModelObject;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_NoVirtual(IntPtr pNativeObject, IntPtr dynamicObject);

				/// <summary>
				/// 当加载完成资源，挂接到场景图之前触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				public virtual void BeforeAttached_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_NoVirtual(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Function(IntPtr dynamicObject)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_dynamicObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dynamicObject.BindNativeObject(dynamicObject,"CDynamicModelObject");
					csobj_dynamicObject.Delegate = true;
					IClassFactory csobj_dynamicObjectClassFactory = GlobalClassFactoryMap.Get(csobj_dynamicObject.GetCppInstanceTypeName());
					if (csobj_dynamicObjectClassFactory != null)
					{
						csobj_dynamicObject.Delegate = true;
						csobj_dynamicObject = csobj_dynamicObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_dynamicObject.BindNativeObject(dynamicObject, "CDynamicModelObject");
						csobj_dynamicObject.Delegate = true;
					}
					
					BeforeAttached(csobj_dynamicObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(IntPtr pNativeObject, IntPtr dynamicObject);

				/// <summary>
				/// 当加载完成资源，挂接到场景图之前触发
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				public virtual void BeforeAttached(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool(IntPtr dynamicObject, bool atttched);

				protected attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool m_attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr dynamicObject, byte atttched);

				/// <summary>
				/// 当动目标挂接或者反挂接时会被触发。
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				/// <param name="atttched">模型被attcth时为true,detach时是false</param>
				public virtual void AttachStateHasChanged_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject, bool atttched)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_NoVirtual(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject, Convert.ToByte(atttched));
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Function(IntPtr dynamicObject, bool atttched)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_dynamicObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dynamicObject.BindNativeObject(dynamicObject,"CDynamicModelObject");
					csobj_dynamicObject.Delegate = true;
					IClassFactory csobj_dynamicObjectClassFactory = GlobalClassFactoryMap.Get(csobj_dynamicObject.GetCppInstanceTypeName());
					if (csobj_dynamicObjectClassFactory != null)
					{
						csobj_dynamicObject.Delegate = true;
						csobj_dynamicObject = csobj_dynamicObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_dynamicObject.BindNativeObject(dynamicObject, "CDynamicModelObject");
						csobj_dynamicObject.Delegate = true;
					}
					
					AttachStateHasChanged(csobj_dynamicObject, atttched);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(IntPtr pNativeObject, IntPtr dynamicObject, byte atttched);

				/// <summary>
				/// 当动目标挂接或者反挂接时会被触发。
				/// </summary>
				/// <param name="dynamicObject">动态目标对象</param>
				/// <param name="atttched">模型被attcth时为true,detach时是false</param>
				public virtual void AttachStateHasChanged(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicObject, bool atttched)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(this.NativeObject, object.Equals(dynamicObject, null) ? IntPtr.Zero : dynamicObject.NativeObject, Convert.ToByte(atttched));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getName_CallBack_EVString();

				protected getName_CallBack_EVString m_getName_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取监听名称
				/// </summary>
				/// <returns>监听名称</returns>
				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Function()
				{
					string csret=GetName();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取监听名称
				/// </summary>
				/// <returns>监听名称</returns>
				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

				protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置监听名称
				/// </summary>
				/// <param name="name">监听名称</param>
				public virtual void SetName_NoVirtual(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetName(strname);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置监听名称
				/// </summary>
				/// <param name="name">监听名称</param>
				public virtual void SetName(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(this.NativeObject, name);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObjectResourceListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener", new DynamicModelObjectResourceListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListenerProxy", new DynamicModelObjectResourceListenerClassFactory());

				public DynamicModelObjectResourceListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(IntPtr pObject, afterAttached_CallBack_void_CDynamicModelObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(IntPtr pObject, beforeAttached_CallBack_void_CDynamicModelObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(IntPtr pObject, attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_afterAttached_CallBack_void_CDynamicModelObject = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Function;
						GC.KeepAlive(m_afterAttached_CallBack_void_CDynamicModelObject);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(this.NativeObject, m_afterAttached_CallBack_void_CDynamicModelObject);
						m_beforeAttached_CallBack_void_CDynamicModelObject = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Function;
						GC.KeepAlive(m_beforeAttached_CallBack_void_CDynamicModelObject);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(this.NativeObject, m_beforeAttached_CallBack_void_CDynamicModelObject);
						m_attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Function;
						GC.KeepAlive(m_attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(this.NativeObject, m_attachStateHasChanged_CallBack_void_CDynamicModelObject_ev_bool);
						m_getName_CallBack_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_setName_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Function;
						GC.KeepAlive(m_setName_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
					}
				}
				public static DynamicModelObjectResourceListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicModelObjectResourceListener obj = baseObj as  DynamicModelObjectResourceListener;
					if (object.Equals(obj, null))
					{
						obj = new DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObjectResourceListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicModelObjectResourceListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicModelObjectResourceListener emptyInstance = new DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 动态目标轨迹动画监听对象
			/// </summary>
			public class DynamicGlobeNodeTrackAnimationListener : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 动态目标轨迹动画监听对象构造函数
				/// </summary>
				public DynamicGlobeNodeTrackAnimationListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDynamicGlobeNodeTrackAnimationListenerProxy", null);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool(ref IntPtr dynamicModelObjectName, ref double timePosition, ref byte isLooping);

				protected animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool m_animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition, ref bool isLooping);

				/// <summary>
				/// 动画过程到达指定帧之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				public virtual void AnimationBeforeTimePositon_NoVirtual(string dynamicModelObjectName, double timePosition, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(this.NativeObject, dynamicModelObjectName, ref timePosition, ref isLooping);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Function(ref IntPtr dynamicModelObjectName, ref double timePosition, ref byte isLooping)
				{
					string strdynamicModelObjectName= Marshal.PtrToStringAnsi(dynamicModelObjectName);
					ClassFactory.FreeString(ref dynamicModelObjectName);
					bool isLoopingBool = Convert.ToBoolean(isLooping);
					
					AnimationBeforeTimePositon(strdynamicModelObjectName,timePosition, isLoopingBool);
					
					isLooping = Convert.ToByte(isLoopingBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition, ref bool isLooping);

				/// <summary>
				/// 动画过程到达指定帧之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				public virtual void AnimationBeforeTimePositon(string dynamicModelObjectName, double timePosition, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(this.NativeObject, dynamicModelObjectName, ref timePosition, ref isLooping);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool(ref IntPtr dynamicModelObjectName, ref double timePosition, ref byte isLooping);

				protected animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool m_animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition, ref bool isLooping);

				/// <summary>
				/// 动画过程到达指定帧之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				public virtual void AnimationAfterTimePositon_NoVirtual(string dynamicModelObjectName, double timePosition, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(this.NativeObject, dynamicModelObjectName, ref timePosition, ref isLooping);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Function(ref IntPtr dynamicModelObjectName, ref double timePosition, ref byte isLooping)
				{
					string strdynamicModelObjectName= Marshal.PtrToStringAnsi(dynamicModelObjectName);
					ClassFactory.FreeString(ref dynamicModelObjectName);
					bool isLoopingBool = Convert.ToBoolean(isLooping);
					
					AnimationAfterTimePositon(strdynamicModelObjectName,timePosition, isLoopingBool);
					
					isLooping = Convert.ToByte(isLoopingBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition, ref bool isLooping);

				/// <summary>
				/// 动画过程到达指定帧之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				/// <param name="isLooping">是否即将进行循环播放</param>
				public virtual void AnimationAfterTimePositon(string dynamicModelObjectName, double timePosition, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(this.NativeObject, dynamicModelObjectName, ref timePosition, ref isLooping);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void animationBeforeEnd_CallBack_void_EVString_ev_real64(ref IntPtr dynamicModelObjectName, ref double timePosition);

				protected animationBeforeEnd_CallBack_void_EVString_ev_real64 m_animationBeforeEnd_CallBack_void_EVString_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_NoVirtual(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition);

				/// <summary>
				/// 动画结束之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				public virtual void AnimationBeforeEnd_NoVirtual(string dynamicModelObjectName, double timePosition)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_NoVirtual(this.NativeObject, dynamicModelObjectName, ref timePosition);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Function(ref IntPtr dynamicModelObjectName, ref double timePosition)
				{
					string strdynamicModelObjectName= Marshal.PtrToStringAnsi(dynamicModelObjectName);
					ClassFactory.FreeString(ref dynamicModelObjectName);
					
					AnimationBeforeEnd(strdynamicModelObjectName,timePosition);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition);

				/// <summary>
				/// 动画结束之前调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				public virtual void AnimationBeforeEnd(string dynamicModelObjectName, double timePosition)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(this.NativeObject, dynamicModelObjectName, ref timePosition);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void animationAfterEnd_CallBack_void_EVString_ev_real64(ref IntPtr dynamicModelObjectName, ref double timePosition);

				protected animationAfterEnd_CallBack_void_EVString_ev_real64 m_animationAfterEnd_CallBack_void_EVString_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_NoVirtual(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition);

				/// <summary>
				/// 动画结束之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				public virtual void AnimationAfterEnd_NoVirtual(string dynamicModelObjectName, double timePosition)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_NoVirtual(this.NativeObject, dynamicModelObjectName, ref timePosition);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Function(ref IntPtr dynamicModelObjectName, ref double timePosition)
				{
					string strdynamicModelObjectName= Marshal.PtrToStringAnsi(dynamicModelObjectName);
					ClassFactory.FreeString(ref dynamicModelObjectName);
					
					AnimationAfterEnd(strdynamicModelObjectName,timePosition);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(IntPtr pNativeObject, string dynamicModelObjectName, ref double timePosition);

				/// <summary>
				/// 动画结束之后调用
				/// </summary>
				/// <param name="dynamicModelObjectName">动态目标对象</param>
				/// <param name="timePosition">当前动画时间</param>
				public virtual void AnimationAfterEnd(string dynamicModelObjectName, double timePosition)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(this.NativeObject, dynamicModelObjectName, ref timePosition);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener", new DynamicGlobeNodeTrackAnimationListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListenerProxy", new DynamicGlobeNodeTrackAnimationListenerClassFactory());

				public DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(IntPtr pObject, animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(IntPtr pObject, animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(IntPtr pObject, animationBeforeEnd_CallBack_void_EVString_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(IntPtr pObject, animationAfterEnd_CallBack_void_EVString_ev_real64 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Function;
						GC.KeepAlive(m_animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(this.NativeObject, m_animationBeforeTimePositon_CallBack_void_EVString_ev_real64_ev_bool);
						m_animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Function;
						GC.KeepAlive(m_animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(this.NativeObject, m_animationAfterTimePositon_CallBack_void_EVString_ev_real64_ev_bool);
						m_animationBeforeEnd_CallBack_void_EVString_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Function;
						GC.KeepAlive(m_animationBeforeEnd_CallBack_void_EVString_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(this.NativeObject, m_animationBeforeEnd_CallBack_void_EVString_ev_real64);
						m_animationAfterEnd_CallBack_void_EVString_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Function;
						GC.KeepAlive(m_animationAfterEnd_CallBack_void_EVString_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(this.NativeObject, m_animationAfterEnd_CallBack_void_EVString_ev_real64);
					}
				}
				public static DynamicGlobeNodeTrackAnimationListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicGlobeNodeTrackAnimationListener obj = baseObj as  DynamicGlobeNodeTrackAnimationListener;
					if (object.Equals(obj, null))
					{
						obj = new DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicGlobeNodeTrackAnimationListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicGlobeNodeTrackAnimationListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicGlobeNodeTrackAnimationListener emptyInstance = new DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 相机动画控制点参数对象
			/// </summary>
			public class CameraAnimationParam : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造相机动画控制点参数
				/// </summary>
				public CameraAnimationParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCameraAnimationParam",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time( IntPtr pObject, double value );

				public 				double Time
				{
					get
					{
						double ret=Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time(this.NativeObject,value);
					}
				}

				private EarthView.World.Spatial.Math.Vector3 PositionField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Math.Vector3 Position
				{
					get
					{
						IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(PositionField, null)){
							PositionField.NativeObject = __ptr;
							return PositionField;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						PositionField = value;
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Spatial.Math.Degree YawField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Math.Degree Yaw
				{
					get
					{
						IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(YawField, null)){
							YawField.NativeObject = __ptr;
							return YawField;
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
						YawField = value;
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Spatial.Math.Degree PitchField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Math.Degree Pitch
				{
					get
					{
						IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(PitchField, null)){
							PitchField.NativeObject = __ptr;
							return PitchField;
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
						PitchField = value;
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Spatial.Math.Degree RollField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Math.Degree Roll
				{
					get
					{
						IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(RollField, null)){
							RollField.NativeObject = __ptr;
							return RollField;
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
						RollField = value;
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Spatial.Math.Vector3 ScaleField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Math.Vector3 Scale
				{
					get
					{
						IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(ScaleField, null)){
							ScaleField.NativeObject = __ptr;
							return ScaleField;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						ScaleField = value;
						Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadCameraAnimationParam = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam", new CameraAnimationParamClassFactory());

				public CameraAnimationParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static CameraAnimationParam FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CameraAnimationParam obj = baseObj as  CameraAnimationParam;
					if (object.Equals(obj, null))
					{
						obj = new CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCameraAnimationParam");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CameraAnimationParamClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CameraAnimationParam emptyInstance = new CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 相机动画控制点参数集合
			/// </summary>
			public class CameraAnimationParamSet : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				public CameraAnimationParamSet() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCameraAnimationParamSet",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_push_back_void_CCameraAnimationParam(IntPtr pNativeObject, IntPtr t);

				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				public void Push_back(EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam t)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_push_back_void_CCameraAnimationParam(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_pop_back_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				public void Pop_back()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_pop_back_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_front_CCameraAnimationParam(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam Front()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_front_CCameraAnimationParam(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam csObj = new EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam;
						csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_back_CCameraAnimationParam(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam Back()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_back_CCameraAnimationParam(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam csObj = new EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam;
						csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParam(IntPtr pNativeObject, uint pos, IntPtr t);

				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				public void Insert(uint pos, EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam t)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParam(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParamSet(IntPtr pNativeObject, uint pos, IntPtr other);

				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				public void Insert(uint pos, EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParamSet other)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParamSet(this.NativeObject, pos, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				public void Remove(ulong pos)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_remove_void_ev_size_t(this.NativeObject, pos);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_empty_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				public bool Empty()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_empty_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_at_CCameraAnimationParam_ev_size_t(IntPtr pNativeObject, ulong n);

				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam At(ulong n)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_at_CCameraAnimationParam_ev_size_t(this.NativeObject, n);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam csObj = new EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam;
						csObj.BindNativeObject(__ptr, "CCameraAnimationParam");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_size_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				public ulong Size()
				{
					ulong ret=EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_size_ev_size_t(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				public void Resize(ulong newSize)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_resize_void_ev_size_t(this.NativeObject, newSize);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				public void Reserve(ulong count)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_reserve_void_ev_size_t(this.NativeObject, count);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				public void Clear()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_clear_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadCameraAnimationParamSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet", new CameraAnimationParamSetClassFactory());

				public CameraAnimationParamSet(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static CameraAnimationParamSet FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CameraAnimationParamSet obj = baseObj as  CameraAnimationParamSet;
					if (object.Equals(obj, null))
					{
						obj = new CameraAnimationParamSet(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCameraAnimationParamSet");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CameraAnimationParamSetClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CameraAnimationParamSet emptyInstance = new CameraAnimationParamSet(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 轨迹动画控制点参数集合
			/// </summary>
			public class GlobeControlPointSet : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				public GlobeControlPointSet() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGlobeControlPointSet",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_push_back_void_CGlobeControlPoint(IntPtr pNativeObject, IntPtr t);

				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				public void Push_back(EarthView.World.Spatial3D.GlobeControlPoint t)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_push_back_void_CGlobeControlPoint(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_pop_back_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				public void Pop_back()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_pop_back_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_front_CGlobeControlPoint(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				public EarthView.World.Spatial3D.GlobeControlPoint Front()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_front_CGlobeControlPoint(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_back_CGlobeControlPoint(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				public EarthView.World.Spatial3D.GlobeControlPoint Back()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_back_CGlobeControlPoint(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPoint(IntPtr pNativeObject, uint pos, IntPtr t);

				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				public void Insert(uint pos, EarthView.World.Spatial3D.GlobeControlPoint t)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPoint(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPointSet(IntPtr pNativeObject, uint pos, IntPtr other);

				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				public void Insert(uint pos, EarthView.IndustryEngine.DynamicModelLibrary.GlobeControlPointSet other)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPointSet(this.NativeObject, pos, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				public void Remove(ulong pos)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_remove_void_ev_size_t(this.NativeObject, pos);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_empty_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				public bool Empty()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_empty_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_at_CGlobeControlPoint_ev_size_t(IntPtr pNativeObject, ulong n);

				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				public EarthView.World.Spatial3D.GlobeControlPoint At(ulong n)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_at_CGlobeControlPoint_ev_size_t(this.NativeObject, n);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_size_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				public ulong Size()
				{
					ulong ret=EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_size_ev_size_t(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				public void Resize(ulong newSize)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_resize_void_ev_size_t(this.NativeObject, newSize);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				public void Reserve(ulong count)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_reserve_void_ev_size_t(this.NativeObject, count);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				public void Clear()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_clear_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadGlobeControlPointSet = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet", new GlobeControlPointSetClassFactory());

				public GlobeControlPointSet(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static GlobeControlPointSet FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GlobeControlPointSet obj = baseObj as  GlobeControlPointSet;
					if (object.Equals(obj, null))
					{
						obj = new GlobeControlPointSet(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGlobeControlPointSet");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GlobeControlPointSetClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GlobeControlPointSet emptyInstance = new GlobeControlPointSet(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 动态目标对象
			/// </summary>
			public class DynamicModelObject : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 轨迹动画监听对象
				/// </summary>
				public class DynamicAnimationListener : EarthView.World.Graphic.SphereNodeAnimationTrack.SphereNodeAnimationTrackListener
				{
					/// <summary>
					/// 轨迹动画监听对象构造函数
					/// </summary>
					/// <param name="ref_manager">场景管理器</param>
					/// <param name="ref_modelObject">关联的动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
					public DynamicAnimationListener(EarthView.World.Graphic.SceneManager ref_manager, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject ref_modelObject) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_manager = new BasePtr(ref_manager);
						list.Add("ref_manager", valueref_manager.PtrVal);
						BasePtr valueref_modelObject = new BasePtr(ref_modelObject);
						list.Add("ref_modelObject", valueref_modelObject.PtrVal);
						Create("CDynamicAnimationListenerProxy", list);
						if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject+DynamicAnimationListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr kf);

					/// <summary>
					/// 获取当前帧飞行控制点半径
					/// </summary>
					/// <param name="kf">当前飞行帧,该参数对象的生命周期要保持大于本对象的生命周期</param>
					/// <returns>当前帧飞行控制点半径</returns>
					public new double GetRadius_NoVirtual(EarthView.World.Graphic.SphereTransformKeyFrame kf)
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(this.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(IntPtr pNativeObject, IntPtr kf);

					/// <summary>
					/// 获取当前帧飞行控制点半径
					/// </summary>
					/// <param name="kf">当前飞行帧,该参数对象的生命周期要保持大于本对象的生命周期</param>
					/// <returns>当前帧飞行控制点半径</returns>
					public override double GetRadius(EarthView.World.Graphic.SphereTransformKeyFrame kf)
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(this.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 计算当前帧飞行控制点偏航角
					/// </summary>
					/// <param name="latA">起始点纬度</param>
					/// <param name="lonA">起始点经度</param>
					/// <param name="latB">目标点纬度</param>
					/// <param name="lonB">目标点经度</param>
					/// <returns>当前帧飞行控制点偏航角</returns>
					public new double GetHeading_NoVirtual(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 计算当前帧飞行控制点偏航角
					/// </summary>
					/// <param name="latA">起始点纬度</param>
					/// <param name="lonA">起始点经度</param>
					/// <param name="latB">目标点纬度</param>
					/// <param name="lonB">目标点经度</param>
					/// <returns>当前帧飞行控制点偏航角</returns>
					public override double GetHeading(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr yawA, IntPtr pitchA, IntPtr bankA, IntPtr yawB, IntPtr pitchB, IntPtr bankB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr bank);

					/// <summary>
					/// 计算欧拉角
					/// </summary>
					/// <param name="yawA">第一个yaw角</param>
					/// <param name="pitchA">第一个pitch角</param>
					/// <param name="bankA">第一个pitch角</param>
					/// <param name="yawB">第二个yaw角</param>
					/// <param name="pitchB">第二个pitch角</param>
					/// <param name="bankB">第二个pitch角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="bank">返回的pitch角</param>
					/// <returns></returns>
					public new void GetEuler_NoVirtual(EarthView.World.Spatial.Math.Degree yawA, EarthView.World.Spatial.Math.Degree pitchA, EarthView.World.Spatial.Math.Degree bankA, EarthView.World.Spatial.Math.Degree yawB, EarthView.World.Spatial.Math.Degree pitchB, EarthView.World.Spatial.Math.Degree bankB, double timeRatio, ref EarthView.World.Spatial.Math.Degree yaw, ref EarthView.World.Spatial.Math.Degree pitch, ref EarthView.World.Spatial.Math.Degree bank)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(this.NativeObject, object.Equals(yawA, null) ? IntPtr.Zero : yawA.NativeObject, object.Equals(pitchA, null) ? IntPtr.Zero : pitchA.NativeObject, object.Equals(bankA, null) ? IntPtr.Zero : bankA.NativeObject, object.Equals(yawB, null) ? IntPtr.Zero : yawB.NativeObject, object.Equals(pitchB, null) ? IntPtr.Zero : pitchB.NativeObject, object.Equals(bankB, null) ? IntPtr.Zero : bankB.NativeObject, timeRatio, object.Equals(yaw, null) ? IntPtr.Zero : yaw.NativeObject, object.Equals(pitch, null) ? IntPtr.Zero : pitch.NativeObject, object.Equals(bank, null) ? IntPtr.Zero : bank.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(IntPtr pNativeObject, IntPtr yawA, IntPtr pitchA, IntPtr bankA, IntPtr yawB, IntPtr pitchB, IntPtr bankB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr bank);

					/// <summary>
					/// 计算欧拉角
					/// </summary>
					/// <param name="yawA">第一个yaw角</param>
					/// <param name="pitchA">第一个pitch角</param>
					/// <param name="bankA">第一个pitch角</param>
					/// <param name="yawB">第二个yaw角</param>
					/// <param name="pitchB">第二个pitch角</param>
					/// <param name="bankB">第二个pitch角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="bank">返回的pitch角</param>
					/// <returns></returns>
					public override void GetEuler(EarthView.World.Spatial.Math.Degree yawA, EarthView.World.Spatial.Math.Degree pitchA, EarthView.World.Spatial.Math.Degree bankA, EarthView.World.Spatial.Math.Degree yawB, EarthView.World.Spatial.Math.Degree pitchB, EarthView.World.Spatial.Math.Degree bankB, double timeRatio, ref EarthView.World.Spatial.Math.Degree yaw, ref EarthView.World.Spatial.Math.Degree pitch, ref EarthView.World.Spatial.Math.Degree bank)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.NativeObject, object.Equals(yawA, null) ? IntPtr.Zero : yawA.NativeObject, object.Equals(pitchA, null) ? IntPtr.Zero : pitchA.NativeObject, object.Equals(bankA, null) ? IntPtr.Zero : bankA.NativeObject, object.Equals(yawB, null) ? IntPtr.Zero : yawB.NativeObject, object.Equals(pitchB, null) ? IntPtr.Zero : pitchB.NativeObject, object.Equals(bankB, null) ? IntPtr.Zero : bankB.NativeObject, timeRatio, object.Equals(yaw, null) ? IntPtr.Zero : yaw.NativeObject, object.Equals(pitch, null) ? IntPtr.Zero : pitch.NativeObject, object.Equals(bank, null) ? IntPtr.Zero : bank.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setAltitudeMode_CallBack_void_AltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

					protected setAltitudeMode_CallBack_void_AltitudeMode m_setAltitudeMode_CallBack_void_AltitudeMode;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					public virtual void SetAltitudeMode_NoVirtual(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_NoVirtual(this.NativeObject, altitudeMode);
						
					}

					protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Function(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
					{
						SetAltitudeMode(altitudeMode);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					public virtual void SetAltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(this.NativeObject, altitudeMode);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getAltitudeMode_CallBack_AltitudeMode();

					protected getAltitudeMode_CallBack_AltitudeMode m_getAltitudeMode_CallBack_AltitudeMode;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取高度模式
					/// </summary>
					/// <returns>高度模式</returns>
					public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetAltitudeMode_NoVirtual()
					{
						int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
						
					}

					protected  int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Function()
					{
						EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE csret=GetAltitudeMode();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(IntPtr pNativeObject);

					/// <summary>
					/// 获取高度模式
					/// </summary>
					/// <returns>高度模式</returns>
					public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetAltitudeMode()
					{
						int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicAnimationListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener", new DynamicAnimationListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListenerProxy", new DynamicAnimationListenerClassFactory());

					public DynamicAnimationListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(IntPtr pObject, setAltitudeMode_CallBack_void_AltitudeMode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(IntPtr pObject, getAltitudeMode_CallBack_AltitudeMode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(IntPtr pObject, getRadius_CallBack_ev_real64_CSphereTransformKeyFrame pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(IntPtr pObject, getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setAltitudeMode_CallBack_void_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Function;
							GC.KeepAlive(m_setAltitudeMode_CallBack_void_AltitudeMode);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(this.NativeObject, m_setAltitudeMode_CallBack_void_AltitudeMode);
							m_getAltitudeMode_CallBack_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Function;
							GC.KeepAlive(m_getAltitudeMode_CallBack_AltitudeMode);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(this.NativeObject, m_getAltitudeMode_CallBack_AltitudeMode);
							m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Function;
							GC.KeepAlive(m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(this.NativeObject, m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame);
							m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Function;
							GC.KeepAlive(m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.NativeObject, m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree);
							m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Function;
							GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
						}
					}
					public override bool GetInterpolatedKeyFrame(EarthView.World.Graphic.AnimationTrack t, EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
					{
						return base.GetInterpolatedKeyFrame_NoVirtual(t,timeIndex,kf);
					}
					public static DynamicAnimationListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicAnimationListener obj = baseObj as  DynamicAnimationListener;
						if (object.Equals(obj, null))
						{
							obj = new DynamicAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicAnimationListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicAnimationListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicAnimationListener emptyInstance = new DynamicAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_manager">场景管理器</param>
				/// <param name="ref_camera">相机</param>
				/// <param name="scutcheonLineColor">标牌连接线颜色</param>
				/// <param name="scutcheonFrameColor">标牌边框颜色</param>
				/// <param name="scutcheonTextColor">标牌字体颜色</param>
				/// <param name="scutcheonLineLength">标牌延伸线长度</param>
				/// <param name="scutcheonLineMatName">标牌连接线材质名称</param>
				/// <param name="scutcheonFrameMatName">标牌边框材质名称</param>
				/// <param name="scutcheonOverlayMatName">标牌底图纹理材质名称</param>
				/// <param name="ref_modelObjectManager">父容器对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public DynamicModelObject(string name, EarthView.World.Graphic.SceneManager ref_manager, EarthView.World.Spatial3D.GlobeCamera ref_camera, EarthView.World.Graphic.ColourValue scutcheonLineColor, EarthView.World.Graphic.ColourValue scutcheonFrameColor, EarthView.World.Graphic.ColourValue scutcheonTextColor, double scutcheonLineLength, string scutcheonLineMatName, string scutcheonFrameMatName, string scutcheonOverlayMatName, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager ref_modelObjectManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_manager = new BasePtr(ref_manager);
					list.Add("ref_manager", valueref_manager.PtrVal);
					BasePtr valueref_camera = new BasePtr(ref_camera);
					list.Add("ref_camera", valueref_camera.PtrVal);
					BasePtr valuescutcheonLineColor = new BasePtr(scutcheonLineColor);
					list.Add("scutcheonLineColor", valuescutcheonLineColor.PtrVal);
					BasePtr valuescutcheonFrameColor = new BasePtr(scutcheonFrameColor);
					list.Add("scutcheonFrameColor", valuescutcheonFrameColor.PtrVal);
					BasePtr valuescutcheonTextColor = new BasePtr(scutcheonTextColor);
					list.Add("scutcheonTextColor", valuescutcheonTextColor.PtrVal);
					BasePtr valuescutcheonLineLength = new BasePtr(scutcheonLineLength);
					list.Add("scutcheonLineLength", valuescutcheonLineLength.PtrVal);
					BasePtr valuescutcheonLineMatName = new BasePtr(scutcheonLineMatName);
					list.Add("scutcheonLineMatName", valuescutcheonLineMatName.PtrVal);
					BasePtr valuescutcheonFrameMatName = new BasePtr(scutcheonFrameMatName);
					list.Add("scutcheonFrameMatName", valuescutcheonFrameMatName.PtrVal);
					BasePtr valuescutcheonOverlayMatName = new BasePtr(scutcheonOverlayMatName);
					list.Add("scutcheonOverlayMatName", valuescutcheonOverlayMatName.PtrVal);
					BasePtr valueref_modelObjectManager = new BasePtr(ref_modelObjectManager);
					list.Add("ref_modelObjectManager", valueref_modelObjectManager.PtrVal);
					Create("CDynamicModelObjectProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLoading_void_ev_bool(IntPtr pNativeObject, byte loading);

				public void SetIsLoading(bool loading)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLoading_void_ev_bool(this.NativeObject, Convert.ToByte(loading));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_isLoading_ev_bool(IntPtr pNativeObject);

				public bool IsLoading()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_isLoading_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener(IntPtr ref_resourceListener);

				protected addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener m_addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_resourceListener);

				/// <summary>
				/// 添加资源监听
				/// </summary>
				/// <param name="ref_resourceListener">要添加的资源监听</param>
				public virtual bool AddResourceListener_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener ref_resourceListener)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_NoVirtual(this.NativeObject, object.Equals(ref_resourceListener, null) ? IntPtr.Zero : ref_resourceListener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Function(IntPtr ref_resourceListener)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener csobj_ref_resourceListener = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_resourceListener.BindNativeObject(ref_resourceListener,"CDynamicModelObjectResourceListener");
					csobj_ref_resourceListener.Delegate = true;
					IClassFactory csobj_ref_resourceListenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_resourceListener.GetCppInstanceTypeName());
					if (csobj_ref_resourceListenerClassFactory != null)
					{
						csobj_ref_resourceListener.Delegate = true;
						csobj_ref_resourceListener = csobj_ref_resourceListenerClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener;
						csobj_ref_resourceListener.BindNativeObject(ref_resourceListener, "CDynamicModelObjectResourceListener");
						csobj_ref_resourceListener.Delegate = true;
					}
					
					bool csret=AddResourceListener(csobj_ref_resourceListener);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(IntPtr pNativeObject, IntPtr ref_resourceListener);

				/// <summary>
				/// 添加资源监听
				/// </summary>
				/// <param name="ref_resourceListener">要添加的资源监听</param>
				public virtual bool AddResourceListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListener ref_resourceListener)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(this.NativeObject, object.Equals(ref_resourceListener, null) ? IntPtr.Zero : ref_resourceListener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte removeResourceListener_CallBack_ev_bool_EVString(ref IntPtr name);

				protected removeResourceListener_CallBack_ev_bool_EVString m_removeResourceListener_CallBack_ev_bool_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除资源监听
				/// </summary>
				/// <param name="name">要删除的资源监听名称</param>
				public virtual bool RemoveResourceListener_NoVirtual(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_NoVirtual(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					bool csret=RemoveResourceListener(strname);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除资源监听
				/// </summary>
				/// <param name="name">要删除的资源监听名称</param>
				public virtual bool RemoveResourceListener(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取动目标唯一标识名称
				/// </summary>
				/// <returns>标唯一标识名称</returns>
				public string GetName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createGlobeNodeTrackAnimation_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 创建轨迹动画对象
				/// </summary>
				/// <param name="name">名称</param>
				public void CreateGlobeNodeTrackAnimation(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createGlobeNodeTrackAnimation_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setEnabledToGetHeading_void_ev_bool(IntPtr pNativeObject, ref bool isEnable);

				/// <summary>
				/// 设置是否获取动目标朝向
				/// </summary>
				/// <param name="value">是否获取动目标朝向</param>
				public void SetEnabledToGetHeading(bool isEnable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setEnabledToGetHeading_void_ev_bool(this.NativeObject, ref isEnable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getEnabledToGetHeading_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否获取动目标朝向
				/// </summary>
				/// <returns>是否获取动目标朝向</returns>
				public bool GetEnabledToGetHeading()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getEnabledToGetHeading_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setFlySpeed_void_ev_real64(IntPtr pNativeObject, ref double speed);

				/// <summary>
				/// 设置轨迹动画飞行速度
				/// </summary>
				/// <param name="speed">飞行速度</param>
				public void SetFlySpeed(double speed)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setFlySpeed_void_ev_real64(this.NativeObject, ref speed);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getFlySpeed_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画飞行速度
				/// </summary>
				/// <returns>轨迹动画飞行速度</returns>
				public double GetFlySpeed()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getFlySpeed_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolate_void_ev_bool(IntPtr pNativeObject, ref bool interpolate);

				/// <summary>
				/// 设置轨迹动画是否进行插值
				/// </summary>
				/// <param name="interpolate">是否插值</param>
				public void SetInterpolate(bool interpolate)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolate_void_ev_bool(this.NativeObject, ref interpolate);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolate_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画是否进行插值
				/// </summary>
				/// <returns>轨迹动画是否进行插值</returns>
				public bool GetInterpolate()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolate_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateStartPos_void_ev_real64(IntPtr pNativeObject, ref double pos);

				/// <summary>
				/// 设置轨迹动画插值起始点位置（大于0.5，会产生两端交叉现象）
				/// </summary>
				/// <param name="pos">插值起始点</param>
				public void SetInterpolateStartPos(double pos)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateStartPos_void_ev_real64(this.NativeObject, ref pos);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateStartPos_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画插值起始点位置
				/// </summary>
				/// <returns>插值起始点</returns>
				public double GetInterpolateStartPos()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateStartPos_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateSmoothFactor_void_ev_real64(IntPtr pNativeObject, ref double smoothFactor);

				/// <summary>
				/// 设置轨迹动画插值平滑系数（值越小越平滑)
				/// </summary>
				/// <param name="smoothFactor">插值平滑系数</param>
				public void SetInterpolateSmoothFactor(double smoothFactor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateSmoothFactor_void_ev_real64(this.NativeObject, ref smoothFactor);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateSmoothFactor_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画插值平滑系数（值越小越平滑)
				/// </summary>
				/// <returns>插值平滑系数</returns>
				public double GetInterpolateSmoothFactor()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateSmoothFactor_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用轨迹动画节点的LOD策略
				/// </summary>
				/// <returns>是否启用轨迹动画节点的LOD策略</returns>
				public bool GetGlobeAnimationLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用轨迹动画节点的LOD策略
				/// </summary>
				/// <param name="enable">是否启用轨迹动画节点的LOD策略</param>
				public void SetGlobeAnimationLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				public bool GetModelLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				public void SetModelLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				public bool GetScutcheonLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				public void SetScutcheonLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				public bool GetRibbonTrailLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				public void SetRibbonTrailLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				public bool GetParticleLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				public void SetParticleLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用LOD策略</returns>
				public bool GetTrackTrailLodStrategyItemEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用LOD策略</param>
				public void SetTrackTrailLodStrategyItemEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置轨迹动画LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetGlobeAnimationLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetGlobeAnimationLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离的平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetGlobeAnimationLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置模型LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetModelLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetModelLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetModelLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置特效LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetParticleLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetParticleLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetParticleLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置标牌LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetScutcheonLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取标牌LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetScutcheonLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取标牌LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetScutcheonLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置航迹LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetTrackTrailLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取航迹LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetTrackTrailLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取航迹LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetTrackTrailLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 设置飘带LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void SetRibbonTrailLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取飘带LOD子项目的最小以及最大可见距离
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离</param>
				/// <param name="maxVisibleValue">最大可见距离</param>
				public void GetRibbonTrailLodStrategyItemValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemSquareValue_void_Real_Real(IntPtr pNativeObject, ref double minVisibleValue, ref double maxVisibleValue);

				/// <summary>
				/// 获取飘带LOD子项目的最小以及最大可见距离平方
				/// </summary>
				/// <param name="minVisibleValue">最小可见距离平方</param>
				/// <param name="maxVisibleValue">最大可见距离平方</param>
				public void GetRibbonTrailLodStrategyItemSquareValue(ref double minVisibleValue, ref double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemSquareValue_void_Real_Real(this.NativeObject, ref minVisibleValue, ref maxVisibleValue);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createCameraNodeTrackAnimation_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 创建相机动画对象
				/// </summary>
				/// <param name="name">名称</param>
				public void CreateCameraNodeTrackAnimation(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createCameraNodeTrackAnimation_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 启动相机动画
				/// </summary>
				public void StartCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 启动轨迹动画
				/// </summary>
				/// <param name=""></param>
				public void StartGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartGlobeNodeTrack_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否可以启动轨迹动画
				/// </summary>
				/// <returns>是否可以启动轨迹动画</returns>
				public bool CanStartGlobeNodeTrack()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartGlobeNodeTrack_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartCameraNodeTrack_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否可以启动相机动画
				/// </summary>
				/// <returns>是否可以启动相机动画</returns>
				public bool CanStartCameraNodeTrack()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartCameraNodeTrack_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoint_void_CGlobeControlPoint(IntPtr pNativeObject, IntPtr globeControlPoint);

				/// <summary>
				/// 添加轨迹动画关键控制点
				/// </summary>
				/// <param name="globeControlPoint">控制点</param>
				public void AddGlobeNodeTrackPoint(EarthView.World.Spatial3D.GlobeControlPoint globeControlPoint)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoint_void_CGlobeControlPoint(this.NativeObject, object.Equals(globeControlPoint, null) ? IntPtr.Zero : globeControlPoint.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointSet(IntPtr pNativeObject, IntPtr points);

				/// <summary>
				/// 添加一组轨迹动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				public void AddGlobeNodeTrackPoints(ref EarthView.IndustryEngine.DynamicModelLibrary.GlobeControlPointSet points)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointSet(this.NativeObject, object.Equals(points, null) ? IntPtr.Zero : points.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointMap(IntPtr pNativeObject, IntPtr points);

				/// <summary>
				/// 添加一组特定关键帧时间的轨迹动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				public void AddGlobeNodeTrackPoints(ref EarthView.World.Spatial3D.GlobeControlPointMap points)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointMap(this.NativeObject, object.Equals(points, null) ? IntPtr.Zero : points.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllGlobeNodeTrackPoints_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除所有轨迹动画关键控制点
				/// </summary>
				public void ClearAllGlobeNodeTrackPoints()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllGlobeNodeTrackPoints_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshGlobeNodeTrackAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 刷新轨迹动画关键帧
				/// </summary>
				public void RefreshGlobeNodeTrackAnimation()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshGlobeNodeTrackAnimation_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoint_void_CCameraAnimationParam(IntPtr pNativeObject, IntPtr point);

				/// <summary>
				/// 添加相机动画关键控制点
				/// </summary>
				/// <param name="cameraControlPoint">控制点参数</param>
				public void AddCameraNodeTrackPoint(EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam point)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoint_void_CCameraAnimationParam(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoints_void_CCameraAnimationParamSet(IntPtr pNativeObject, IntPtr points);

				/// <summary>
				/// 添加一组相机动画关键控制点
				/// </summary>
				/// <param name="points">一组控制点</param>
				public void AddCameraNodeTrackPoints(ref EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParamSet points)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoints_void_CCameraAnimationParamSet(this.NativeObject, object.Equals(points, null) ? IntPtr.Zero : points.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllCameraNodeTrackPoints_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除所有相机动画关键控制点
				/// </summary>
				public void ClearAllCameraNodeTrackPoints()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllCameraNodeTrackPoints_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshCameraNodeTrackAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 刷新相机动画关键帧
				/// </summary>
				public void RefreshCameraNodeTrackAnimation()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshCameraNodeTrackAnimation_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelScale_void_CVector3(IntPtr pNativeObject, IntPtr scale);

				/// <summary>
				/// 设置模型对象缩放系数
				/// </summary>
				/// <param name="scale">模型对象缩放系数</param>
				public void SetModelScale(EarthView.World.Spatial.Math.Vector3 scale)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelScale_void_CVector3(this.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelScale_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型对象缩放系数
				/// </summary>
				/// <returns>模型对象缩放系数</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelScale()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelScale_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLocalOffsetVector_void_CVector3(IntPtr pNativeObject, IntPtr offsetVector);

				/// <summary>
				/// 设置模型对象局部坐标系偏移量
				/// </summary>
				/// <param name="offsetVector">局部坐标系偏移量</param>
				public void SetModelLocalOffsetVector(EarthView.World.Spatial.Math.Vector3 offsetVector)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLocalOffsetVector_void_CVector3(this.NativeObject, object.Equals(offsetVector, null) ? IntPtr.Zero : offsetVector.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalOffsetVector_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型局部坐标系偏移量
				/// </summary>
				/// <returns>局部坐标系偏移量</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelLocalOffsetVector()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalOffsetVector_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelRotateDegree_void_CVector3(IntPtr pNativeObject, IntPtr rotateDegree);

				/// <summary>
				/// 设置模型旋转角度
				/// </summary>
				/// <param name="rotateDegree">绕XYZ轴旋转角度</param>
				public void SetModelRotateDegree(EarthView.World.Spatial.Math.Vector3 rotateDegree)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelRotateDegree_void_CVector3(this.NativeObject, object.Equals(rotateDegree, null) ? IntPtr.Zero : rotateDegree.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelRotateDegree_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型旋转角度
				/// </summary>
				/// <returns>模型旋转角度</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelRotateDegree()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelRotateDegree_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelVisible_void_bool(IntPtr pNativeObject, byte modelVisible);

				/// <summary>
				/// 设置模型对象是否可见
				/// </summary>
				/// <param name="modelVisible">模型对象是否可见</param>
				public void SetModelVisible(bool modelVisible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelVisible_void_bool(this.NativeObject, Convert.ToByte(modelVisible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelVisible_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型对象是否可见
				/// </summary>
				/// <returns>true为可见，false为不可见</returns>
				public bool GetModelVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelVisible_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonVisible_void_bool(IntPtr pNativeObject, byte visible);

				/// <summary>
				/// 设置标牌是否可见
				/// </summary>
				/// <param name="visible">标牌对象是否可见</param>				
				public void SetScutcheonVisible(bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonVisible_void_bool(this.NativeObject, Convert.ToByte(visible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonVisible_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌是否可见
				/// </summary>
				/// <returns>标牌对象是否可见</returns>	
				public bool GetScutcheonVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonVisible_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineColor_void_CColourValue(IntPtr pNativeObject, IntPtr lineColor);

				/// <summary>
				/// 设置标牌连接线颜色
				/// </summary>
				/// <param name="textColor">标牌连接线颜色</param>
				public void SetScutcheonLineColor(EarthView.World.Graphic.ColourValue lineColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineColor_void_CColourValue(this.NativeObject, object.Equals(lineColor, null) ? IntPtr.Zero : lineColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineColor_CColourValue(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌连接线颜色
				/// </summary>
				/// <returns>标牌连接线颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetScutcheonLineColor()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineColor_CColourValue(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineLength_void_Real(IntPtr pNativeObject, ref double lineLength);

				/// <summary>
				/// 设置标牌连接线长度
				/// </summary>
				/// <param name="lineLength">标牌连接线长度</param>
				public void SetScutcheonLineLength(double lineLength)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineLength_void_Real(this.NativeObject, ref lineLength);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineLength_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌连接线长度
				/// </summary>
				/// <returns>标牌连接线长度</returns>	
				public double GetScutcheonLineLength()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineLength_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonTextColor_void_CColourValue(IntPtr pNativeObject, IntPtr textColor);

				/// <summary>
				/// 设置标牌字体颜色
				/// </summary>
				/// <param name="textColor">标牌字体颜色</param>
				public void SetScutcheonTextColor(EarthView.World.Graphic.ColourValue textColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonTextColor_void_CColourValue(this.NativeObject, object.Equals(textColor, null) ? IntPtr.Zero : textColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonTextColor_CColourValue(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌字体颜色
				/// </summary>
				/// <returns>标牌字体颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetScutcheonTextColor()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonTextColor_CColourValue(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonCaption_void_EVString(IntPtr pNativeObject, string caption);

				/// <summary>
				/// 设置标牌描述信息
				/// </summary>
				/// <param name="caption">标牌描述信息</param>
				public void SetScutcheonCaption(string caption)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonCaption_void_EVString(this.NativeObject, caption);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonCaption_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌描述信息
				/// </summary>
				/// <returns>标牌描述信息</returns>	
				public string GetScutcheonCaption()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonCaption_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonPosition_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌地理位置
				/// </summary>
				/// <returns>标牌地理位置</returns>	
				public EarthView.World.Spatial.Math.Vector3 GetScutcheonPosition()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonPosition_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontSize_void_ev_byte(IntPtr pNativeObject, byte size);

				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="size">标牌字体大小</param>
				public void SetScutcheonFontSize(byte size)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontSize_void_ev_byte(this.NativeObject, size);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontSize_ev_byte(IntPtr pNativeObject);

				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <returns>标牌字体大小</returns>	
				public byte GetScutcheonFontSize()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontSize_ev_byte(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontName_void_EVString(IntPtr pNativeObject, string fontName);

				/// <summary>
				/// 设置标牌字体名称
				/// </summary>
				/// <param name="fontName">标牌字体名称</param>
				public void SetScutcheonFontName(string fontName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontName_void_EVString(this.NativeObject, fontName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌字体名称
				/// </summary>
				/// <returns>标牌字体名称</returns>	
				public string GetScutcheonFontName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheon_CScutcheonText(IntPtr pNativeObject);

				/// <summary>
				/// 获取标牌对象
				/// </summary>
				/// <returns>标牌对象</returns>	
				public EarthView.IndustryEngine.IndustryGraphic.ScutcheonText GetScutcheon()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheon_CScutcheonText(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonText csObj = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScutcheonText");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonText;
						csObj.BindNativeObject(__ptr, "CScutcheonText");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_lockModelObject_void(IntPtr pNativeObject);

				/// <summary>
				/// 锁定模型
				/// </summary>
				public void LockModelObject()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_lockModelObject_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unlockModelObject_void(IntPtr pNativeObject);

				/// <summary>
				/// 解除锁定模型
				/// </summary>
				public void UnlockModelObject()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unlockModelObject_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockDistance_void_ev_real64(IntPtr pNativeObject, ref double distance);

				/// <summary>
				/// 设置模型锁定距离
				/// </summary>
				/// <param name="distance">模型锁定距离</param>				
				public void SetLockDistance(double distance)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockDistance_void_ev_real64(this.NativeObject, ref distance);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockDistance_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型锁定距离
				/// </summary>
				/// <returns>模型锁定距离</returns>					
				public double GetLockDistance()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockDistance_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockTilt_void_CDegree(IntPtr pNativeObject, IntPtr tilt);

				/// <summary>
				/// 设置模型锁定俯仰角
				/// </summary>
				/// <param name="tilt">模型锁定俯仰角</param>			
				public void SetLockTilt(EarthView.World.Spatial.Math.Degree tilt)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockTilt_void_CDegree(this.NativeObject, object.Equals(tilt, null) ? IntPtr.Zero : tilt.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockTilt_CDegree(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型锁定俯仰角
				/// </summary>
				/// <returns>模型锁定俯仰角</returns>			
				public EarthView.World.Spatial.Math.Degree GetLockTilt()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockTilt_CDegree(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDegree");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csObj.BindNativeObject(__ptr, "CDegree");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockDistance_void_ev_bool(IntPtr pNativeObject, ref bool locked);

				/// <summary>
				/// 设置是否锁定模型观察距离
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				public void SetIsLockDistance(bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockDistance_void_ev_bool(this.NativeObject, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockDistance_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否锁定模型观察距离
				/// </summary>
				/// <returns>是否锁定模型观察距离</returns>	
				public bool GetIsLockDistance()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockDistance_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockTilt_void_ev_bool(IntPtr pNativeObject, ref bool locked);

				/// <summary>
				/// 设置是否锁定模型俯仰角
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				public void SetIsLockTilt(bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockTilt_void_ev_bool(this.NativeObject, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockTilt_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否锁定模型俯仰角
				/// </summary>
				/// <returns>是否锁定</returns>			
				public bool GetIsLockTilt()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockTilt_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockHeading_void_ev_bool(IntPtr pNativeObject, ref bool locked);

				/// <summary>
				/// 设置是否锁定模型偏航角
				/// </summary>
				/// <param name="locked">是否锁定</param>		
				public void SetIsLockHeading(bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockHeading_void_ev_bool(this.NativeObject, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockHeading_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否锁定模型偏航角
				/// </summary>
				/// <returns>是否锁定</returns>			
				public bool GetIsLockHeading()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockHeading_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelHighLightColor_void_CColourValue(IntPtr pNativeObject, IntPtr color);

				/// <summary>
				/// 设置模型高亮
				/// </summary>
				/// <param name="color">高亮颜色</param>
				public void SetModelHighLightColor(EarthView.World.Graphic.ColourValue color)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelHighLightColor_void_CColourValue(this.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelHighLightColor_CColourValue(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型高亮颜色
				/// </summary>
				/// <returns>高亮颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetModelHighLightColor()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelHighLightColor_CColourValue(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelIsHighLight_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型是否处于高亮状态
				/// </summary>
				/// <returns>是否高亮</returns>	
				public bool GetModelIsHighLight()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelIsHighLight_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelIsHighLight_void_ev_bool(IntPtr pNativeObject, ref bool highLight);

				/// <summary>
				/// 设置模型是否处于高亮状态
				/// </summary>
				/// <param name="highLight">是否高亮</param>
				public void SetModelIsHighLight(bool highLight)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelIsHighLight_void_ev_bool(this.NativeObject, ref highLight);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityVisible_void_ev_int32_ev_bool(IntPtr pNativeObject, int subEntityIndex, byte visible);

				/// <summary>
				/// 设置模型部件是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="visible">是否可见</param>
				public void SetSubEntityVisible(int subEntityIndex, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityVisible_void_ev_int32_ev_bool(this.NativeObject, subEntityIndex, Convert.ToByte(visible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityVisible_ev_bool_ev_int32(IntPtr pNativeObject, int subEntityIndex);

				/// <summary>
				/// 获取模型部件是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>是否可见</returns>
				public bool GetSubEntityVisible(int subEntityIndex)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityVisible_ev_bool_ev_int32(this.NativeObject, subEntityIndex);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_EVString_EVString(IntPtr pNativeObject, byte visible, string subEntityName, string particleAliasName);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				public void SetSubEntityParticleVisible(bool visible, string subEntityName, string particleAliasName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_EVString_EVString(this.NativeObject, Convert.ToByte(visible), subEntityName, particleAliasName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_ev_int32_EVString(IntPtr pNativeObject, byte visible, int subEntityIndex, string particleAliasName);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				public void SetSubEntityParticleVisible(bool visible, int subEntityIndex, string particleAliasName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_ev_int32_EVString(this.NativeObject, Convert.ToByte(visible), subEntityIndex, particleAliasName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_ev_int32(IntPtr pNativeObject, byte visible, int subEntityIndex);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				public void SetSubEntityAllParticleVisible(bool visible, int subEntityIndex)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_ev_int32(this.NativeObject, Convert.ToByte(visible), subEntityIndex);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_EVString(IntPtr pNativeObject, byte visible, string subEntityName);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityName">部件名称</param>
				public void SetSubEntityAllParticleVisible(bool visible, string subEntityName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_EVString(this.NativeObject, Convert.ToByte(visible), subEntityName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleVisible_void_bool(IntPtr pNativeObject, byte visible);

				/// <summary>
				/// 设置所有粒子是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				public void SetParticleVisible(bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleVisible_void_bool(this.NativeObject, Convert.ToByte(visible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleVisible_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取所有粒子是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				public bool GetParticleVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleVisible_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_EVString_EVString(IntPtr pNativeObject, string subEntityName, string particleAliasName);

				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				/// <returns>是否可见</returns>
				public bool GetSubEntityParticleVisible(string subEntityName, string particleAliasName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_EVString_EVString(this.NativeObject, subEntityName, particleAliasName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_ev_int32_EVString(IntPtr pNativeObject, int subEntityIndex, string particleAliasName);

				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="particleAliasName">在部件上绑定特效的别名</param>
				/// <returns>是否可见</returns>
				public bool GetSubEntityParticleVisible(int subEntityIndex, string particleAliasName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_ev_int32_EVString(this.NativeObject, subEntityIndex, particleAliasName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_EVString_EVString(IntPtr pNativeObject, byte visible, string subEntityName, string ribbonAliasName);

				/// <summary>
				/// 设置部件飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				public void SetSubEntityRibbonTrailVisible(bool visible, string subEntityName, string ribbonAliasName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_EVString_EVString(this.NativeObject, Convert.ToByte(visible), subEntityName, ribbonAliasName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_ev_int32_EVString(IntPtr pNativeObject, byte visible, int subEntityIndex, string ribbonAliasName);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				public void SetSubEntityRibbonTrailVisible(bool visible, int subEntityIndex, string ribbonAliasName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_ev_int32_EVString(this.NativeObject, Convert.ToByte(visible), subEntityIndex, ribbonAliasName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_EVString(IntPtr pNativeObject, byte visible, string subEntityName);

				/// <summary>
				/// 设置部件飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="submeshName">部件名称</param>
				public void SetSubEntityAllRibbonTrailVisible(bool visible, string subEntityName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_EVString(this.NativeObject, Convert.ToByte(visible), subEntityName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_ev_int32(IntPtr pNativeObject, byte visible, int subEntityIndex);

				/// <summary>
				/// 设置部件粒子特效是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <param name="subEntityIndex">部件索引</param>
				public void SetSubEntityAllRibbonTrailVisible(bool visible, int subEntityIndex)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_ev_int32(this.NativeObject, Convert.ToByte(visible), subEntityIndex);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_EVString_EVString(IntPtr pNativeObject, string subEntityName, string ribbonAliasName);

				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				/// <returns>是否可见</returns>
				public bool GetSubEntityRibbonTrailVisible(string subEntityName, string ribbonAliasName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_EVString_EVString(this.NativeObject, subEntityName, ribbonAliasName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_ev_int32_EVString(IntPtr pNativeObject, int subEntityIndex, string ribbonAliasName);

				/// <summary>
				/// 获取部件粒子特效是否可见
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <param name="ribbonAliasName">在部件上绑定飘带的别名</param>
				/// <returns>是否可见</returns>
				public bool GetSubEntityRibbonTrailVisible(int subEntityIndex, string ribbonAliasName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_ev_int32_EVString(this.NativeObject, subEntityIndex, ribbonAliasName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_ev_int32(IntPtr pNativeObject, int subEntityIndex);

				/// <summary>
				/// 获取子部件上绑定的飘带对象集合
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>子部件上绑定的飘带对象集合</returns>
				public EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap GetSubEntityRibbonTrailObjectMap(int subEntityIndex)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_ev_int32(this.NativeObject, subEntityIndex);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap;
						csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_ev_int32(IntPtr pNativeObject, int subEntityIndex);

				/// <summary>
				/// 获取子部件上绑定的粒子特效对象集合
				/// </summary>
				/// <param name="subEntityIndex">部件索引</param>
				/// <returns>子部件上绑定的粒子特效对象集合</returns>
				public EarthView.World.Spatial3D.ModelManager.EffectObjectMap GetSubEntityParticleObjectMap(int subEntityIndex)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_ev_int32(this.NativeObject, subEntityIndex);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.EffectObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "EffectObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.EffectObjectMap;
						csObj.BindNativeObject(__ptr, "EffectObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_EVString(IntPtr pNativeObject, string subEntityName);

				/// <summary>
				/// 获取子部件上绑定的飘带对象集合
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <returns>子部件上绑定的飘带对象集合</returns>
				public EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap GetSubEntityRibbonTrailObjectMap(string subEntityName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_EVString(this.NativeObject, subEntityName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap;
						csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_EVString(IntPtr pNativeObject, string subEntityName);

				/// <summary>
				/// 获取子部件上绑定的粒子特效对象集合
				/// </summary>
				/// <param name="subEntityName">部件名称</param>
				/// <returns>子部件上绑定的粒子特效对象集合</returns>
				public EarthView.World.Spatial3D.ModelManager.EffectObjectMap GetSubEntityParticleObjectMap(string subEntityName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_EVString(this.NativeObject, subEntityName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.EffectObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "EffectObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.EffectObjectMap;
						csObj.BindNativeObject(__ptr, "EffectObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityCount_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取子部件数目
				/// </summary>
				/// <returns>子部件数目</returns>
				public int GetSubEntityCount()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityCount_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedParticleSubEntityIndexVector_IntVector(IntPtr pNativeObject);

				/// <summary>
				/// 获取绑定特效的子部件索引
				/// </summary>
				/// <returns>绑定特效的子部件索引</returns>
				public EarthView.World.Core.IntVector GetBindedParticleSubEntityIndexVector()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedParticleSubEntityIndexVector_IntVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IntVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
						csObj.BindNativeObject(__ptr, "IntVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedRibbonTrailSubEntityIndexVector_IntVector(IntPtr pNativeObject);

				/// <summary>
				/// 获取绑定特效的子部件索引
				/// </summary>
				/// <returns>绑定特效的子部件索引</returns>
				public EarthView.World.Core.IntVector GetBindedRibbonTrailSubEntityIndexVector()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedRibbonTrailSubEntityIndexVector_IntVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IntVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
						csObj.BindNativeObject(__ptr, "IntVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止轨迹动画
				/// </summary>
				public void StopGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 暂停轨迹动画
				/// </summary>
				public void PauseGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止相机动画
				/// </summary>
				public void StopCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 暂停相机动画
				/// </summary>
				public void PauseCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 继续相机动画
				/// </summary>
				public void ContinueCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 继续轨迹动画
				/// </summary>
				public void ContinueGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackCurrentFrameTime_void_ev_real64(IntPtr pNativeObject, ref double curKeyFrameTime);

				/// <summary>
				/// 设置轨迹动画当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				public void SetGlobeNodeTrackCurrentFrameTime(double curKeyFrameTime)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackCurrentFrameTime_void_ev_real64(this.NativeObject, ref curKeyFrameTime);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackCurrentFrameTime_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				public double GetGlobeNodeTrackCurrentFrameTime()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackCurrentFrameTime_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackCurrentFrameTime_void_ev_real64(IntPtr pNativeObject, ref double curKeyFrameTime);

				/// <summary>
				/// 设置相机动画当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				public void SetCameraNodeTrackCurrentFrameTime(double curKeyFrameTime)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackCurrentFrameTime_void_ev_real64(this.NativeObject, ref curKeyFrameTime);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackCurrentFrameTime_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				public double GetCameraNodeTrackCurrentFrameTime()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackCurrentFrameTime_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackTimeRatio_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画的播放速度比率
				/// </summary>
				/// <returns>相机动画的播放速度比率</returns>
				public double GetCameraNodeTrackTimeRatio()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackTimeRatio_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackTimeRatio_void_ev_real64(IntPtr pNativeObject, ref double timeRatio);

				/// <summary>
				/// 设置相机动画的播放速度比率
				/// </summary>
				/// <param name="timeRatio">相机动画的播放速度比率</param>
				public void SetCameraNodeTrackTimeRatio(double timeRatio)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackTimeRatio_void_ev_real64(this.NativeObject, ref timeRatio);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackTimeRatio_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画的播放速度比率
				/// </summary>
				/// <returns>轨迹动画的播放速度比率</returns>
				public double GetGlobeNodeTrackTimeRatio()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackTimeRatio_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackTimeRatio_void_ev_real64(IntPtr pNativeObject, ref double timeRatio);

				/// <summary>
				/// 设置轨迹动画的播放速度比率
				/// </summary>
				/// <param name="timeRatio">轨迹动画的播放速度比率</param>
				public void SetGlobeNodeTrackTimeRatio(double timeRatio)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackTimeRatio_void_ev_real64(this.NativeObject, ref timeRatio);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackIsLoop_void_ev_bool(IntPtr pNativeObject, ref bool loop);

				/// <summary>
				/// 设置轨迹动画是否循环播放
				/// </summary>
				/// <param name="loop">是否循环</param>
				public void SetGlobeNodeTrackIsLoop(bool loop)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackIsLoop_void_ev_bool(this.NativeObject, ref loop);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackIsLoop_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画是否循环播放
				/// </summary>
				/// <returns>是否循环</returns>
				public bool GetGlobeNodeTrackIsLoop()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackIsLoop_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				protected setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode m_setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetGlobeNodeTrackAltitudeMode_NoVirtual(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_NoVirtual(this.NativeObject, altitudeMode);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Function(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					SetGlobeNodeTrackAltitudeMode(altitudeMode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetGlobeNodeTrackAltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(this.NativeObject, altitudeMode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode();

				protected getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetGlobeNodeTrackAltitudeMode_NoVirtual()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}

				protected  int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Function()
				{
					EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE csret=GetGlobeNodeTrackAltitudeMode();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetGlobeNodeTrackAltitudeMode()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(this.NativeObject);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackIsLoop_void_ev_bool(IntPtr pNativeObject, ref bool loop);

				/// <summary>
				/// 设置相机动画是否循环播放
				/// </summary>
				/// <param name="loop">是否循环</param>
				public void SetCameraNodeTrackIsLoop(bool loop)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackIsLoop_void_ev_bool(this.NativeObject, ref loop);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackIsLoop_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画是否循环播放
				/// </summary>
				/// <returns>是否循环</returns>
				public bool GetCameraNodeTrackIsLoop()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackIsLoop_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackInterpolationMode_void_InterpolationMode(IntPtr pNativeObject, EarthView.World.Graphic.Animation.INTERPOLATIONMODE interpolationmode);

				/// <summary>
				/// 设置相机动画插值模式
				/// </summary>
				/// <param name="interpolationmode">插值模式</param>
				public void SetCameraNodeTrackInterpolationMode(EarthView.World.Graphic.Animation.INTERPOLATIONMODE interpolationmode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackInterpolationMode_void_InterpolationMode(this.NativeObject, interpolationmode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackInterpolationMode_InterpolationMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画插值模式
				/// </summary>
				/// <param name=""></param>
				/// <returns>插值模式</returns>
				public EarthView.World.Graphic.Animation.INTERPOLATIONMODE GetCameraNodeTrackInterpolationMode()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackInterpolationMode_InterpolationMode(this.NativeObject);
					
					return (EarthView.World.Graphic.Animation.INTERPOLATIONMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackRotationInterpolationMode_void_RotationInterpolationMode(IntPtr pNativeObject, EarthView.World.Graphic.Animation.ROTATIONINTERPOLATIONMODE rotationInterpolationMode);

				/// <summary>
				/// 设置相机动画旋转插值模式
				/// </summary>
				/// <param name="rotationInterpolationMode">旋转插值模式</param>
				public void SetCameraNodeTrackRotationInterpolationMode(EarthView.World.Graphic.Animation.ROTATIONINTERPOLATIONMODE rotationInterpolationMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackRotationInterpolationMode_void_RotationInterpolationMode(this.NativeObject, rotationInterpolationMode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackRotationInterpolationMode_RotationInterpolationMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画旋转插值模式
				/// </summary>
				/// <returns>旋转插值模式</returns>
				public EarthView.World.Graphic.Animation.ROTATIONINTERPOLATIONMODE GetCameraNodeTrackRotationInterpolationMode()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackRotationInterpolationMode_RotationInterpolationMode(this.NativeObject);
					
					return (EarthView.World.Graphic.Animation.ROTATIONINTERPOLATIONMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailVisible_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取飘带是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				public bool GetRibbonTrailVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailVisible_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailVisible_void_ev_bool(IntPtr pNativeObject, ref bool visible);

				/// <summary>
				/// 设置飘带是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				public void SetRibbonTrailVisible(bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailVisible_void_ev_bool(this.NativeObject, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_IsPositionChanged_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 计算模型位置是否改变
				/// </summary>
				/// <returns>模型位置是否改变</returns>
				public bool IsPositionChanged()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_IsPositionChanged_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSceneNode_CSceneNode(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点（该节点通过渲染系统内部设置其节点属性，外部设置无效）
				/// </summary>
				/// <returns>轨迹动画场景节点</returns>
				public EarthView.World.Graphic.SceneNode GetSceneNode()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSceneNode_CSceneNode(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSceneNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelAxisAlignedBox_CAxisAlignedBox(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型世界坐标系下的包围盒
				/// </summary>
				/// <returns>模型包围盒</returns>
				public EarthView.World.Spatial.Math.AxisAlignedBox GetModelAxisAlignedBox()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelAxisAlignedBox_CAxisAlignedBox(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalMatrix_CMatrix4(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型局部坐标系下的变换矩阵
				/// </summary>
				/// <returns>模型局部坐标系下变换矩阵</returns>
				public EarthView.World.Spatial.Math.Matrix4 GetModelLocalMatrix()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalMatrix_CMatrix4(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMatrix4");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csObj.BindNativeObject(__ptr, "CMatrix4");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBoundingRadius_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型最大外接圆半径
				/// </summary>
				/// <returns>模型最大外接圆半径</returns>
				public double GetBoundingRadius()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBoundingRadius_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackLocalCenter_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画局部观察中心
				/// </summary>
				/// <returns>相机动画局部观察中心</returns>
				public EarthView.World.Spatial.Math.Vector3 GetCameraNodeTrackLocalCenter()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackLocalCenter_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackLocalCenter_void_CVector3(IntPtr pNativeObject, IntPtr localCenter);

				/// <summary>
				/// 设置相机动画局部观察中心
				/// </summary>
				/// <param name="localCenter">相机动画局部观察中心</param>
				public void SetCameraNodeTrackLocalCenter(EarthView.World.Spatial.Math.Vector3 localCenter)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackLocalCenter_void_CVector3(this.NativeObject, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setReflectable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否具备海洋反射效果
				/// </summary>
				/// <param name="enable">是否具备海洋反射效果</param>
				public void SetReflectable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setReflectable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getReflectable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否具备海洋反射效果
				/// </summary>
				/// <returns>是否具备海洋反射效果</returns>
				public bool GetReflectable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getReflectable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRefractable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否具备海洋折射效果
				/// </summary>
				/// <param name="enable">是否具备海洋折射效果</param>
				public void SetRefractable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRefractable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRefractable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否具备海洋折射效果
				/// </summary>
				/// <param name="enable">是否具备海洋折射效果</param>
				/// <returns>是否具备海洋折射效果</returns>
				public bool GetRefractable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRefractable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject, IntPtr ref_listener);

				/// <summary>
				/// 设置轨迹动画监听
				/// </summary>
				/// <param name="ref_listener">轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetGlobeNodeTrackAnimationListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener ref_listener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画监听
				/// </summary>
				/// <returns>轨迹动画监听</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener GetGlobeNodeTrackAnimationListener()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener;
						csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr ref_dynamicObjectEvent);

				/// <summary>
				/// 添加轨迹动画相关事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void AddGlobeNodeTrackEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent ref_dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(ref_dynamicObjectEvent, null) ? IntPtr.Zero : ref_dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeGlobeNodeTrackEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr dynamicObjectEvent);

				/// <summary>
				/// 删除轨迹动画相关事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				public void RemoveGlobeNodeTrackEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeGlobeNodeTrackEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(dynamicObjectEvent, null) ? IntPtr.Zero : dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetGlobeNodeTrackEvents_void(IntPtr pNativeObject);

				/// <summary>
				/// 重置轨迹动画相关事件的状态
				/// </summary>
				public void ResetGlobeNodeTrackEvents()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetGlobeNodeTrackEvents_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr ref_dynamicObjectEvent);

				/// <summary>
				/// 添加相机动画相关事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void AddCameraNodeTrackEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent ref_dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(ref_dynamicObjectEvent, null) ? IntPtr.Zero : ref_dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeCameraNodeTrackEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr dynamicObjectEvent);

				/// <summary>
				/// 删除轨迹动画相关事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				public void RemoveCameraNodeTrackEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeCameraNodeTrackEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(dynamicObjectEvent, null) ? IntPtr.Zero : dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetCameraNodeTrackEvents_void(IntPtr pNativeObject);

				/// <summary>
				/// 重置轨迹动画相关事件的状态
				/// </summary>
				public void ResetCameraNodeTrackEvents()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetCameraNodeTrackEvents_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelBaseObject_CModelBaseObject(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型基础对象
				/// </summary>
				/// <returns>模型基础对象</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject GetModelBaseObject()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelBaseObject_CModelBaseObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_EVString_ModelType(IntPtr pNativeObject, IntPtr ref_dataSource, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType);

				/// <summary>
				/// 绑定模型参数
				/// </summary>
				/// <param name="ref_dataSource">数据源</param>
				/// <param name="meshName">模型名称</param>
				/// <param name="modelType">模型显示类型</param>
				/// <returns>是否绑定成功</returns>
				public bool BindModelParam(EarthView.World.Spatial.GeoDataset.Idatasource ref_dataSource, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_EVString_ModelType(this.NativeObject, object.Equals(ref_dataSource, null) ? IntPtr.Zero : ref_dataSource.NativeObject, meshName, modelType);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_ev_int32_ModelType(IntPtr pNativeObject, IntPtr ref_dataSource, ref int meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType);

				/// <summary>
				/// 绑定模型参数
				/// </summary>
				/// <param name="ref_dataSource">数据源</param>
				/// <param name="meshIndex">模型索引</param>
				/// <param name="modelType">模型显示类型</param>
				/// <returns>是否绑定成功</returns>
				public bool BindModelParam(EarthView.World.Spatial.GeoDataset.Idatasource ref_dataSource, int meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_ev_int32_ModelType(this.NativeObject, object.Equals(ref_dataSource, null) ? IntPtr.Zero : ref_dataSource.NativeObject, ref meshIndex, modelType);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelBaseObject_ev_bool_CModelBaseObject(IntPtr pNativeObject, IntPtr ref_modelBaseObject);

				/// <summary>
				/// 绑定模型
				/// </summary>
				/// <param name="ref_modelBaseObject">模型对象</param>
				/// <returns>是否绑定成功</returns>
				public bool BindModelBaseObject(EarthView.World.Spatial3D.ModelManager.ModelBaseObject ref_modelBaseObject)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelBaseObject_ev_bool_CModelBaseObject(this.NativeObject, object.Equals(ref_modelBaseObject, null) ? IntPtr.Zero : ref_modelBaseObject.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unBindModel_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 解除绑定模型
				/// </summary>
				/// <returns>是否解除绑定成功</returns>
				public bool UnBindModel()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unBindModel_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setNeedUpdate_void_ev_bool(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要刷新动态目标的状态
				/// </summary>
				/// <param name="needUpdate">是否需要刷新动态目标的状态</param>
				public void SetNeedUpdate(bool needUpdate)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setNeedUpdate_void_ev_bool(this.NativeObject, ref needUpdate);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getNeedUpdate_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否需要刷新动态目标的状态
				/// </summary>
				/// <returns>是否需要刷新动态目标的状态</returns>
				public bool GetNeedUpdate()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getNeedUpdate_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailVisible_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹是否可见
				/// </summary>
				/// <returns>是否可见</returns>
				public bool GetTrackTrailVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailVisible_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailVisible_void_ev_bool(IntPtr pNativeObject, ref bool visible);

				/// <summary>
				/// 设置航迹是否可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				public void SetTrackTrailVisible(bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailVisible_void_ev_bool(this.NativeObject, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayPointNum_void_ev_int32(IntPtr pNativeObject, ref int number);

				/// <summary>
				/// 设置航迹点显示数目
				/// </summary>
				/// <param name="number">航迹点显示数目</param>
				public void SetTrackTrailDisplayPointNum(int number)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayPointNum_void_ev_int32(this.NativeObject, ref number);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayPointNum_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹点显示数目
				/// </summary>
				/// <returns>航迹点显示数目</returns>
				public int GetTrackTrailDisplayPointNum()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayPointNum_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayMode_void_EVDisplayMode(IntPtr pNativeObject, EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode);

				/// <summary>
				/// 设置航迹显示模式
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				public void SetTrackTrailDisplayMode(EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayMode_void_EVDisplayMode(this.NativeObject, displayMode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayMode_EVDisplayMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹显示模式
				/// </summary>
				/// <returns>航迹显示模式</returns>
				public EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE GetTrackTrailDisplayMode()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayMode_EVDisplayMode(this.NativeObject);
					
					return (EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSymbol_void_ISymbol(IntPtr pNativeObject, IntPtr lineSymbol);

				/// <summary>
				/// 设置航迹显示风格
				/// </summary>
				/// <param name="lineSymbol">显示风格</param>
				public void SetTrackTrailSymbol(EarthView.World.Spatial.Display.Isymbol lineSymbol)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSymbol_void_ISymbol(this.NativeObject, object.Equals(lineSymbol, null) ? IntPtr.Zero : lineSymbol.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSymbol_ISymbol(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹显示风格
				/// </summary>
				/// <returns>航迹显示风格</returns>
				public EarthView.World.Spatial.Display.Isymbol GetTrackTrailSymbol()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSymbol_ISymbol(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ISymbol");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsTrackTrailHighLine_void_ev_bool(IntPtr pNativeObject, ref bool isHighLine);

				/// <summary>
				/// 设置航迹是否显示为视高线
				/// </summary>
				/// <param name="isHighLine">是否显示为视高线</param>
				public void SetIsTrackTrailHighLine(bool isHighLine)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsTrackTrailHighLine_void_ev_bool(this.NativeObject, ref isHighLine);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsTrackTrailHighLine_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹是否显示为视高线
				/// </summary>
				/// <returns>是否显示为视高线</returns>
				public bool GetIsTrackTrailHighLine()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsTrackTrailHighLine_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineColorInfo_void_CRgbColor_CRgbColor(IntPtr pNativeObject, IntPtr staticHighLineColor, IntPtr dynamicHighLineColor);

				/// <summary>
				/// 设置视高线显示颜色
				/// </summary>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				public void SetHighLineColorInfo(EarthView.World.Spatial.Display.RgbColor staticHighLineColor, EarthView.World.Spatial.Display.RgbColor dynamicHighLineColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineColorInfo_void_CRgbColor_CRgbColor(this.NativeObject, object.Equals(staticHighLineColor, null) ? IntPtr.Zero : staticHighLineColor.NativeObject, object.Equals(dynamicHighLineColor, null) ? IntPtr.Zero : dynamicHighLineColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineDistance_void_ev_real64(IntPtr pNativeObject, ref double highLineDistance);

				/// <summary>
				/// 设置视高线间距
				/// </summary>
				/// <param name="highLineDistance">间距</param>
				public void SetHighLineDistance(double highLineDistance)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineDistance_void_ev_real64(this.NativeObject, ref highLineDistance);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getHighLineDistance_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获取视高线间距
				/// </summary>
				/// <returns>视高线间距</returns>
				public double GetHighLineDistance()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getHighLineDistance_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSpatialReference_void_ISpatialReference(IntPtr pNativeObject, IntPtr ref_sr);

				/// <summary>
				/// 设置航迹参考坐标系
				/// </summary>
				/// <param name="ref_sr">参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetTrackTrailSpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSpatialReference_void_ISpatialReference(this.NativeObject, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSpatialReference_ISpatialReference(IntPtr pNativeObject);

				/// <summary>
				/// 获取航迹参考坐标系
				/// </summary>
				/// <returns>参考坐标系</returns>
				public EarthView.World.Spatial.Geometry.Ispatialreference GetTrackTrailSpatialReference()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSpatialReference_ISpatialReference(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ISpatialReference");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeAllTrackTrailPoint_CallBack_void();

				protected removeAllTrackTrailPoint_CallBack_void m_removeAllTrackTrailPoint_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 删除所有航迹点
				/// </summary>
				public virtual void RemoveAllTrackTrailPoint_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Function()
				{
					RemoveAllTrackTrailPoint();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除所有航迹点
				/// </summary>
				public virtual void RemoveAllTrackTrailPoint()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addTrackTrailPoint_CallBack_void_CCoordinate(IntPtr point);

				protected addTrackTrailPoint_CallBack_void_CCoordinate m_addTrackTrailPoint_CallBack_void_CCoordinate;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_NoVirtual(IntPtr pNativeObject, IntPtr point);

				/// <summary>
				/// 增加航迹点
				/// </summary>
				/// <param name="point">要添加的航迹点</param>
				public virtual void AddTrackTrailPoint_NoVirtual(EarthView.World.Spatial.Geometry.Coordinate point)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_NoVirtual(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Function(IntPtr point)
				{
					EarthView.World.Spatial.Geometry.Coordinate csobj_point = new EarthView.World.Spatial.Geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_point.BindNativeObject(point,"CCoordinate");
					csobj_point.Delegate = true;
					IClassFactory csobj_pointClassFactory = GlobalClassFactoryMap.Get(csobj_point.GetCppInstanceTypeName());
					if (csobj_pointClassFactory != null)
					{
						csobj_point.Delegate = true;
						csobj_point = csobj_pointClassFactory.Create() as EarthView.World.Spatial.Geometry.Coordinate;
						csobj_point.BindNativeObject(point, "CCoordinate");
						csobj_point.Delegate = true;
					}
					
					AddTrackTrailPoint(csobj_point);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(IntPtr pNativeObject, IntPtr point);

				/// <summary>
				/// 增加航迹点
				/// </summary>
				/// <param name="point">要添加的航迹点</param>
				public virtual void AddTrackTrailPoint(EarthView.World.Spatial.Geometry.Coordinate point)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCurrentNodeScale_CallBack_CVector3();

				protected getCurrentNodeScale_CallBack_CVector3 m_getCurrentNodeScale_CallBack_CVector3;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的显示比例
				/// </summary>
				/// <returns>显示比例</returns>
				public virtual EarthView.World.Spatial.Math.Vector3 GetCurrentNodeScale_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Function()
				{
					EarthView.World.Spatial.Math.Vector3 csret=GetCurrentNodeScale();
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的显示比例
				/// </summary>
				/// <returns>显示比例</returns>
				public virtual EarthView.World.Spatial.Math.Vector3 GetCurrentNodeScale()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCurrentNodePosition_CallBack_CVector3();

				protected getCurrentNodePosition_CallBack_CVector3 m_getCurrentNodePosition_CallBack_CVector3;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的位置
				/// </summary>
				/// <returns>显示位置</returns>
				public virtual EarthView.World.Spatial.Math.Vector3 GetCurrentNodePosition_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Function()
				{
					EarthView.World.Spatial.Math.Vector3 csret=GetCurrentNodePosition();
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的位置
				/// </summary>
				/// <returns>显示位置</returns>
				public virtual EarthView.World.Spatial.Math.Vector3 GetCurrentNodePosition()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector3");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csObj.BindNativeObject(__ptr, "CVector3");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCurrentNodeQuaternion_CallBack_CQuaternion();

				protected getCurrentNodeQuaternion_CallBack_CQuaternion m_getCurrentNodeQuaternion_CallBack_CQuaternion;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的四元数
				/// </summary>
				/// <returns>动画节点四元数</returns>
				public virtual EarthView.World.Spatial.Math.Quaternion GetCurrentNodeQuaternion_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Quaternion csObj = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQuaternion");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csObj.BindNativeObject(__ptr, "CQuaternion");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Function()
				{
					EarthView.World.Spatial.Math.Quaternion csret=GetCurrentNodeQuaternion();
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画节点当前的四元数
				/// </summary>
				/// <returns>动画节点四元数</returns>
				public virtual EarthView.World.Spatial.Math.Quaternion GetCurrentNodeQuaternion()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Quaternion csObj = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQuaternion");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csObj.BindNativeObject(__ptr, "CQuaternion");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setGlobeAnimationsetEnabled_CallBack_void_ev_bool(ref byte enable);

				protected setGlobeAnimationsetEnabled_CallBack_void_ev_bool m_setGlobeAnimationsetEnabled_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置轨迹动画是否处于休眠状态
				/// </summary>
				/// <param name="enable">轨迹动画是否处于休眠状态</param>
				/// <returns></returns>
				public virtual void SetGlobeAnimationsetEnabled_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetGlobeAnimationsetEnabled(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置轨迹动画是否处于休眠状态
				/// </summary>
				/// <param name="enable">轨迹动画是否处于休眠状态</param>
				/// <returns></returns>
				public virtual void SetGlobeAnimationsetEnabled(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getGlobeAnimationsetEnabled_CallBack_ev_bool();

				protected getGlobeAnimationsetEnabled_CallBack_ev_bool m_getGlobeAnimationsetEnabled_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画是否处于休眠状态
				/// </summary>
				/// <returns>轨迹动画是否处于休眠状态</returns>
				public virtual bool GetGlobeAnimationsetEnabled_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Function()
				{
					bool csret=GetGlobeAnimationsetEnabled();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画是否处于休眠状态
				/// </summary>
				/// <returns>轨迹动画是否处于休眠状态</returns>
				public virtual bool GetGlobeAnimationsetEnabled()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64(ref double frequency);

				protected setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64 m_setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_NoVirtual(IntPtr pNativeObject, ref double frequency);

				/// <summary>
				/// 设置轨迹动画的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				public virtual void SetGlobeAnimationsetArouseFrequency_NoVirtual(double frequency)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_NoVirtual(this.NativeObject, ref frequency);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Function(ref double frequency)
				{
					SetGlobeAnimationsetArouseFrequency(frequency);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(IntPtr pNativeObject, ref double frequency);

				/// <summary>
				/// 设置轨迹动画的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				public virtual void SetGlobeAnimationsetArouseFrequency(double frequency)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(this.NativeObject, ref frequency);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getGlobeAnimationsetArouseFrequency_CallBack_ev_real64();

				protected getGlobeAnimationsetArouseFrequency_CallBack_ev_real64 m_getGlobeAnimationsetArouseFrequency_CallBack_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				public virtual double GetGlobeAnimationsetArouseFrequency_NoVirtual()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Function()
				{
					double csret=GetGlobeAnimationsetArouseFrequency();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				public virtual double GetGlobeAnimationsetArouseFrequency()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void forceArouseGlobeAnimation_CallBack_void();

				protected forceArouseGlobeAnimation_CallBack_void m_forceArouseGlobeAnimation_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 强制唤醒轨迹动画
				/// </summary>
				/// <returns></returns>
				public virtual void ForceArouseGlobeAnimation_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Function()
				{
					ForceArouseGlobeAnimation();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 强制唤醒轨迹动画
				/// </summary>
				/// <returns></returns>
				public virtual void ForceArouseGlobeAnimation()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setModelEnable_CallBack_void_ev_bool(ref byte enable);

				protected setModelEnable_CallBack_void_ev_bool m_setModelEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用模型
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetModelEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetModelEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用模型
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetModelEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getModelEnable_CallBack_ev_bool();

				protected getModelEnable_CallBack_ev_bool m_getModelEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用模型
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetModelEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Function()
				{
					bool csret=GetModelEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用模型
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetModelEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setParticleEnable_CallBack_void_ev_bool(ref byte enable);

				protected setParticleEnable_CallBack_void_ev_bool m_setParticleEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用粒子
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetParticleEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetParticleEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用粒子
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetParticleEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getParticleEnable_CallBack_ev_bool();

				protected getParticleEnable_CallBack_ev_bool m_getParticleEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用粒子
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetParticleEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Function()
				{
					bool csret=GetParticleEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用粒子
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetParticleEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setRibbonTrailEnable_CallBack_void_ev_bool(ref byte enable);

				protected setRibbonTrailEnable_CallBack_void_ev_bool m_setRibbonTrailEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用飘带
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetRibbonTrailEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetRibbonTrailEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用飘带
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetRibbonTrailEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getRibbonTrailEnable_CallBack_ev_bool();

				protected getRibbonTrailEnable_CallBack_ev_bool m_getRibbonTrailEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用飘带
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetRibbonTrailEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Function()
				{
					bool csret=GetRibbonTrailEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用飘带
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetRibbonTrailEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setScutcheonEnable_CallBack_void_ev_bool(ref byte enable);

				protected setScutcheonEnable_CallBack_void_ev_bool m_setScutcheonEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用标牌
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetScutcheonEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetScutcheonEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用标牌
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetScutcheonEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getScutcheonEnable_CallBack_ev_bool();

				protected getScutcheonEnable_CallBack_ev_bool m_getScutcheonEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用标牌
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetScutcheonEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Function()
				{
					bool csret=GetScutcheonEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用标牌
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetScutcheonEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setTrackTrailEnable_CallBack_void_ev_bool(ref byte enable);

				protected setTrackTrailEnable_CallBack_void_ev_bool m_setTrackTrailEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用航迹
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetTrackTrailEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetTrackTrailEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用航迹
				/// </summary>
				/// <param name="enable">是否启用</param>
				public virtual void SetTrackTrailEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getTrackTrailEnable_CallBack_ev_bool();

				protected getTrackTrailEnable_CallBack_ev_bool m_getTrackTrailEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用航迹
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetTrackTrailEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Function()
				{
					bool csret=GetTrackTrailEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用航迹
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetTrackTrailEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getPixelModeEnable_CallBack_ev_bool();

				protected getPixelModeEnable_CallBack_ev_bool m_getPixelModeEnable_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用像素显示模式
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetPixelModeEnable_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Function()
				{
					bool csret=GetPixelModeEnable();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用像素显示模式
				/// </summary>
				/// <returns>是否启用</returns>
				public virtual bool GetPixelModeEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPixelModeEnable_CallBack_void_ev_bool(ref byte enable);

				protected setPixelModeEnable_CallBack_void_ev_bool m_setPixelModeEnable_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用像素显示模式
				/// </summary>
				/// <param name="enable">是否启用像素显示模式</param>
				public virtual void SetPixelModeEnable_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetPixelModeEnable(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用像素显示模式
				/// </summary>
				/// <param name="enable">是否启用像素显示模式</param>
				public virtual void SetPixelModeEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getPixelModeScaleRatio_CallBack_Real();

				protected getPixelModeScaleRatio_CallBack_Real m_getPixelModeScaleRatio_CallBack_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取像素模式显示比例系数
				/// </summary>
				/// <returns>像素模式显示比例系数</returns>
				public virtual double GetPixelModeScaleRatio_NoVirtual()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Function()
				{
					double csret=GetPixelModeScaleRatio();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获取像素模式显示比例系数
				/// </summary>
				/// <returns>像素模式显示比例系数</returns>
				public virtual double GetPixelModeScaleRatio()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPixelModeScaleRatio_CallBack_void_Real(ref double scaleRatio);

				protected setPixelModeScaleRatio_CallBack_void_Real m_setPixelModeScaleRatio_CallBack_void_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_NoVirtual(IntPtr pNativeObject, ref double scaleRatio);

				/// <summary>
				/// 设置像素模式显示比例系数
				/// </summary>
				/// <param name="enable">像素模式显示比例系数</param>
				public virtual void SetPixelModeScaleRatio_NoVirtual(double scaleRatio)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_NoVirtual(this.NativeObject, ref scaleRatio);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Function(ref double scaleRatio)
				{
					SetPixelModeScaleRatio(scaleRatio);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(IntPtr pNativeObject, ref double scaleRatio);

				/// <summary>
				/// 设置像素模式显示比例系数
				/// </summary>
				/// <param name="enable">像素模式显示比例系数</param>
				public virtual void SetPixelModeScaleRatio(double scaleRatio)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(this.NativeObject, ref scaleRatio);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCameraNodeTrackOnLineMode_CallBack_void_ev_bool(ref byte enable);

				protected setCameraNodeTrackOnLineMode_CallBack_void_ev_bool m_setCameraNodeTrackOnLineMode_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置相机动画是否开启在线模式
				/// </summary>
				/// <param name="enable">是否开启在线模式</param>
				public virtual void SetCameraNodeTrackOnLineMode_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetCameraNodeTrackOnLineMode(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置相机动画是否开启在线模式
				/// </summary>
				/// <param name="enable">是否开启在线模式</param>
				public virtual void SetCameraNodeTrackOnLineMode(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCameraNodeTrackOnLineMode_CallBack_ev_bool();

				protected getCameraNodeTrackOnLineMode_CallBack_ev_bool m_getCameraNodeTrackOnLineMode_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画是否开启在线模式
				/// </summary>
				/// <returns>是否开启在线模式</returns>
				public virtual bool GetCameraNodeTrackOnLineMode_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Function()
				{
					bool csret=GetCameraNodeTrackOnLineMode();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取相机动画是否开启在线模式
				/// </summary>
				/// <returns>是否开启在线模式</returns>
				public virtual bool GetCameraNodeTrackOnLineMode()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObject = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject", new DynamicModelObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectProxy", new DynamicModelObjectClassFactory());

				public DynamicModelObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(IntPtr pObject, addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(IntPtr pObject, removeResourceListener_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(IntPtr pObject, setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(IntPtr pObject, getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(IntPtr pObject, removeAllTrackTrailPoint_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(IntPtr pObject, addTrackTrailPoint_CallBack_void_CCoordinate pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(IntPtr pObject, getCurrentNodeScale_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(IntPtr pObject, getCurrentNodePosition_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(IntPtr pObject, getCurrentNodeQuaternion_CallBack_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(IntPtr pObject, setGlobeAnimationsetEnabled_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(IntPtr pObject, getGlobeAnimationsetEnabled_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(IntPtr pObject, setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(IntPtr pObject, getGlobeAnimationsetArouseFrequency_CallBack_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(IntPtr pObject, forceArouseGlobeAnimation_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(IntPtr pObject, setModelEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(IntPtr pObject, getModelEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(IntPtr pObject, setParticleEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(IntPtr pObject, getParticleEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(IntPtr pObject, setRibbonTrailEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(IntPtr pObject, getRibbonTrailEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(IntPtr pObject, setScutcheonEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(IntPtr pObject, getScutcheonEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(IntPtr pObject, setTrackTrailEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(IntPtr pObject, getTrackTrailEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(IntPtr pObject, getPixelModeEnable_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(IntPtr pObject, setPixelModeEnable_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(IntPtr pObject, getPixelModeScaleRatio_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(IntPtr pObject, setPixelModeScaleRatio_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(IntPtr pObject, setCameraNodeTrackOnLineMode_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(IntPtr pObject, getCameraNodeTrackOnLineMode_CallBack_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Function;
						GC.KeepAlive(m_addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(this.NativeObject, m_addResourceListener_CallBack_ev_bool_CDynamicModelObjectResourceListener);
						m_removeResourceListener_CallBack_ev_bool_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Function;
						GC.KeepAlive(m_removeResourceListener_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(this.NativeObject, m_removeResourceListener_CallBack_ev_bool_EVString);
						m_setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Function;
						GC.KeepAlive(m_setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(this.NativeObject, m_setGlobeNodeTrackAltitudeMode_CallBack_void_AltitudeMode);
						m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Function;
						GC.KeepAlive(m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(this.NativeObject, m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode);
						m_removeAllTrackTrailPoint_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Function;
						GC.KeepAlive(m_removeAllTrackTrailPoint_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(this.NativeObject, m_removeAllTrackTrailPoint_CallBack_void);
						m_addTrackTrailPoint_CallBack_void_CCoordinate = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Function;
						GC.KeepAlive(m_addTrackTrailPoint_CallBack_void_CCoordinate);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(this.NativeObject, m_addTrackTrailPoint_CallBack_void_CCoordinate);
						m_getCurrentNodeScale_CallBack_CVector3 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Function;
						GC.KeepAlive(m_getCurrentNodeScale_CallBack_CVector3);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(this.NativeObject, m_getCurrentNodeScale_CallBack_CVector3);
						m_getCurrentNodePosition_CallBack_CVector3 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Function;
						GC.KeepAlive(m_getCurrentNodePosition_CallBack_CVector3);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(this.NativeObject, m_getCurrentNodePosition_CallBack_CVector3);
						m_getCurrentNodeQuaternion_CallBack_CQuaternion = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Function;
						GC.KeepAlive(m_getCurrentNodeQuaternion_CallBack_CQuaternion);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(this.NativeObject, m_getCurrentNodeQuaternion_CallBack_CQuaternion);
						m_setGlobeAnimationsetEnabled_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setGlobeAnimationsetEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(this.NativeObject, m_setGlobeAnimationsetEnabled_CallBack_void_ev_bool);
						m_getGlobeAnimationsetEnabled_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Function;
						GC.KeepAlive(m_getGlobeAnimationsetEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(this.NativeObject, m_getGlobeAnimationsetEnabled_CallBack_ev_bool);
						m_setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Function;
						GC.KeepAlive(m_setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(this.NativeObject, m_setGlobeAnimationsetArouseFrequency_CallBack_void_ev_real64);
						m_getGlobeAnimationsetArouseFrequency_CallBack_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Function;
						GC.KeepAlive(m_getGlobeAnimationsetArouseFrequency_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(this.NativeObject, m_getGlobeAnimationsetArouseFrequency_CallBack_ev_real64);
						m_forceArouseGlobeAnimation_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Function;
						GC.KeepAlive(m_forceArouseGlobeAnimation_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(this.NativeObject, m_forceArouseGlobeAnimation_CallBack_void);
						m_setModelEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setModelEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(this.NativeObject, m_setModelEnable_CallBack_void_ev_bool);
						m_getModelEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Function;
						GC.KeepAlive(m_getModelEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(this.NativeObject, m_getModelEnable_CallBack_ev_bool);
						m_setParticleEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setParticleEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(this.NativeObject, m_setParticleEnable_CallBack_void_ev_bool);
						m_getParticleEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Function;
						GC.KeepAlive(m_getParticleEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(this.NativeObject, m_getParticleEnable_CallBack_ev_bool);
						m_setRibbonTrailEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setRibbonTrailEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(this.NativeObject, m_setRibbonTrailEnable_CallBack_void_ev_bool);
						m_getRibbonTrailEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Function;
						GC.KeepAlive(m_getRibbonTrailEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(this.NativeObject, m_getRibbonTrailEnable_CallBack_ev_bool);
						m_setScutcheonEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setScutcheonEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(this.NativeObject, m_setScutcheonEnable_CallBack_void_ev_bool);
						m_getScutcheonEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Function;
						GC.KeepAlive(m_getScutcheonEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(this.NativeObject, m_getScutcheonEnable_CallBack_ev_bool);
						m_setTrackTrailEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setTrackTrailEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(this.NativeObject, m_setTrackTrailEnable_CallBack_void_ev_bool);
						m_getTrackTrailEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Function;
						GC.KeepAlive(m_getTrackTrailEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(this.NativeObject, m_getTrackTrailEnable_CallBack_ev_bool);
						m_getPixelModeEnable_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Function;
						GC.KeepAlive(m_getPixelModeEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(this.NativeObject, m_getPixelModeEnable_CallBack_ev_bool);
						m_setPixelModeEnable_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setPixelModeEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(this.NativeObject, m_setPixelModeEnable_CallBack_void_ev_bool);
						m_getPixelModeScaleRatio_CallBack_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Function;
						GC.KeepAlive(m_getPixelModeScaleRatio_CallBack_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(this.NativeObject, m_getPixelModeScaleRatio_CallBack_Real);
						m_setPixelModeScaleRatio_CallBack_void_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Function;
						GC.KeepAlive(m_setPixelModeScaleRatio_CallBack_void_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(this.NativeObject, m_setPixelModeScaleRatio_CallBack_void_Real);
						m_setCameraNodeTrackOnLineMode_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Function;
						GC.KeepAlive(m_setCameraNodeTrackOnLineMode_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(this.NativeObject, m_setCameraNodeTrackOnLineMode_CallBack_void_ev_bool);
						m_getCameraNodeTrackOnLineMode_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Function;
						GC.KeepAlive(m_getCameraNodeTrackOnLineMode_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(this.NativeObject, m_getCameraNodeTrackOnLineMode_CallBack_ev_bool);
					}
				}
				public static DynamicModelObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicModelObject obj = baseObj as  DynamicModelObject;
					if (object.Equals(obj, null))
					{
						obj = new DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicModelObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicModelObject emptyInstance = new DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
