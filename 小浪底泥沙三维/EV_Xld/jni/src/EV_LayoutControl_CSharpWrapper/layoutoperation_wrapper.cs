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
		namespace Layout
		{
			namespace Controls
			{
				/// <summary>
				/// 操作的抽象类型.派生类需要重新实现redo()和undo()方法.当用户调用COperationManager::undo()时,该类的undo()方法会被调用
				/// </summary>
				public class LayoutOperation : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					public LayoutOperation() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLayoutOperationProxy", null);
						if (!"EarthView.World.Layout.Controls.LayoutOperation".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取操作的名称
					/// </summary>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取操作的名称
					/// </summary>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_d.dll");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_d.so");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp_d.so");

						#else 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_d.dll");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl.dll");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl.so");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp.so");

						#else 
							private static bool bLoadLayoutOperation = LoadDll.Load("EV_LayoutControl.dll");
							private static bool csbLoadLayoutOperation = LoadDll.Load("EV_LayoutControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Layout::Controls::CLayoutOperation", new LayoutOperationClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Layout::Controls::CLayoutOperationProxy", new LayoutOperationClassFactory());

					public LayoutOperation(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						}
					}
					public static LayoutOperation FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LayoutOperation obj = baseObj as  LayoutOperation;
						if (object.Equals(obj, null))
						{
							obj = new LayoutOperation(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLayoutOperation");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LayoutOperationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LayoutOperation emptyInstance = new LayoutOperation(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
