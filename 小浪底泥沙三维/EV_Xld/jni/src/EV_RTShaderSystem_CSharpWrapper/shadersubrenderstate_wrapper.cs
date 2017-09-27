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
				public class SubRenderStateAccessorPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public SubRenderStateAccessorPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("SubRenderStateAccessorPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rep"></param>
					/// <returns></returns>
					public SubRenderStateAccessorPtr(EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("SubRenderStateAccessorPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rep"></param>
					/// <param name="inFreeMethod"></param>
					/// <returns></returns>
					public SubRenderStateAccessorPtr(EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor rep, EarthView.World.Core.SHAREDPTRFREEMETHOD inFreeMethod) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						BasePtr valueinFreeMethod = new BasePtr(inFreeMethod);
						list.Add("inFreeMethod", valueinFreeMethod.PtrVal);
						Create("SubRenderStateAccessorPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="r"></param>
					/// <returns></returns>
					public SubRenderStateAccessorPtr(EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessorPtr r) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuer = new BasePtr(r);
						list.Add("r", valuer.PtrVal);
						Create("SubRenderStateAccessorPtr", list);
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_SubRenderStateAccessorPtr_get_CSubRenderStateAccessor(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor Get()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_SubRenderStateAccessorPtr_get_CSubRenderStateAccessor(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderStateAccessor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessor;
							csObj.BindNativeObject(__ptr, "CSubRenderStateAccessor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateAccessorPtr = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr", new SubRenderStateAccessorPtrClassFactory());

					public SubRenderStateAccessorPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SubRenderStateAccessorPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderStateAccessorPtr obj = baseObj as  SubRenderStateAccessorPtr;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "SubRenderStateAccessorPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateAccessorPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderStateAccessorPtr emptyInstance = new SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SubRenderState : EarthView.World.Core.AllocatedObject
				{
					public SubRenderState() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSubRenderStateProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.SubRenderState".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getType_CallBack_EVString();

					protected getType_CallBack_EVString m_getType_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public virtual string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function()
					{
						string csret=GetType();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(IntPtr pNativeObject);

					public virtual string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getExecutionOrder_CallBack_int();

					protected getExecutionOrder_CallBack_int m_getExecutionOrder_CallBack_int;

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
					private static extern int EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_NoVirtual(IntPtr pNativeObject);

					public virtual int GetExecutionOrder_NoVirtual()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function()
					{
						int csret=GetExecutionOrder();
						
						return csret;
						
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
					private static extern int EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(IntPtr pNativeObject);

					public virtual int GetExecutionOrder()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void copyFrom_CallBack_void_CSubRenderState(IntPtr rhs);

					protected copyFrom_CallBack_void_CSubRenderState m_copyFrom_CallBack_void_CSubRenderState;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr rhs);

					public virtual void CopyFrom_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function(IntPtr rhs)
					{
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csobj_rhs = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rhs.BindNativeObject(rhs,"CSubRenderState");
						csobj_rhs.Delegate = true;
						IClassFactory csobj_rhsClassFactory = GlobalClassFactoryMap.Get(csobj_rhs.GetCppInstanceTypeName());
						if (csobj_rhsClassFactory != null)
						{
							csobj_rhs.Delegate = true;
							csobj_rhs = csobj_rhsClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csobj_rhs.BindNativeObject(rhs, "CSubRenderState");
							csobj_rhs.Delegate = true;
						}
						
						CopyFrom(csobj_rhs);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public virtual void CopyFrom(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderState_OperatorAssign_CSubRenderState_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderState OperatorAssign(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_OperatorAssign_CSubRenderState_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte createCpuSubPrograms_CallBack_bool_CProgramSet(IntPtr programSet);

					protected createCpuSubPrograms_CallBack_bool_CProgramSet m_createCpuSubPrograms_CallBack_bool_CProgramSet;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool CreateCpuSubPrograms_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=CreateCpuSubPrograms(csobj_programSet);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool CreateCpuSubPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					protected updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public virtual void UpdateGpuProgramsParams_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList)
					{
						EarthView.World.Graphic.Renderable csobj_rend = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rend.BindNativeObject(rend,"CRenderable");
						csobj_rend.Delegate = true;
						IClassFactory csobj_rendClassFactory = GlobalClassFactoryMap.Get(csobj_rend.GetCppInstanceTypeName());
						if (csobj_rendClassFactory != null)
						{
							csobj_rend.Delegate = true;
							csobj_rend = csobj_rendClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_rend.BindNativeObject(rend, "CRenderable");
							csobj_rend.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_pass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pass.BindNativeObject(pass,"CPass");
						csobj_pass.Delegate = true;
						IClassFactory csobj_passClassFactory = GlobalClassFactoryMap.Get(csobj_pass.GetCppInstanceTypeName());
						if (csobj_passClassFactory != null)
						{
							csobj_pass.Delegate = true;
							csobj_pass = csobj_passClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_pass.BindNativeObject(pass, "CPass");
							csobj_pass.Delegate = true;
						}
						EarthView.World.Graphic.AutoParamDataSource csobj_source = new EarthView.World.Graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_source.BindNativeObject(source,"CAutoParamDataSource");
						csobj_source.Delegate = true;
						IClassFactory csobj_sourceClassFactory = GlobalClassFactoryMap.Get(csobj_source.GetCppInstanceTypeName());
						if (csobj_sourceClassFactory != null)
						{
							csobj_source.Delegate = true;
							csobj_source = csobj_sourceClassFactory.Create() as EarthView.World.Graphic.AutoParamDataSource;
							csobj_source.BindNativeObject(source, "CAutoParamDataSource");
							csobj_source.Delegate = true;
						}
						EarthView.World.Graphic.LightList csobj_pLightList = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pLightList.BindNativeObject(pLightList,"LightList");
						csobj_pLightList.Delegate = true;
						IClassFactory csobj_pLightListClassFactory = GlobalClassFactoryMap.Get(csobj_pLightList.GetCppInstanceTypeName());
						if (csobj_pLightListClassFactory != null)
						{
							csobj_pLightList.Delegate = true;
							csobj_pLightList = csobj_pLightListClassFactory.Create() as EarthView.World.Graphic.LightList;
							csobj_pLightList.BindNativeObject(pLightList, "LightList");
							csobj_pLightList.Delegate = true;
						}
						
						UpdateGpuProgramsParams(csobj_rend, csobj_pass, csobj_source, csobj_pLightList);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public virtual void UpdateGpuProgramsParams(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass(IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					protected preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public virtual bool PreAddToRenderState_NoVirtual(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function(IntPtr renderState, IntPtr srcPass, IntPtr dstPass)
					{
						EarthView.World.Graphic.Rtshadersystem.RenderState csobj_renderState = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_renderState.BindNativeObject(renderState,"CRenderState");
						csobj_renderState.Delegate = true;
						IClassFactory csobj_renderStateClassFactory = GlobalClassFactoryMap.Get(csobj_renderState.GetCppInstanceTypeName());
						if (csobj_renderStateClassFactory != null)
						{
							csobj_renderState.Delegate = true;
							csobj_renderState = csobj_renderStateClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
							csobj_renderState.BindNativeObject(renderState, "CRenderState");
							csobj_renderState.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_srcPass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcPass.BindNativeObject(srcPass,"CPass");
						csobj_srcPass.Delegate = true;
						IClassFactory csobj_srcPassClassFactory = GlobalClassFactoryMap.Get(csobj_srcPass.GetCppInstanceTypeName());
						if (csobj_srcPassClassFactory != null)
						{
							csobj_srcPass.Delegate = true;
							csobj_srcPass = csobj_srcPassClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_srcPass.BindNativeObject(srcPass, "CPass");
							csobj_srcPass.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_dstPass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dstPass.BindNativeObject(dstPass,"CPass");
						csobj_dstPass.Delegate = true;
						IClassFactory csobj_dstPassClassFactory = GlobalClassFactoryMap.Get(csobj_dstPass.GetCppInstanceTypeName());
						if (csobj_dstPassClassFactory != null)
						{
							csobj_dstPass.Delegate = true;
							csobj_dstPass = csobj_dstPassClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_dstPass.BindNativeObject(dstPass, "CPass");
							csobj_dstPass.Delegate = true;
						}
						
						bool csret=PreAddToRenderState(csobj_renderState, csobj_srcPass, csobj_dstPass);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public virtual bool PreAddToRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getAccessor_SubRenderStateAccessorPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessorPtr GetAccessor()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getAccessor_SubRenderStateAccessorPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessorPtr csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "SubRenderStateAccessorPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderStateAccessorPtr;
							csObj.BindNativeObject(__ptr, "SubRenderStateAccessorPtr");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte resolveParameters_CallBack_bool_CProgramSet(IntPtr programSet);

					protected resolveParameters_CallBack_bool_CProgramSet m_resolveParameters_CallBack_bool_CProgramSet;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool ResolveParameters_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=ResolveParameters(csobj_programSet);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool ResolveParameters(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte resolveDependencies_CallBack_bool_CProgramSet(IntPtr programSet);

					protected resolveDependencies_CallBack_bool_CProgramSet m_resolveDependencies_CallBack_bool_CProgramSet;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool ResolveDependencies_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=ResolveDependencies(csobj_programSet);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool ResolveDependencies(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte addFunctionInvocations_CallBack_bool_CProgramSet(IntPtr programSet);

					protected addFunctionInvocations_CallBack_bool_CProgramSet m_addFunctionInvocations_CallBack_bool_CProgramSet;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool AddFunctionInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=AddFunctionInvocations(csobj_programSet);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected virtual bool AddFunctionInvocations(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderState = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSubRenderState", new SubRenderStateClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateProxy", new SubRenderStateClassFactory());

					public SubRenderState(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(IntPtr pObject, getExecutionOrder_CallBack_int pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(IntPtr pObject, copyFrom_CallBack_void_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(IntPtr pObject, createCpuSubPrograms_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pObject, updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pObject, preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(IntPtr pObject, resolveParameters_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(IntPtr pObject, resolveDependencies_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(IntPtr pObject, addFunctionInvocations_CallBack_bool_CProgramSet pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_getExecutionOrder_CallBack_int = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function;
							GC.KeepAlive(m_getExecutionOrder_CallBack_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(this.NativeObject, m_getExecutionOrder_CallBack_int);
							m_copyFrom_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function;
							GC.KeepAlive(m_copyFrom_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(this.NativeObject, m_copyFrom_CallBack_void_CSubRenderState);
							m_createCpuSubPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function;
							GC.KeepAlive(m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							m_resolveParameters_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveParameters_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(this.NativeObject, m_resolveParameters_CallBack_bool_CProgramSet);
							m_resolveDependencies_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveDependencies_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(this.NativeObject, m_resolveDependencies_CallBack_bool_CProgramSet);
							m_addFunctionInvocations_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function;
							GC.KeepAlive(m_addFunctionInvocations_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(this.NativeObject, m_addFunctionInvocations_CallBack_bool_CProgramSet);
						}
					}
					public static SubRenderState FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderState obj = baseObj as  SubRenderState;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSubRenderState");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderState emptyInstance = new SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SubRenderStateList : EarthView.World.Core.BaseObject
				{
					public SubRenderStateList() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("SubRenderStateList",  null);
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_push_back_void_CSubRenderState(IntPtr pNativeObject, IntPtr t);

					public void Push_back(EarthView.World.Graphic.Rtshadersystem.SubRenderState t)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_push_back_void_CSubRenderState(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_pop_back_void(IntPtr pNativeObject);

					public void Pop_back()
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_pop_back_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_front_CSubRenderState(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderState Front()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_front_CSubRenderState(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_back_CSubRenderState(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderState Back()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_back_CSubRenderState(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_insert_void_ev_uint32_CSubRenderState(IntPtr pNativeObject, uint pos, ref IntPtr t);

					public void Insert(uint pos, EarthView.World.Graphic.Rtshadersystem.SubRenderState t)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_insert_void_ev_uint32_CSubRenderState(this.NativeObject, pos, ref t.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					public void Remove(ulong pos)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_remove_void_ev_size_t(this.NativeObject, pos);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_empty_ev_bool(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_at_CSubRenderState_ev_size_t(IntPtr pNativeObject, ulong n);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderState At(ulong n)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_at_CSubRenderState_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
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
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					public void Resize(ulong newSize)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_resize_void_ev_size_t(this.NativeObject, newSize);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					public void Reserve(ulong count)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_reserve_void_ev_size_t(this.NativeObject, count);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateList = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::SubRenderStateList", new SubRenderStateListClassFactory());

					public SubRenderStateList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SubRenderStateList FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderStateList obj = baseObj as  SubRenderStateList;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderStateList(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "SubRenderStateList");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateListClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderStateList emptyInstance = new SubRenderStateList(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SubRenderStateSet : EarthView.World.Core.BaseObject
				{
					public SubRenderStateSet() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("SubRenderStateSet",  null);
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_insert_void_CSubRenderState(IntPtr pNativeObject, IntPtr val);

					public void Insert(EarthView.World.Graphic.Rtshadersystem.SubRenderState val)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_insert_void_CSubRenderState(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
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
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_size_ev_size_t(this.NativeObject);
						
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
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_erase_ev_size_t_CSubRenderState(IntPtr pNativeObject, ref IntPtr key);

					public ulong Erase(EarthView.World.Graphic.Rtshadersystem.SubRenderState key)
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_erase_ev_size_t_CSubRenderState(this.NativeObject, ref key.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_empty_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_clear_void(this.NativeObject);
						
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
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_count_ev_size_t_CSubRenderState(IntPtr pNativeObject, ref IntPtr key);

					public ulong Count(EarthView.World.Graphic.Rtshadersystem.SubRenderState key)
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_count_ev_size_t_CSubRenderState(this.NativeObject, ref key.NativeObject);
						
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
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_max_size_ev_size_t(IntPtr pNativeObject);

					public ulong Max_size()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_max_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_swap_void_SubRenderStateSet(IntPtr pNativeObject, IntPtr other);

					public void Swap(ref EarthView.World.Graphic.Rtshadersystem.SubRenderStateSet other)
					{
						EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_swap_void_SubRenderStateSet(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateSet = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet", new SubRenderStateSetClassFactory());

					public SubRenderStateSet(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SubRenderStateSet FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderStateSet obj = baseObj as  SubRenderStateSet;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "SubRenderStateSet");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateSetClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderStateSet emptyInstance = new SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SubRenderStateAccessor : EarthView.World.Core.BaseObject
				{

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_addSubRenderStateInstance_void_CSubRenderState(IntPtr pNativeObject, IntPtr subRenderState);

					public void AddSubRenderStateInstance(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_addSubRenderStateInstance_void_CSubRenderState(this.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_removeSubRenderStateInstance_void_CSubRenderState(IntPtr pNativeObject, IntPtr subRenderState);

					public void RemoveSubRenderStateInstance(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_removeSubRenderStateInstance_void_CSubRenderState(this.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_getSubRenderStateInstanceSet_SubRenderStateSet(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderStateSet GetSubRenderStateInstanceSet()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_getSubRenderStateInstanceSet_SubRenderStateSet(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderStateSet csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "SubRenderStateSet");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderStateSet;
							csObj.BindNativeObject(__ptr, "SubRenderStateSet");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateAccessor = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor", new SubRenderStateAccessorClassFactory());

					public SubRenderStateAccessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SubRenderStateAccessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderStateAccessor obj = baseObj as  SubRenderStateAccessor;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSubRenderStateAccessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateAccessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderStateAccessor emptyInstance = new SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SubRenderStateFactory : EarthView.World.Core.AllocatedObject
				{
					public SubRenderStateFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSubRenderStateFactoryProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getType_CallBack_EVString();

					protected getType_CallBack_EVString m_getType_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public virtual string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Function()
					{
						string csret=GetType();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(IntPtr pNativeObject);

					public virtual string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_CSubRenderState();

					protected createInstance_CallBack_CSubRenderState m_createInstance_CallBack_CSubRenderState;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_NoVirtual(IntPtr pNativeObject);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_NoVirtual(this.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Function()
					{
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csret=CreateInstance();
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(IntPtr pNativeObject);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(this.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					protected createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Function(IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator)
					{
						EarthView.World.Graphic.ScriptCompiler csobj_compiler = new EarthView.World.Graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_compiler.BindNativeObject(compiler,"CScriptCompiler");
						csobj_compiler.Delegate = true;
						IClassFactory csobj_compilerClassFactory = GlobalClassFactoryMap.Get(csobj_compiler.GetCppInstanceTypeName());
						if (csobj_compilerClassFactory != null)
						{
							csobj_compiler.Delegate = true;
							csobj_compiler = csobj_compilerClassFactory.Create() as EarthView.World.Graphic.ScriptCompiler;
							csobj_compiler.BindNativeObject(compiler, "CScriptCompiler");
							csobj_compiler.Delegate = true;
						}
						EarthView.World.Graphic.PropertyAbstractNode csobj_prop = new EarthView.World.Graphic.PropertyAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_prop.BindNativeObject(prop,"CPropertyAbstractNode");
						csobj_prop.Delegate = true;
						IClassFactory csobj_propClassFactory = GlobalClassFactoryMap.Get(csobj_prop.GetCppInstanceTypeName());
						if (csobj_propClassFactory != null)
						{
							csobj_prop.Delegate = true;
							csobj_prop = csobj_propClassFactory.Create() as EarthView.World.Graphic.PropertyAbstractNode;
							csobj_prop.BindNativeObject(prop, "CPropertyAbstractNode");
							csobj_prop.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_pass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pass.BindNativeObject(pass,"CPass");
						csobj_pass.Delegate = true;
						IClassFactory csobj_passClassFactory = GlobalClassFactoryMap.Get(csobj_pass.GetCppInstanceTypeName());
						if (csobj_passClassFactory != null)
						{
							csobj_pass.Delegate = true;
							csobj_pass = csobj_passClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_pass.BindNativeObject(pass, "CPass");
							csobj_pass.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator csobj_translator = new EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_translator.BindNativeObject(translator,"CSGScriptTranslator");
						csobj_translator.Delegate = true;
						IClassFactory csobj_translatorClassFactory = GlobalClassFactoryMap.Get(csobj_translator.GetCppInstanceTypeName());
						if (csobj_translatorClassFactory != null)
						{
							csobj_translator.Delegate = true;
							csobj_translator = csobj_translatorClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator;
							csobj_translator.BindNativeObject(translator, "CSGScriptTranslator");
							csobj_translator.Delegate = true;
						}
						
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csret=CreateInstance(csobj_compiler, csobj_prop, csobj_pass, csobj_translator);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr compiler, IntPtr prop, IntPtr texState, IntPtr translator);

					protected createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr texState, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.TextureUnitState texState, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(texState, null) ? IntPtr.Zero : texState.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Function(IntPtr compiler, IntPtr prop, IntPtr texState, IntPtr translator)
					{
						EarthView.World.Graphic.ScriptCompiler csobj_compiler = new EarthView.World.Graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_compiler.BindNativeObject(compiler,"CScriptCompiler");
						csobj_compiler.Delegate = true;
						IClassFactory csobj_compilerClassFactory = GlobalClassFactoryMap.Get(csobj_compiler.GetCppInstanceTypeName());
						if (csobj_compilerClassFactory != null)
						{
							csobj_compiler.Delegate = true;
							csobj_compiler = csobj_compilerClassFactory.Create() as EarthView.World.Graphic.ScriptCompiler;
							csobj_compiler.BindNativeObject(compiler, "CScriptCompiler");
							csobj_compiler.Delegate = true;
						}
						EarthView.World.Graphic.PropertyAbstractNode csobj_prop = new EarthView.World.Graphic.PropertyAbstractNode(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_prop.BindNativeObject(prop,"CPropertyAbstractNode");
						csobj_prop.Delegate = true;
						IClassFactory csobj_propClassFactory = GlobalClassFactoryMap.Get(csobj_prop.GetCppInstanceTypeName());
						if (csobj_propClassFactory != null)
						{
							csobj_prop.Delegate = true;
							csobj_prop = csobj_propClassFactory.Create() as EarthView.World.Graphic.PropertyAbstractNode;
							csobj_prop.BindNativeObject(prop, "CPropertyAbstractNode");
							csobj_prop.Delegate = true;
						}
						EarthView.World.Graphic.TextureUnitState csobj_texState = new EarthView.World.Graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_texState.BindNativeObject(texState,"CTextureUnitState");
						csobj_texState.Delegate = true;
						IClassFactory csobj_texStateClassFactory = GlobalClassFactoryMap.Get(csobj_texState.GetCppInstanceTypeName());
						if (csobj_texStateClassFactory != null)
						{
							csobj_texState.Delegate = true;
							csobj_texState = csobj_texStateClassFactory.Create() as EarthView.World.Graphic.TextureUnitState;
							csobj_texState.BindNativeObject(texState, "CTextureUnitState");
							csobj_texState.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator csobj_translator = new EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_translator.BindNativeObject(translator,"CSGScriptTranslator");
						csobj_translator.Delegate = true;
						IClassFactory csobj_translatorClassFactory = GlobalClassFactoryMap.Get(csobj_translator.GetCppInstanceTypeName());
						if (csobj_translatorClassFactory != null)
						{
							csobj_translator.Delegate = true;
							csobj_translator = csobj_translatorClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator;
							csobj_translator.BindNativeObject(translator, "CSGScriptTranslator");
							csobj_translator.Delegate = true;
						}
						
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csret=CreateInstance(csobj_compiler, csobj_prop, csobj_texState, csobj_translator);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr texState, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.TextureUnitState texState, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(texState, null) ? IntPtr.Zero : texState.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator(IntPtr translator);

					protected createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateOrRetrieveInstance_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Function(IntPtr translator)
					{
						EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator csobj_translator = new EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_translator.BindNativeObject(translator,"CSGScriptTranslator");
						csobj_translator.Delegate = true;
						IClassFactory csobj_translatorClassFactory = GlobalClassFactoryMap.Get(csobj_translator.GetCppInstanceTypeName());
						if (csobj_translatorClassFactory != null)
						{
							csobj_translator.Delegate = true;
							csobj_translator = csobj_translatorClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator;
							csobj_translator.BindNativeObject(translator, "CSGScriptTranslator");
							csobj_translator.Delegate = true;
						}
						
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csret=CreateOrRetrieveInstance(csobj_translator);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(IntPtr pNativeObject, IntPtr translator);

					public virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateOrRetrieveInstance(EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(this.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destroyInstance_CallBack_void_CSubRenderState(IntPtr subRenderState);

					protected destroyInstance_CallBack_void_CSubRenderState m_destroyInstance_CallBack_void_CSubRenderState;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr subRenderState);

					public virtual void DestroyInstance_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Function(IntPtr subRenderState)
					{
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csobj_subRenderState = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_subRenderState.BindNativeObject(subRenderState,"CSubRenderState");
						csobj_subRenderState.Delegate = true;
						IClassFactory csobj_subRenderStateClassFactory = GlobalClassFactoryMap.Get(csobj_subRenderState.GetCppInstanceTypeName());
						if (csobj_subRenderStateClassFactory != null)
						{
							csobj_subRenderState.Delegate = true;
							csobj_subRenderState = csobj_subRenderStateClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csobj_subRenderState.BindNativeObject(subRenderState, "CSubRenderState");
							csobj_subRenderState.Delegate = true;
						}
						
						DestroyInstance(csobj_subRenderState);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(IntPtr pNativeObject, IntPtr subRenderState);

					public virtual void DestroyInstance(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(this.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destroyAllInstances_CallBack_void();

					protected destroyAllInstances_CallBack_void m_destroyAllInstances_CallBack_void;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_NoVirtual(IntPtr pNativeObject);

					public virtual void DestroyAllInstances_NoVirtual()
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Function()
					{
						DestroyAllInstances();
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(IntPtr pNativeObject);

					public virtual void DestroyAllInstances()
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					protected writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public virtual void WriteInstance_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Function(IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass)
					{
						EarthView.World.Graphic.MaterialSerializer csobj_ser = new EarthView.World.Graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ser.BindNativeObject(ser,"CMaterialSerializer");
						csobj_ser.Delegate = true;
						IClassFactory csobj_serClassFactory = GlobalClassFactoryMap.Get(csobj_ser.GetCppInstanceTypeName());
						if (csobj_serClassFactory != null)
						{
							csobj_ser.Delegate = true;
							csobj_ser = csobj_serClassFactory.Create() as EarthView.World.Graphic.MaterialSerializer;
							csobj_ser.BindNativeObject(ser, "CMaterialSerializer");
							csobj_ser.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csobj_subRenderState = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_subRenderState.BindNativeObject(subRenderState,"CSubRenderState");
						csobj_subRenderState.Delegate = true;
						IClassFactory csobj_subRenderStateClassFactory = GlobalClassFactoryMap.Get(csobj_subRenderState.GetCppInstanceTypeName());
						if (csobj_subRenderStateClassFactory != null)
						{
							csobj_subRenderState.Delegate = true;
							csobj_subRenderState = csobj_subRenderStateClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csobj_subRenderState.BindNativeObject(subRenderState, "CSubRenderState");
							csobj_subRenderState.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_srcPass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcPass.BindNativeObject(srcPass,"CPass");
						csobj_srcPass.Delegate = true;
						IClassFactory csobj_srcPassClassFactory = GlobalClassFactoryMap.Get(csobj_srcPass.GetCppInstanceTypeName());
						if (csobj_srcPassClassFactory != null)
						{
							csobj_srcPass.Delegate = true;
							csobj_srcPass = csobj_srcPassClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_srcPass.BindNativeObject(srcPass, "CPass");
							csobj_srcPass.Delegate = true;
						}
						EarthView.World.Graphic.Pass csobj_dstPass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dstPass.BindNativeObject(dstPass,"CPass");
						csobj_dstPass.Delegate = true;
						IClassFactory csobj_dstPassClassFactory = GlobalClassFactoryMap.Get(csobj_dstPass.GetCppInstanceTypeName());
						if (csobj_dstPassClassFactory != null)
						{
							csobj_dstPass.Delegate = true;
							csobj_dstPass = csobj_dstPassClassFactory.Create() as EarthView.World.Graphic.Pass;
							csobj_dstPass.BindNativeObject(dstPass, "CPass");
							csobj_dstPass.Delegate = true;
						}
						
						WriteInstance(csobj_ser, csobj_subRenderState, csobj_srcPass, csobj_dstPass);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public virtual void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr ser, IntPtr subRenderState, IntPtr srcTextureUnit, IntPtr dstTextureUnit);

					protected writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_NoVirtual(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcTextureUnit, IntPtr dstTextureUnit);

					public virtual void WriteInstance_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.TextureUnitState srcTextureUnit, EarthView.World.Graphic.TextureUnitState dstTextureUnit)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcTextureUnit, null) ? IntPtr.Zero : srcTextureUnit.NativeObject, object.Equals(dstTextureUnit, null) ? IntPtr.Zero : dstTextureUnit.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Function(IntPtr ser, IntPtr subRenderState, IntPtr srcTextureUnit, IntPtr dstTextureUnit)
					{
						EarthView.World.Graphic.MaterialSerializer csobj_ser = new EarthView.World.Graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ser.BindNativeObject(ser,"CMaterialSerializer");
						csobj_ser.Delegate = true;
						IClassFactory csobj_serClassFactory = GlobalClassFactoryMap.Get(csobj_ser.GetCppInstanceTypeName());
						if (csobj_serClassFactory != null)
						{
							csobj_ser.Delegate = true;
							csobj_ser = csobj_serClassFactory.Create() as EarthView.World.Graphic.MaterialSerializer;
							csobj_ser.BindNativeObject(ser, "CMaterialSerializer");
							csobj_ser.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csobj_subRenderState = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_subRenderState.BindNativeObject(subRenderState,"CSubRenderState");
						csobj_subRenderState.Delegate = true;
						IClassFactory csobj_subRenderStateClassFactory = GlobalClassFactoryMap.Get(csobj_subRenderState.GetCppInstanceTypeName());
						if (csobj_subRenderStateClassFactory != null)
						{
							csobj_subRenderState.Delegate = true;
							csobj_subRenderState = csobj_subRenderStateClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csobj_subRenderState.BindNativeObject(subRenderState, "CSubRenderState");
							csobj_subRenderState.Delegate = true;
						}
						EarthView.World.Graphic.TextureUnitState csobj_srcTextureUnit = new EarthView.World.Graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcTextureUnit.BindNativeObject(srcTextureUnit,"CTextureUnitState");
						csobj_srcTextureUnit.Delegate = true;
						IClassFactory csobj_srcTextureUnitClassFactory = GlobalClassFactoryMap.Get(csobj_srcTextureUnit.GetCppInstanceTypeName());
						if (csobj_srcTextureUnitClassFactory != null)
						{
							csobj_srcTextureUnit.Delegate = true;
							csobj_srcTextureUnit = csobj_srcTextureUnitClassFactory.Create() as EarthView.World.Graphic.TextureUnitState;
							csobj_srcTextureUnit.BindNativeObject(srcTextureUnit, "CTextureUnitState");
							csobj_srcTextureUnit.Delegate = true;
						}
						EarthView.World.Graphic.TextureUnitState csobj_dstTextureUnit = new EarthView.World.Graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dstTextureUnit.BindNativeObject(dstTextureUnit,"CTextureUnitState");
						csobj_dstTextureUnit.Delegate = true;
						IClassFactory csobj_dstTextureUnitClassFactory = GlobalClassFactoryMap.Get(csobj_dstTextureUnit.GetCppInstanceTypeName());
						if (csobj_dstTextureUnitClassFactory != null)
						{
							csobj_dstTextureUnit.Delegate = true;
							csobj_dstTextureUnit = csobj_dstTextureUnitClassFactory.Create() as EarthView.World.Graphic.TextureUnitState;
							csobj_dstTextureUnit.BindNativeObject(dstTextureUnit, "CTextureUnitState");
							csobj_dstTextureUnit.Delegate = true;
						}
						
						WriteInstance(csobj_ser, csobj_subRenderState, csobj_srcTextureUnit, csobj_dstTextureUnit);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcTextureUnit, IntPtr dstTextureUnit);

					public virtual void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.TextureUnitState srcTextureUnit, EarthView.World.Graphic.TextureUnitState dstTextureUnit)
					{
						EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcTextureUnit, null) ? IntPtr.Zero : srcTextureUnit.NativeObject, object.Equals(dstTextureUnit, null) ? IntPtr.Zero : dstTextureUnit.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstanceImpl_CallBack_CSubRenderState();

					protected createInstanceImpl_CallBack_CSubRenderState m_createInstanceImpl_CallBack_CSubRenderState;

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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_NoVirtual(IntPtr pNativeObject);

					protected virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_NoVirtual(this.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Function()
					{
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csret=CreateInstanceImpl();
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(IntPtr pNativeObject);

					protected virtual EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(this.NativeObject);
						
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
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSubRenderStateFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory", new SubRenderStateFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactoryProxy", new SubRenderStateFactoryClassFactory());

					public SubRenderStateFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(IntPtr pObject, createInstance_CallBack_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(IntPtr pObject, createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(IntPtr pObject, destroyInstance_CallBack_void_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(IntPtr pObject, destroyAllInstances_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(IntPtr pObject, createInstanceImpl_CallBack_CSubRenderState pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_createInstance_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(this.NativeObject, m_createInstance_CallBack_CSubRenderState);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(this.NativeObject, m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							m_destroyInstance_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(this.NativeObject, m_destroyInstance_CallBack_void_CSubRenderState);
							m_destroyAllInstances_CallBack_void = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Function;
							GC.KeepAlive(m_destroyAllInstances_CallBack_void);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(this.NativeObject, m_destroyAllInstances_CallBack_void);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							m_createInstanceImpl_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Function;
							GC.KeepAlive(m_createInstanceImpl_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(this.NativeObject, m_createInstanceImpl_CallBack_CSubRenderState);
						}
					}
					public static SubRenderStateFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SubRenderStateFactory obj = baseObj as  SubRenderStateFactory;
						if (object.Equals(obj, null))
						{
							obj = new SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSubRenderStateFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SubRenderStateFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SubRenderStateFactory emptyInstance = new SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
