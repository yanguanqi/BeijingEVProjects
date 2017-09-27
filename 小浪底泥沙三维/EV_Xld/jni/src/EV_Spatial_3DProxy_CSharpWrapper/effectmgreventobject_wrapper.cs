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
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
			namespace Dataset
			{
			}
		}
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			/// <summary>
			/// 飘带动画监听类
			/// </summary>
			public class AnimationTrailListener : EarthView.World.Graphic.FrameListener
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="state">动画状态</param>
				/// <returns></returns>	
				public AnimationTrailListener(EarthView.World.Graphic.AnimationState ref_state) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_state = new BasePtr(ref_state);
					list.Add("ref_state", valueref_state.PtrVal);
					Create("CAnimationTrailListenerProxy", list);
					if (!"EarthView.World.Spatial3DProxy.AnimationTrailListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染队列
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>返回true</returns>	
				public new bool FrameRenderingQueued_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染队列
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>返回true</returns>	
				public override bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_d.so");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

					#else 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy.so");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

					#else 
						private static bool bLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadAnimationTrailListener = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CAnimationTrailListener", new AnimationTrailListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CAnimationTrailListenerProxy", new AnimationTrailListenerClassFactory());

				public AnimationTrailListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CAnimationTrailListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
					}
				}
				public override bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameStarted_NoVirtual(ref evt);
				}
				public override bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameEnded_NoVirtual(ref evt);
				}
				public static AnimationTrailListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimationTrailListener obj = baseObj as  AnimationTrailListener;
					if (object.Equals(obj, null))
					{
						obj = new AnimationTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAnimationTrailListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimationTrailListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimationTrailListener emptyInstance = new AnimationTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 特效窗口事件类
			/// </summary>
			public class EffectMgrEventObject : EarthView.World.Core.EventObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EffectMgrEventObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CEffectMgrEventObjectProxy", null);
					if (!"EarthView.World.Spatial3DProxy.EffectMgrEventObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void createUserType_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr parentCode, ref IntPtr newUserTypeName);

				protected createUserType_CallBack_void_EVString_EVString_EVString m_createUserType_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string parentCode, string newUserTypeName);

				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				public virtual void CreateUserType_NoVirtual(string datasourceName, string parentCode, string newUserTypeName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, parentCode, newUserTypeName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr parentCode, ref IntPtr newUserTypeName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strparentCode= Marshal.PtrToStringAnsi(parentCode);
					ClassFactory.FreeString(ref parentCode);
					string strnewUserTypeName= Marshal.PtrToStringAnsi(newUserTypeName);
					ClassFactory.FreeString(ref newUserTypeName);
					
					CreateUserType(strdatasourceName,strparentCode,strnewUserTypeName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string parentCode, string newUserTypeName);

				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				public virtual void CreateUserType(string datasourceName, string parentCode, string newUserTypeName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(this.NativeObject, datasourceName, parentCode, newUserTypeName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void createUserType_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr parentCode, ref IntPtr newUserTypeName);

				protected createUserType_CallBack_void_IDataSource_EVString_EVString m_createUserType_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string parentCode, string newUserTypeName);

				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				public virtual void CreateUserType_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string parentCode, string newUserTypeName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, parentCode, newUserTypeName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr parentCode, ref IntPtr newUserTypeName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strparentCode= Marshal.PtrToStringAnsi(parentCode);
					ClassFactory.FreeString(ref parentCode);
					string strnewUserTypeName= Marshal.PtrToStringAnsi(newUserTypeName);
					ClassFactory.FreeString(ref newUserTypeName);
					
					CreateUserType(csobj_ds, strparentCode,strnewUserTypeName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string parentCode, string newUserTypeName);

				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				public virtual void CreateUserType(EarthView.World.Spatial.GeoDataset.Idatasource ds, string parentCode, string newUserTypeName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, parentCode, newUserTypeName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onCreateUserType_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onCreateUserType_CallBack_void_CEffectTreeviewEvent m_onCreateUserType_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 创建用户自定义分类接收函数
				/// </summary>
				/// <param name="e">创建用户自定义分类事件</param>
				/// <returns></returns>
				public virtual void OnCreateUserType_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnCreateUserType(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 创建用户自定义分类接收函数
				/// </summary>
				/// <param name="e">创建用户自定义分类事件</param>
				/// <returns></returns>
				public virtual void OnCreateUserType(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent m_onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 从模板库导入事件接收函数
				/// </summary>
				/// <param name="e">从模板库导入事件</param>
				/// <returns></returns>
				public virtual void OnImportFromTemplateDB_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnImportFromTemplateDB(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 从模板库导入事件接收函数
				/// </summary>
				/// <param name="e">从模板库导入事件</param>
				/// <returns></returns>
				public virtual void OnImportFromTemplateDB(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray(ref IntPtr dir, ref IntPtr userTypeCode, ref IntPtr destDatasourceName, IntPtr successScriptNames, IntPtr errorArray);

				protected importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray m_importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_NoVirtual(IntPtr pNativeObject, string dir, string userTypeCode, string destDatasourceName, IntPtr successScriptNames, IntPtr errorArray);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="destDatasourceName">数据库名</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				public virtual void ImportFromScript_NoVirtual(string dir, string userTypeCode, string destDatasourceName, ref  EarthView.World.Core.StringArray successScriptNames, ref  EarthView.World.Core.StringArray errorArray)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_NoVirtual(this.NativeObject, dir, userTypeCode, destDatasourceName, object.Equals(successScriptNames, null) ? IntPtr.Zero : successScriptNames.NativeObject, object.Equals(errorArray, null) ? IntPtr.Zero : errorArray.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Function(ref IntPtr dir, ref IntPtr userTypeCode, ref IntPtr destDatasourceName, IntPtr successScriptNames, IntPtr errorArray)
				{
					string strdir= Marshal.PtrToStringAnsi(dir);
					ClassFactory.FreeString(ref dir);
					string struserTypeCode= Marshal.PtrToStringAnsi(userTypeCode);
					ClassFactory.FreeString(ref userTypeCode);
					string strdestDatasourceName= Marshal.PtrToStringAnsi(destDatasourceName);
					ClassFactory.FreeString(ref destDatasourceName);
					EarthView.World.Core.StringArray csobj_successScriptNames = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_successScriptNames.BindNativeObject(successScriptNames,"CStringArray");
					csobj_successScriptNames.Delegate = true;
					IClassFactory csobj_successScriptNamesClassFactory = GlobalClassFactoryMap.Get(csobj_successScriptNames.GetCppInstanceTypeName());
					if (csobj_successScriptNamesClassFactory != null)
					{
						csobj_successScriptNames.Delegate = true;
						csobj_successScriptNames = csobj_successScriptNamesClassFactory.Create() as EarthView.World.Core.StringArray;
						csobj_successScriptNames.BindNativeObject(successScriptNames, "CStringArray");
						csobj_successScriptNames.Delegate = true;
					}
					EarthView.World.Core.StringArray csobj_errorArray = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_errorArray.BindNativeObject(errorArray,"CStringArray");
					csobj_errorArray.Delegate = true;
					IClassFactory csobj_errorArrayClassFactory = GlobalClassFactoryMap.Get(csobj_errorArray.GetCppInstanceTypeName());
					if (csobj_errorArrayClassFactory != null)
					{
						csobj_errorArray.Delegate = true;
						csobj_errorArray = csobj_errorArrayClassFactory.Create() as EarthView.World.Core.StringArray;
						csobj_errorArray.BindNativeObject(errorArray, "CStringArray");
						csobj_errorArray.Delegate = true;
					}
					
					ImportFromScript(strdir,struserTypeCode,strdestDatasourceName,ref csobj_successScriptNames, ref csobj_errorArray);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(IntPtr pNativeObject, string dir, string userTypeCode, string destDatasourceName, IntPtr successScriptNames, IntPtr errorArray);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="destDatasourceName">数据库名</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				public virtual void ImportFromScript(string dir, string userTypeCode, string destDatasourceName, ref  EarthView.World.Core.StringArray successScriptNames, ref  EarthView.World.Core.StringArray errorArray)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(this.NativeObject, dir, userTypeCode, destDatasourceName, object.Equals(successScriptNames, null) ? IntPtr.Zero : successScriptNames.NativeObject, object.Equals(errorArray, null) ? IntPtr.Zero : errorArray.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray(ref IntPtr dir, ref IntPtr userTypeCode, IntPtr ds, IntPtr successScriptNames, IntPtr errorArray);

				protected importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray m_importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_NoVirtual(IntPtr pNativeObject, string dir, string userTypeCode, IntPtr ds, IntPtr successScriptNames, IntPtr errorArray);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="ds">数据库</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				public virtual void ImportFromScript_NoVirtual(string dir, string userTypeCode, EarthView.World.Spatial.GeoDataset.Idatasource ds, ref  EarthView.World.Core.StringArray successScriptNames, ref  EarthView.World.Core.StringArray errorArray)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_NoVirtual(this.NativeObject, dir, userTypeCode, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(successScriptNames, null) ? IntPtr.Zero : successScriptNames.NativeObject, object.Equals(errorArray, null) ? IntPtr.Zero : errorArray.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Function(ref IntPtr dir, ref IntPtr userTypeCode, IntPtr ds, IntPtr successScriptNames, IntPtr errorArray)
				{
					string strdir= Marshal.PtrToStringAnsi(dir);
					ClassFactory.FreeString(ref dir);
					string struserTypeCode= Marshal.PtrToStringAnsi(userTypeCode);
					ClassFactory.FreeString(ref userTypeCode);
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					EarthView.World.Core.StringArray csobj_successScriptNames = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_successScriptNames.BindNativeObject(successScriptNames,"CStringArray");
					csobj_successScriptNames.Delegate = true;
					IClassFactory csobj_successScriptNamesClassFactory = GlobalClassFactoryMap.Get(csobj_successScriptNames.GetCppInstanceTypeName());
					if (csobj_successScriptNamesClassFactory != null)
					{
						csobj_successScriptNames.Delegate = true;
						csobj_successScriptNames = csobj_successScriptNamesClassFactory.Create() as EarthView.World.Core.StringArray;
						csobj_successScriptNames.BindNativeObject(successScriptNames, "CStringArray");
						csobj_successScriptNames.Delegate = true;
					}
					EarthView.World.Core.StringArray csobj_errorArray = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_errorArray.BindNativeObject(errorArray,"CStringArray");
					csobj_errorArray.Delegate = true;
					IClassFactory csobj_errorArrayClassFactory = GlobalClassFactoryMap.Get(csobj_errorArray.GetCppInstanceTypeName());
					if (csobj_errorArrayClassFactory != null)
					{
						csobj_errorArray.Delegate = true;
						csobj_errorArray = csobj_errorArrayClassFactory.Create() as EarthView.World.Core.StringArray;
						csobj_errorArray.BindNativeObject(errorArray, "CStringArray");
						csobj_errorArray.Delegate = true;
					}
					
					ImportFromScript(strdir,struserTypeCode,csobj_ds, ref csobj_successScriptNames, ref csobj_errorArray);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(IntPtr pNativeObject, string dir, string userTypeCode, IntPtr ds, IntPtr successScriptNames, IntPtr errorArray);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="ds">数据库</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				public virtual void ImportFromScript(string dir, string userTypeCode, EarthView.World.Spatial.GeoDataset.Idatasource ds, ref  EarthView.World.Core.StringArray successScriptNames, ref  EarthView.World.Core.StringArray errorArray)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(this.NativeObject, dir, userTypeCode, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(successScriptNames, null) ? IntPtr.Zero : successScriptNames.NativeObject, object.Equals(errorArray, null) ? IntPtr.Zero : errorArray.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool(uint effectId, IntPtr effectDataSource, ref IntPtr exportPath, bool overrideFile);

				protected exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool m_exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_NoVirtual(IntPtr pNativeObject, uint effectId, IntPtr effectDataSource, string exportPath, byte overrideFile);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="effectId">要导出的特效ID</param>
				/// <param name="effectDataSource">特效数据源</param>
				/// <param name="exportPath">路径</param>
				/// <param name="overrideFile">是否覆盖名称相同的文件</param>
				/// <returns>bool，成功导出为TRUE,未成功导出为FALSE</returns>
				public virtual bool ExportEffectToLocal_NoVirtual(uint effectId, EarthView.World.Spatial3D.Dataset.EffectDataSource effectDataSource, string exportPath, bool overrideFile)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_NoVirtual(this.NativeObject, effectId, object.Equals(effectDataSource, null) ? IntPtr.Zero : effectDataSource.NativeObject, exportPath, Convert.ToByte(overrideFile));
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Function(uint effectId, IntPtr effectDataSource, ref IntPtr exportPath, bool overrideFile)
				{
					EarthView.World.Spatial3D.Dataset.EffectDataSource csobj_effectDataSource = new EarthView.World.Spatial3D.Dataset.EffectDataSource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_effectDataSource.BindNativeObject(effectDataSource,"CEffectDataSource");
					csobj_effectDataSource.Delegate = true;
					IClassFactory csobj_effectDataSourceClassFactory = GlobalClassFactoryMap.Get(csobj_effectDataSource.GetCppInstanceTypeName());
					if (csobj_effectDataSourceClassFactory != null)
					{
						csobj_effectDataSource.Delegate = true;
						csobj_effectDataSource = csobj_effectDataSourceClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectDataSource;
						csobj_effectDataSource.BindNativeObject(effectDataSource, "CEffectDataSource");
						csobj_effectDataSource.Delegate = true;
					}
					string strexportPath= Marshal.PtrToStringAnsi(exportPath);
					ClassFactory.FreeString(ref exportPath);
					
					bool csret=ExportEffectToLocal(effectId, csobj_effectDataSource, strexportPath,overrideFile);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(IntPtr pNativeObject, uint effectId, IntPtr effectDataSource, string exportPath, byte overrideFile);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="effectId">要导出的特效ID</param>
				/// <param name="effectDataSource">特效数据源</param>
				/// <param name="exportPath">路径</param>
				/// <param name="overrideFile">是否覆盖名称相同的文件</param>
				/// <returns>bool，成功导出为TRUE,未成功导出为FALSE</returns>
				public virtual bool ExportEffectToLocal(uint effectId, EarthView.World.Spatial3D.Dataset.EffectDataSource effectDataSource, string exportPath, bool overrideFile)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(this.NativeObject, effectId, object.Equals(effectDataSource, null) ? IntPtr.Zero : effectDataSource.NativeObject, exportPath, Convert.ToByte(overrideFile));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_stopImportFromScript_void_ev_bool(IntPtr pNativeObject, byte val);

				/// <summary>
				/// 停止从脚本文件导入
				/// </summary>
				/// <param name="val">是否停止导入</param>
				/// <returns></returns>
				public void StopImportFromScript(bool val)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_stopImportFromScript_void_ev_bool(this.NativeObject, Convert.ToByte(val));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onImportFromScript_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onImportFromScript_CallBack_void_CEffectTreeviewEvent m_onImportFromScript_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 从文件导入事件接收函数
				/// </summary>
				/// <param name="e">从文件导入事件</param>
				/// <returns></returns>
				public virtual void OnImportFromScript_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnImportFromScript(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 从文件导入事件接收函数
				/// </summary>
				/// <param name="e">从文件导入事件</param>
				/// <returns></returns>
				public virtual void OnImportFromScript(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent m_onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 导出到模板库事件接收函数
				/// </summary>
				/// <param name="e">导出到模板库事件</param>
				/// <returns></returns>
				public virtual void OnExportToTemplateDB_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnExportToTemplateDB(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 导出到模板库事件接收函数
				/// </summary>
				/// <param name="e">导出到模板库事件</param>
				/// <returns></returns>
				public virtual void OnExportToTemplateDB(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32(ref IntPtr datasourceName, ref IntPtr name, ref IntPtr userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				protected createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32 m_createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_NoVirtual(IntPtr pNativeObject, string datasourceName, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				public virtual void CreateNewEffect_NoVirtual(string datasourceName, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_NoVirtual(this.NativeObject, datasourceName, name, userTypeCode, type, parentEffectId);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Function(ref IntPtr datasourceName, ref IntPtr name, ref IntPtr userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string struserTypeCode= Marshal.PtrToStringAnsi(userTypeCode);
					ClassFactory.FreeString(ref userTypeCode);
					
					CreateNewEffect(strdatasourceName,strname,struserTypeCode,type, parentEffectId);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(IntPtr pNativeObject, string datasourceName, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				public virtual void CreateNewEffect(string datasourceName, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(this.NativeObject, datasourceName, name, userTypeCode, type, parentEffectId);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32(IntPtr ds, ref IntPtr name, ref IntPtr userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				protected createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32 m_createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr ds, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				public virtual void CreateNewEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, name, userTypeCode, type, parentEffectId);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Function(IntPtr ds, ref IntPtr name, ref IntPtr userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string struserTypeCode= Marshal.PtrToStringAnsi(userTypeCode);
					ClassFactory.FreeString(ref userTypeCode);
					
					CreateNewEffect(csobj_ds, strname,struserTypeCode,type, parentEffectId);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(IntPtr pNativeObject, IntPtr ds, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				public virtual void CreateNewEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, name, userTypeCode, type, parentEffectId);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onCreateNewEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onCreateNewEffect_CallBack_void_CEffectTreeviewEvent m_onCreateNewEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 创建新特效事件接收函数
				/// </summary>
				/// <param name="e">创建新特效事件</param>
				/// <returns></returns>
				public virtual void OnCreateNewEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnCreateNewEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 创建新特效事件接收函数
				/// </summary>
				/// <param name="e">创建新特效事件</param>
				/// <returns></returns>
				public virtual void OnCreateNewEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameUserType_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName);

				protected renameUserType_CallBack_void_EVString_EVString_EVString m_renameUserType_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户自定义类型名称</param>
				/// <returns></returns>
				public virtual void RenameUserType_NoVirtual(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameUserType(strdatasourceName,strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户自定义类型名称</param>
				/// <returns></returns>
				public virtual void RenameUserType(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(this.NativeObject, datasourceName, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameUserType_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr code, ref IntPtr newName);

				protected renameUserType_CallBack_void_IDataSource_EVString_EVString m_renameUserType_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户分类名称</param>
				/// <returns></returns>
				public virtual void RenameUserType_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr code, ref IntPtr newName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameUserType(csobj_ds, strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户分类名称</param>
				/// <returns></returns>
				public virtual void RenameUserType(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onRenameUserType_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onRenameUserType_CallBack_void_CEffectTreeviewEvent m_onRenameUserType_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名用户分类事件接收函数
				/// </summary>
				/// <param name="e">重命名用户分类事件</param>
				/// <returns></returns>
				public virtual void OnRenameUserType_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnRenameUserType(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名用户分类事件接收函数
				/// </summary>
				/// <param name="e">重命名用户分类事件</param>
				/// <returns></returns>
				public virtual void OnRenameUserType(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameBlendEffect_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName);

				protected renameBlendEffect_CallBack_void_EVString_EVString_EVString m_renameBlendEffect_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				public virtual void RenameBlendEffect_NoVirtual(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameBlendEffect(strdatasourceName,strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				public virtual void RenameBlendEffect(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(this.NativeObject, datasourceName, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameBlendEffect_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr code, ref IntPtr newName);

				protected renameBlendEffect_CallBack_void_IDataSource_EVString_EVString m_renameBlendEffect_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				public virtual void RenameBlendEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr code, ref IntPtr newName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameBlendEffect(csobj_ds, strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				public virtual void RenameBlendEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent m_onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名复合特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameBlendEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnRenameBlendEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名复合特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameBlendEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameSingleEffect_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName);

				protected renameSingleEffect_CallBack_void_EVString_EVString_EVString m_renameSingleEffect_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				public virtual void RenameSingleEffect_NoVirtual(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameSingleEffect(strdatasourceName,strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				public virtual void RenameSingleEffect(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(this.NativeObject, datasourceName, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyNewEffect_CallBack_void_EVString_ev_uint32_EVString(ref IntPtr datasourceName, uint effectId, ref IntPtr newName);

				protected copyNewEffect_CallBack_void_EVString_ev_uint32_EVString m_copyNewEffect_CallBack_void_EVString_ev_uint32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, uint effectId, string newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				public virtual void CopyNewEffect_NoVirtual(string datasourceName, uint effectId, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_NoVirtual(this.NativeObject, datasourceName, effectId, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Function(ref IntPtr datasourceName, uint effectId, ref IntPtr newName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					CopyNewEffect(strdatasourceName,effectId, strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(IntPtr pNativeObject, string datasourceName, uint effectId, string newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				public virtual void CopyNewEffect(string datasourceName, uint effectId, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(this.NativeObject, datasourceName, effectId, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString(IntPtr ds, uint effectId, ref IntPtr newName);

				protected copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString m_copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint effectId, string newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库指针</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				public virtual void CopyNewEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectId, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectId, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Function(IntPtr ds, uint effectId, ref IntPtr newName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					CopyNewEffect(csobj_ds, effectId, strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(IntPtr pNativeObject, IntPtr ds, uint effectId, string newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库指针</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				public virtual void CopyNewEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectId, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectId, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameSingleEffect_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr code, ref IntPtr newName);

				protected renameSingleEffect_CallBack_void_IDataSource_EVString_EVString m_renameSingleEffect_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				public virtual void RenameSingleEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr code, ref IntPtr newName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameSingleEffect(csobj_ds, strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				public virtual void RenameSingleEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent m_onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名独立特效事件接收函数
				/// </summary>
				/// <param name="e">重命名独立特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameSingleEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnRenameSingleEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名独立特效事件接收函数
				/// </summary>
				/// <param name="e">重命名独立特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameSingleEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameBEChild_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName);

				protected renameBEChild_CallBack_void_EVString_EVString_EVString m_renameBEChild_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns>
				public virtual void RenameBEChild_NoVirtual(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr code, ref IntPtr newName)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameBEChild(strdatasourceName,strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string code, string newName);

				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns>
				public virtual void RenameBEChild(string datasourceName, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(this.NativeObject, datasourceName, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renameBEChild_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr code, ref IntPtr newName);

				protected renameBEChild_CallBack_void_IDataSource_EVString_EVString m_renameBEChild_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns> 
				public virtual void RenameBEChild_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr code, ref IntPtr newName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strnewName= Marshal.PtrToStringAnsi(newName);
					ClassFactory.FreeString(ref newName);
					
					RenameBEChild(csobj_ds, strcode,strnewName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns> 
				public virtual void RenameBEChild(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code, string newName)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent m_onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名复合特效子特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效子特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameBEChildEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnRenameBEChildEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重命名复合特效子特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效子特效事件</param>
				/// <returns></returns>
				public virtual void OnRenameBEChildEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void deleteUserType_CallBack_void_EVString_EVString(ref IntPtr datasourceName, ref IntPtr code);

				protected deleteUserType_CallBack_void_EVString_EVString m_deleteUserType_CallBack_void_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string code);

				///裴大为
				//// <summary>
				//// 删除用户分类
				//// </summary>
				//// <param name="datasourceName">数据库名称</param>
				//// <param name="code">用户分类ID</param>
				//// <returns></returns> 
				public virtual void DeleteUserType_NoVirtual(string datasourceName, string code)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, code);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr code)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					
					DeleteUserType(strdatasourceName,strcode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(IntPtr pNativeObject, string datasourceName, string code);

				///裴大为
				//// <summary>
				//// 删除用户分类
				//// </summary>
				//// <param name="datasourceName">数据库名称</param>
				//// <param name="code">用户分类ID</param>
				//// <returns></returns> 
				public virtual void DeleteUserType(string datasourceName, string code)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(this.NativeObject, datasourceName, code);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void deleteUserType_CallBack_void_IDataSource_EVString(IntPtr ds, ref IntPtr code);

				protected deleteUserType_CallBack_void_IDataSource_EVString m_deleteUserType_CallBack_void_IDataSource_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string code);

				/// <summary>
				/// 删除用户分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类ID</param>
				/// <returns></returns> 
				public virtual void DeleteUserType_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Function(IntPtr ds, ref IntPtr code)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					
					DeleteUserType(csobj_ds, strcode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(IntPtr pNativeObject, IntPtr ds, string code);

				/// <summary>
				/// 删除用户分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类ID</param>
				/// <returns></returns> 
				public virtual void DeleteUserType(EarthView.World.Spatial.GeoDataset.Idatasource ds, string code)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onDeleteUserType_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onDeleteUserType_CallBack_void_CEffectTreeviewEvent m_onDeleteUserType_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 删除用户分类事件接收函数
				/// </summary>
				/// <param name="e">删除用户分类事件</param>
				/// <returns></returns>
				public virtual void OnDeleteUserType_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnDeleteUserType(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 删除用户分类事件接收函数
				/// </summary>
				/// <param name="e">删除用户分类事件</param>
				/// <returns></returns>
				public virtual void OnDeleteUserType(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType(ref IntPtr datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				protected deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType m_deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_NoVirtual(IntPtr pNativeObject, string datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				public virtual void DeleteEffect_NoVirtual(string datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_NoVirtual(this.NativeObject, datasourceName, parentEffectId, effectId, type);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Function(ref IntPtr datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					
					DeleteEffect(strdatasourceName,parentEffectId, effectId, type);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(IntPtr pNativeObject, string datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				public virtual void DeleteEffect(string datasourceName, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(this.NativeObject, datasourceName, parentEffectId, effectId, type);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType(IntPtr ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				protected deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType m_deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				public virtual void DeleteEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, parentEffectId, effectId, type);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Function(IntPtr ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					
					DeleteEffect(csobj_ds, parentEffectId, effectId, type);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(IntPtr pNativeObject, IntPtr ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				public virtual void DeleteEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, parentEffectId, effectId, type);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onDeleteEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onDeleteEffect_CallBack_void_CEffectTreeviewEvent m_onDeleteEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 删除特效事件接收函数
				/// </summary>
				/// <param name="e">删除特效事件</param>
				/// <returns></returns>
				public virtual void OnDeleteEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnDeleteEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 删除特效事件接收函数
				/// </summary>
				/// <param name="e">删除特效事件</param>
				/// <returns></returns>
				public virtual void OnDeleteEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32(ref IntPtr datasourceName, uint editEffectId, uint dragEffectId);

				protected addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32 m_addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, string datasourceName, uint editEffectId, uint dragEffectId);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				public virtual void AddEffectToBlendEffect_NoVirtual(string datasourceName, uint editEffectId, uint dragEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, datasourceName, editEffectId, dragEffectId);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Function(ref IntPtr datasourceName, uint editEffectId, uint dragEffectId)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					
					AddEffectToBlendEffect(strdatasourceName,editEffectId, dragEffectId);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(IntPtr pNativeObject, string datasourceName, uint editEffectId, uint dragEffectId);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				public virtual void AddEffectToBlendEffect(string datasourceName, uint editEffectId, uint dragEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(this.NativeObject, datasourceName, editEffectId, dragEffectId);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32(IntPtr ds, uint editEffectId, uint dragEffectId);

				protected addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32 m_addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint editEffectId, uint dragEffectId);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				public virtual void AddEffectToBlendEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint editEffectId, uint dragEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, editEffectId, dragEffectId);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Function(IntPtr ds, uint editEffectId, uint dragEffectId)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					
					AddEffectToBlendEffect(csobj_ds, editEffectId, dragEffectId);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr ds, uint editEffectId, uint dragEffectId);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				public virtual void AddEffectToBlendEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint editEffectId, uint dragEffectId)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, editEffectId, dragEffectId);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent m_onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加特效到复合特效事件接受函数
				/// </summary>
				/// <param name="e">添加特效到复合特效事件</param>
				/// <returns></returns>
				public virtual void OnAddEffectToBlendEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnAddEffectToBlendEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加特效到复合特效事件接受函数
				/// </summary>
				/// <param name="e">添加特效到复合特效事件</param>
				/// <returns></returns>
				public virtual void OnAddEffectToBlendEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_CEffectInfo_IDataSource_ev_uint32_CEffectInfo(IntPtr pNativeObject, IntPtr ds, uint editEffectId, IntPtr info);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <param name="info">添加的特效的信息</param>
				/// <returns>新的复合特效信息</returns>
				public EarthView.World.Spatial3D.Dataset.EffectInfo AddEffectToBlendEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint editEffectId, ref EarthView.World.Spatial3D.Dataset.EffectInfo info)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_CEffectInfo_IDataSource_ev_uint32_CEffectInfo(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, editEffectId, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffectInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
						csObj.BindNativeObject(__ptr, "CEffectInfo");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString(ref IntPtr dataSourceName, ref IntPtr effectName, ref IntPtr typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, ref IntPtr blendeffectName);

				protected isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString m_isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_NoVirtual(IntPtr pNativeObject, string dataSourceName, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName);

				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="dataSourceName">数据库名称</param>
				/// <param name="effectName">特效名称</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				public virtual bool IsExistName_NoVirtual(string dataSourceName, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_NoVirtual(this.NativeObject, dataSourceName, effectName, typeCode, effectType, blendeffectName);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Function(ref IntPtr dataSourceName, ref IntPtr effectName, ref IntPtr typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, ref IntPtr blendeffectName)
				{
					string strdataSourceName= Marshal.PtrToStringAnsi(dataSourceName);
					ClassFactory.FreeString(ref dataSourceName);
					string streffectName= Marshal.PtrToStringAnsi(effectName);
					ClassFactory.FreeString(ref effectName);
					string strtypeCode= Marshal.PtrToStringAnsi(typeCode);
					ClassFactory.FreeString(ref typeCode);
					string strblendeffectName= Marshal.PtrToStringAnsi(blendeffectName);
					ClassFactory.FreeString(ref blendeffectName);
					
					bool csret=IsExistName(strdataSourceName,streffectName,strtypeCode,effectType, strblendeffectName);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(IntPtr pNativeObject, string dataSourceName, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName);

				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="dataSourceName">数据库名称</param>
				/// <param name="effectName">特效名称</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				public virtual bool IsExistName(string dataSourceName, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(this.NativeObject, dataSourceName, effectName, typeCode, effectType, blendeffectName);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString(IntPtr ds, ref IntPtr effectName, ref IntPtr typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, ref IntPtr blendeffectName);

				protected isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString m_isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName);

				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectName">特效名称</param>
				/// <param name="typeCode">用户分类类型</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				public virtual bool IsExistName_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectName, typeCode, effectType, blendeffectName);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Function(IntPtr ds, ref IntPtr effectName, ref IntPtr typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, ref IntPtr blendeffectName)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string streffectName= Marshal.PtrToStringAnsi(effectName);
					ClassFactory.FreeString(ref effectName);
					string strtypeCode= Marshal.PtrToStringAnsi(typeCode);
					ClassFactory.FreeString(ref typeCode);
					string strblendeffectName= Marshal.PtrToStringAnsi(blendeffectName);
					ClassFactory.FreeString(ref blendeffectName);
					
					bool csret=IsExistName(csobj_ds, streffectName,strtypeCode,effectType, strblendeffectName);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(IntPtr pNativeObject, IntPtr ds, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName);

				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectName">特效名称</param>
				/// <param name="typeCode">用户分类类型</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				public virtual bool IsExistName(EarthView.World.Spatial.GeoDataset.Idatasource ds, string effectName, string typeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE effectType, string blendeffectName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectName, typeCode, effectType, blendeffectName);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString(ref IntPtr datasourceName, uint srcItemId, ref IntPtr dstUserTypeCode);

				protected addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString m_addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, uint srcItemId, string dstUserTypeCode);

				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcItemId">特效ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				public virtual void AddEffectToUserType_NoVirtual(string datasourceName, uint srcItemId, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_NoVirtual(this.NativeObject, datasourceName, srcItemId, dstUserTypeCode);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Function(ref IntPtr datasourceName, uint srcItemId, ref IntPtr dstUserTypeCode)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strdstUserTypeCode= Marshal.PtrToStringAnsi(dstUserTypeCode);
					ClassFactory.FreeString(ref dstUserTypeCode);
					
					AddEffectToUserType(strdatasourceName,srcItemId, strdstUserTypeCode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(IntPtr pNativeObject, string datasourceName, uint srcItemId, string dstUserTypeCode);

				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcItemId">特效ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				public virtual void AddEffectToUserType(string datasourceName, uint srcItemId, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(this.NativeObject, datasourceName, srcItemId, dstUserTypeCode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString(IntPtr ds, uint srcItemId, ref IntPtr dstUserTypeCode);

				protected addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString m_addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint srcItemId, string dstUserTypeCode);

				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcItemId">ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				public virtual void AddEffectToUserType_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint srcItemId, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, srcItemId, dstUserTypeCode);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Function(IntPtr ds, uint srcItemId, ref IntPtr dstUserTypeCode)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strdstUserTypeCode= Marshal.PtrToStringAnsi(dstUserTypeCode);
					ClassFactory.FreeString(ref dstUserTypeCode);
					
					AddEffectToUserType(csobj_ds, srcItemId, strdstUserTypeCode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(IntPtr pNativeObject, IntPtr ds, uint srcItemId, string dstUserTypeCode);

				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcItemId">ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				public virtual void AddEffectToUserType(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint srcItemId, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, srcItemId, dstUserTypeCode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent m_onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加特效到用户分类下事件处理
				/// </summary>
				/// <param name="e">添加特效到用户分类下事件</param>
				/// <returns></returns>
				public virtual void OnAddEffectToUserType_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnAddEffectToUserType(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加特效到用户分类下事件处理
				/// </summary>
				/// <param name="e">添加特效到用户分类下事件</param>
				/// <returns></returns>
				public virtual void OnAddEffectToUserType(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addUserTypeToUserType_CallBack_void_EVString_EVString_EVString(ref IntPtr datasourceName, ref IntPtr srcUserTypeCode, ref IntPtr dstUserTypeCode);

				protected addUserTypeToUserType_CallBack_void_EVString_EVString_EVString m_addUserTypeToUserType_CallBack_void_EVString_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string datasourceName, string srcUserTypeCode, string dstUserTypeCode);

				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				public virtual void AddUserTypeToUserType_NoVirtual(string datasourceName, string srcUserTypeCode, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_NoVirtual(this.NativeObject, datasourceName, srcUserTypeCode, dstUserTypeCode);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Function(ref IntPtr datasourceName, ref IntPtr srcUserTypeCode, ref IntPtr dstUserTypeCode)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					string strsrcUserTypeCode= Marshal.PtrToStringAnsi(srcUserTypeCode);
					ClassFactory.FreeString(ref srcUserTypeCode);
					string strdstUserTypeCode= Marshal.PtrToStringAnsi(dstUserTypeCode);
					ClassFactory.FreeString(ref dstUserTypeCode);
					
					AddUserTypeToUserType(strdatasourceName,strsrcUserTypeCode,strdstUserTypeCode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceName, string srcUserTypeCode, string dstUserTypeCode);

				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				public virtual void AddUserTypeToUserType(string datasourceName, string srcUserTypeCode, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(this.NativeObject, datasourceName, srcUserTypeCode, dstUserTypeCode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString(IntPtr ds, ref IntPtr srcUserTypeCode, ref IntPtr dstUserTypeCode);

				protected addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString m_addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ds, string srcUserTypeCode, string dstUserTypeCode);

				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				public virtual void AddUserTypeToUserType_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, string srcUserTypeCode, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, srcUserTypeCode, dstUserTypeCode);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Function(IntPtr ds, ref IntPtr srcUserTypeCode, ref IntPtr dstUserTypeCode)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					string strsrcUserTypeCode= Marshal.PtrToStringAnsi(srcUserTypeCode);
					ClassFactory.FreeString(ref srcUserTypeCode);
					string strdstUserTypeCode= Marshal.PtrToStringAnsi(dstUserTypeCode);
					ClassFactory.FreeString(ref dstUserTypeCode);
					
					AddUserTypeToUserType(csobj_ds, strsrcUserTypeCode,strdstUserTypeCode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string srcUserTypeCode, string dstUserTypeCode);

				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				public virtual void AddUserTypeToUserType(EarthView.World.Spatial.GeoDataset.Idatasource ds, string srcUserTypeCode, string dstUserTypeCode)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, srcUserTypeCode, dstUserTypeCode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent m_onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加用户分类到用户分类下事件处理函数
				/// </summary>
				/// <param name="e">添加用户分类到用户分类下事件</param>
				/// <returns></returns>
				public virtual void OnAddUserTypeToUserType_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnAddUserTypeToUserType(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 添加用户分类到用户分类下事件处理函数
				/// </summary>
				/// <param name="e">添加用户分类到用户分类下事件</param>
				/// <returns></returns>
				public virtual void OnAddUserTypeToUserType(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void saveEffect_CallBack_void_EVString_CEffect(ref IntPtr datasourceName, IntPtr effect);

				protected saveEffect_CallBack_void_EVString_CEffect m_saveEffect_CallBack_void_EVString_CEffect;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_NoVirtual(IntPtr pNativeObject, string datasourceName, IntPtr effect);

				///裴大为-2013-4-21-结束
				//// <summary>
				//// 保存特效
				//// </summary>
				//// <param name="datasourceName">数据库名称</param>
				//// <param name="effect">特效</param>
				//// <returns></returns>
				public virtual void SaveEffect_NoVirtual(string datasourceName, EarthView.World.Spatial3D.EffectManager.Effect effect)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_NoVirtual(this.NativeObject, datasourceName, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Function(ref IntPtr datasourceName, IntPtr effect)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					EarthView.World.Spatial3D.EffectManager.Effect csobj_effect = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_effect.BindNativeObject(effect,"CEffect");
					csobj_effect.Delegate = true;
					IClassFactory csobj_effectClassFactory = GlobalClassFactoryMap.Get(csobj_effect.GetCppInstanceTypeName());
					if (csobj_effectClassFactory != null)
					{
						csobj_effect.Delegate = true;
						csobj_effect = csobj_effectClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csobj_effect.BindNativeObject(effect, "CEffect");
						csobj_effect.Delegate = true;
					}
					
					SaveEffect(strdatasourceName,csobj_effect);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(IntPtr pNativeObject, string datasourceName, IntPtr effect);

				///裴大为-2013-4-21-结束
				//// <summary>
				//// 保存特效
				//// </summary>
				//// <param name="datasourceName">数据库名称</param>
				//// <param name="effect">特效</param>
				//// <returns></returns>
				public virtual void SaveEffect(string datasourceName, EarthView.World.Spatial3D.EffectManager.Effect effect)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(this.NativeObject, datasourceName, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void saveEffect_CallBack_void_IDataSource_CEffect(IntPtr ds, IntPtr effect);

				protected saveEffect_CallBack_void_IDataSource_CEffect m_saveEffect_CallBack_void_IDataSource_CEffect;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_NoVirtual(IntPtr pNativeObject, IntPtr ds, IntPtr effect);

				/// <summary>
				/// 保存特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effect">特效</param>
				/// <returns></returns>
				public virtual void SaveEffect_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, EarthView.World.Spatial3D.EffectManager.Effect effect)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Function(IntPtr ds, IntPtr effect)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csobj_effect = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_effect.BindNativeObject(effect,"CEffect");
					csobj_effect.Delegate = true;
					IClassFactory csobj_effectClassFactory = GlobalClassFactoryMap.Get(csobj_effect.GetCppInstanceTypeName());
					if (csobj_effectClassFactory != null)
					{
						csobj_effect.Delegate = true;
						csobj_effect = csobj_effectClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csobj_effect.BindNativeObject(effect, "CEffect");
						csobj_effect.Delegate = true;
					}
					
					SaveEffect(csobj_ds, csobj_effect);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(IntPtr pNativeObject, IntPtr ds, IntPtr effect);

				/// <summary>
				/// 保存特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effect">特效</param>
				/// <returns></returns>
				public virtual void SaveEffect(EarthView.World.Spatial.GeoDataset.Idatasource ds, EarthView.World.Spatial3D.EffectManager.Effect effect)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onSaveEffect_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onSaveEffect_CallBack_void_CEffectTreeviewEvent m_onSaveEffect_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 保存特效的事件接收
				/// </summary>
				/// <param name="e">保存特效事件</param>
				/// <returns></returns>
				public virtual void OnSaveEffect_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnSaveEffect(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 保存特效的事件接收
				/// </summary>
				/// <param name="e">保存特效事件</param>
				/// <returns></returns>
				public virtual void OnSaveEffect(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void saveEffectMaterial_CallBack_void_IDataSource_ev_uint32(IntPtr ds, uint effectID);

				protected saveEffectMaterial_CallBack_void_IDataSource_ev_uint32 m_saveEffectMaterial_CallBack_void_IDataSource_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint effectID);

				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="ds">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				public virtual void SaveEffectMaterial_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectID)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectID);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Function(IntPtr ds, uint effectID)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					
					SaveEffectMaterial(csobj_ds, effectID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(IntPtr pNativeObject, IntPtr ds, uint effectID);

				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="ds">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				public virtual void SaveEffectMaterial(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectID)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectID);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void saveEffectMaterial_CallBack_void_EVString_ev_uint32(ref IntPtr datasourceName, uint effectID);

				protected saveEffectMaterial_CallBack_void_EVString_ev_uint32 m_saveEffectMaterial_CallBack_void_EVString_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_NoVirtual(IntPtr pNativeObject, string datasourceName, uint effectID);

				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				public virtual void SaveEffectMaterial_NoVirtual(string datasourceName, uint effectID)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_NoVirtual(this.NativeObject, datasourceName, effectID);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Function(ref IntPtr datasourceName, uint effectID)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					
					SaveEffectMaterial(strdatasourceName,effectID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(IntPtr pNativeObject, string datasourceName, uint effectID);

				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				public virtual void SaveEffectMaterial(string datasourceName, uint effectID)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(this.NativeObject, datasourceName, effectID);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent(IntPtr e);

				protected onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent m_onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 保存特效资源的事件接收
				/// </summary>
				/// <param name="e">保存特效资源的事件</param>
				/// <returns></returns>
				public virtual void OnSaveEffectMaterial_NoVirtual(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Function(IntPtr e)
				{
					EarthView.World.Spatial3DProxy.EffectTreeviewEvent csobj_e = new EarthView.World.Spatial3DProxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CEffectTreeviewEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.EffectTreeviewEvent;
						csobj_e.BindNativeObject(e, "CEffectTreeviewEvent");
						csobj_e.Delegate = true;
					}
					
					OnSaveEffectMaterial(csobj_e);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 保存特效资源的事件接收
				/// </summary>
				/// <param name="e">保存特效资源的事件</param>
				/// <returns></returns>
				public virtual void OnSaveEffectMaterial(EarthView.World.Spatial3DProxy.EffectTreeviewEvent e)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void loadTree_CallBack_void_EVString_CEffectUserTypeTree(ref IntPtr datasourceName, IntPtr tree);

				protected loadTree_CallBack_void_EVString_CEffectUserTypeTree m_loadTree_CallBack_void_EVString_CEffectUserTypeTree;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_NoVirtual(IntPtr pNativeObject, string datasourceName, IntPtr tree);

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <returns></returns>
				public virtual void LoadTree_NoVirtual(string datasourceName, ref  EarthView.World.Spatial3D.Dataset.EffectUserTypeTree tree)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_NoVirtual(this.NativeObject, datasourceName, object.Equals(tree, null) ? IntPtr.Zero : tree.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Function(ref IntPtr datasourceName, IntPtr tree)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					EarthView.World.Spatial3D.Dataset.EffectUserTypeTree csobj_tree = new EarthView.World.Spatial3D.Dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_tree.BindNativeObject(tree,"CEffectUserTypeTree");
					csobj_tree.Delegate = true;
					IClassFactory csobj_treeClassFactory = GlobalClassFactoryMap.Get(csobj_tree.GetCppInstanceTypeName());
					if (csobj_treeClassFactory != null)
					{
						csobj_tree.Delegate = true;
						csobj_tree = csobj_treeClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectUserTypeTree;
						csobj_tree.BindNativeObject(tree, "CEffectUserTypeTree");
						csobj_tree.Delegate = true;
					}
					
					LoadTree(strdatasourceName,ref csobj_tree);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(IntPtr pNativeObject, string datasourceName, IntPtr tree);

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <returns></returns>
				public virtual void LoadTree(string datasourceName, ref  EarthView.World.Spatial3D.Dataset.EffectUserTypeTree tree)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(this.NativeObject, datasourceName, object.Equals(tree, null) ? IntPtr.Zero : tree.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void loadTree_CallBack_void_IDataSource_CEffectUserTypeTree(IntPtr ds, IntPtr tree);

				protected loadTree_CallBack_void_IDataSource_CEffectUserTypeTree m_loadTree_CallBack_void_IDataSource_CEffectUserTypeTree;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_NoVirtual(IntPtr pNativeObject, IntPtr ds, IntPtr tree);

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库</param>
				/// <returns></returns>
				public virtual void LoadTree_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, ref EarthView.World.Spatial3D.Dataset.EffectUserTypeTree tree)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(tree, null) ? IntPtr.Zero : tree.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Function(IntPtr ds, IntPtr tree)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					EarthView.World.Spatial3D.Dataset.EffectUserTypeTree csobj_tree = new EarthView.World.Spatial3D.Dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_tree.BindNativeObject(tree,"CEffectUserTypeTree");
					csobj_tree.Delegate = true;
					IClassFactory csobj_treeClassFactory = GlobalClassFactoryMap.Get(csobj_tree.GetCppInstanceTypeName());
					if (csobj_treeClassFactory != null)
					{
						csobj_tree.Delegate = true;
						csobj_tree = csobj_treeClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectUserTypeTree;
						csobj_tree.BindNativeObject(tree, "CEffectUserTypeTree");
						csobj_tree.Delegate = true;
					}
					
					LoadTree(csobj_ds, ref csobj_tree);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(IntPtr pNativeObject, IntPtr ds, IntPtr tree);

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库</param>
				/// <returns></returns>
				public virtual void LoadTree(EarthView.World.Spatial.GeoDataset.Idatasource ds, ref EarthView.World.Spatial3D.Dataset.EffectUserTypeTree tree)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(tree, null) ? IntPtr.Zero : tree.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector(ref IntPtr datasourceName, uint effectId, IntPtr vec);

				protected getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector m_getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_NoVirtual(IntPtr pNativeObject, string datasourceName, uint effectId, IntPtr vec);

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				public virtual void GetBlendEffectInfos_NoVirtual(string datasourceName, uint effectId, ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_NoVirtual(this.NativeObject, datasourceName, effectId, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Function(ref IntPtr datasourceName, uint effectId, IntPtr vec)
				{
					string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
					ClassFactory.FreeString(ref datasourceName);
					EarthView.World.Spatial3D.Dataset.EffectInfoVector csobj_vec = new EarthView.World.Spatial3D.Dataset.EffectInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_vec.BindNativeObject(vec,"CEffectInfoVector");
					csobj_vec.Delegate = true;
					IClassFactory csobj_vecClassFactory = GlobalClassFactoryMap.Get(csobj_vec.GetCppInstanceTypeName());
					if (csobj_vecClassFactory != null)
					{
						csobj_vec.Delegate = true;
						csobj_vec = csobj_vecClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfoVector;
						csobj_vec.BindNativeObject(vec, "CEffectInfoVector");
						csobj_vec.Delegate = true;
					}
					
					GetBlendEffectInfos(strdatasourceName,effectId, ref csobj_vec);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(IntPtr pNativeObject, string datasourceName, uint effectId, IntPtr vec);

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				public virtual void GetBlendEffectInfos(string datasourceName, uint effectId, ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(this.NativeObject, datasourceName, effectId, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector(IntPtr ds, uint effectId, IntPtr vec);

				protected getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector m_getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_NoVirtual(IntPtr pNativeObject, IntPtr ds, uint effectId, IntPtr vec);

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				public virtual void GetBlendEffectInfos_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectId, ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_NoVirtual(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectId, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Function(IntPtr ds, uint effectId, IntPtr vec)
				{
					EarthView.World.Spatial.GeoDataset.Idatasource csobj_ds = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ds.BindNativeObject(ds,"IDataSource");
					csobj_ds.Delegate = true;
					IClassFactory csobj_dsClassFactory = GlobalClassFactoryMap.Get(csobj_ds.GetCppInstanceTypeName());
					if (csobj_dsClassFactory != null)
					{
						csobj_ds.Delegate = true;
						csobj_ds = csobj_dsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csobj_ds.BindNativeObject(ds, "IDataSource");
						csobj_ds.Delegate = true;
					}
					EarthView.World.Spatial3D.Dataset.EffectInfoVector csobj_vec = new EarthView.World.Spatial3D.Dataset.EffectInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_vec.BindNativeObject(vec,"CEffectInfoVector");
					csobj_vec.Delegate = true;
					IClassFactory csobj_vecClassFactory = GlobalClassFactoryMap.Get(csobj_vec.GetCppInstanceTypeName());
					if (csobj_vecClassFactory != null)
					{
						csobj_vec.Delegate = true;
						csobj_vec = csobj_vecClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfoVector;
						csobj_vec.BindNativeObject(vec, "CEffectInfoVector");
						csobj_vec.Delegate = true;
					}
					
					GetBlendEffectInfos(csobj_ds, effectId, ref csobj_vec);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(IntPtr pNativeObject, IntPtr ds, uint effectId, IntPtr vec);

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				public virtual void GetBlendEffectInfos(EarthView.World.Spatial.GeoDataset.Idatasource ds, uint effectId, ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectId, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_destoryScene_void(IntPtr pNativeObject);

				/// <summary>
				/// 销毁场景
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void DestoryScene()
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_destoryScene_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_windowResized_void(IntPtr pNativeObject);

				///void showBoundingBox(CMovableObject* mo,ev_bool val);
				///void addEffect(EarthView::World::Spatial3D::EffectManager::CEffect* effect,ev_uint32 x,ev_uint32 y,ev_uint32 widgetWidth,ev_uint32 widgetHeight);
				//// <summary>
				//// 自动调整窗体内控件大小
				//// </summary>
				//// <param name=""></param>
				//// <returns></returns>
				public void WindowResized()
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_windowResized_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonPress_void_int_int_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

				/// <summary>
				/// 鼠标按下事件处理
				/// </summary>
				/// <param name="x">鼠标按下处在x轴上的位置</param>
				/// <param name="y">鼠标按下处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				public void MouseButtonPress(int x, int y, uint button)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonPress_void_int_int_ev_uint32(this.NativeObject, x, y, button);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseDoubleButtonPress_void_int_int_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

				/// <summary>
				/// 鼠标双击事件处理
				/// </summary>
				/// <param name="x">鼠标双击处在x轴上的位置</param>
				/// <param name="y">鼠标双击处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				public void MouseDoubleButtonPress(int x, int y, uint button)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseDoubleButtonPress_void_int_int_ev_uint32(this.NativeObject, x, y, button);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonRelease_void_int_int_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

				/// <summary>
				/// 鼠标弹起事件处理
				/// </summary>
				/// <param name="x">鼠标弹起处在x轴上的位置</param>
				/// <param name="y">鼠标弹起处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				public void MouseButtonRelease(int x, int y, uint button)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseButtonRelease_void_int_int_ev_uint32(this.NativeObject, x, y, button);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseMove_void_int_int(IntPtr pNativeObject, int x, int y);

				/// <summary>
				/// 鼠标移动事件处理
				/// </summary>
				/// <param name="x">当前鼠标在x轴上的位置</param>
				/// <param name="y">当前鼠标在y轴上的位置</param>
				/// <returns></returns>
				public void MouseMove(int x, int y)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseMove_void_int_int(this.NativeObject, x, y);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseWheel_void_float(IntPtr pNativeObject, float delta);

				/// <summary>
				/// 鼠标滚轮滚动事件处理
				/// </summary>
				/// <param name="delta">滚动度量值</param>
				/// <returns></returns>
				public void MouseWheel(float delta)
				{
					EarthView_World_Spatial3DProxy_CEffectMgrEventObject_mouseWheel_void_float(this.NativeObject, delta);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CEffectMgrEventObject_findDiscontinuousID_EVString_CEffectDataSource_EVString(IntPtr pNativeObject, IntPtr effectDatasource, string userTypeCode);

				///void keyPress(int key,int virtualKey);
				///void keyRelease(int key,int virtualKey);
				///void dropEvent( EarthView::World::Spatial3D::EffectManager::CEffect* effect,ev_uint32 x,ev_uint32 y,ev_uint32 widgetWidth,ev_uint32 widgetHeight);
				//// <summary>
				//// 查找用户分类号断号
				//// </summary>
				//// <param name="effectDatasource">数据库</param>
				//// <param name="userTypeCode">父用户分类号</param>
				//// <returns></returns>
				public string FindDiscontinuousID(EarthView.World.Spatial3D.Dataset.EffectDataSource effectDatasource, string userTypeCode)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_findDiscontinuousID_EVString_CEffectDataSource_EVString(this.NativeObject, object.Equals(effectDatasource, null) ? IntPtr.Zero : effectDatasource.NativeObject, userTypeCode);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns></returns>
				protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns></returns>
				protected override bool OnEvent(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_d.so");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

					#else 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy.so");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

					#else 
						private static bool bLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadEffectMgrEventObject = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectMgrEventObject", new EffectMgrEventObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectMgrEventObjectProxy", new EffectMgrEventObjectClassFactory());

				public EffectMgrEventObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(IntPtr pObject, createUserType_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(IntPtr pObject, createUserType_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(IntPtr pObject, onCreateUserType_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(IntPtr pObject, onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(IntPtr pObject, importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(IntPtr pObject, importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(IntPtr pObject, exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(IntPtr pObject, onImportFromScript_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(IntPtr pObject, onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(IntPtr pObject, createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(IntPtr pObject, createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(IntPtr pObject, onCreateNewEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(IntPtr pObject, renameUserType_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(IntPtr pObject, renameUserType_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(IntPtr pObject, onRenameUserType_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(IntPtr pObject, renameBlendEffect_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(IntPtr pObject, renameBlendEffect_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(IntPtr pObject, onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(IntPtr pObject, renameSingleEffect_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(IntPtr pObject, copyNewEffect_CallBack_void_EVString_ev_uint32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(IntPtr pObject, copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(IntPtr pObject, renameSingleEffect_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(IntPtr pObject, onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(IntPtr pObject, renameBEChild_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(IntPtr pObject, renameBEChild_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(IntPtr pObject, onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(IntPtr pObject, deleteUserType_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(IntPtr pObject, deleteUserType_CallBack_void_IDataSource_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(IntPtr pObject, onDeleteUserType_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(IntPtr pObject, deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(IntPtr pObject, deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(IntPtr pObject, onDeleteEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(IntPtr pObject, addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(IntPtr pObject, addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(IntPtr pObject, onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(IntPtr pObject, isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(IntPtr pObject, isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(IntPtr pObject, addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(IntPtr pObject, addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(IntPtr pObject, onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(IntPtr pObject, addUserTypeToUserType_CallBack_void_EVString_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(IntPtr pObject, addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(IntPtr pObject, onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(IntPtr pObject, saveEffect_CallBack_void_EVString_CEffect pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(IntPtr pObject, saveEffect_CallBack_void_IDataSource_CEffect pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(IntPtr pObject, onSaveEffect_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(IntPtr pObject, saveEffectMaterial_CallBack_void_IDataSource_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(IntPtr pObject, saveEffectMaterial_CallBack_void_EVString_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(IntPtr pObject, onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(IntPtr pObject, loadTree_CallBack_void_EVString_CEffectUserTypeTree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(IntPtr pObject, loadTree_CallBack_void_IDataSource_CEffectUserTypeTree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(IntPtr pObject, getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(IntPtr pObject, getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createUserType_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_createUserType_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_EVString_EVString_EVString(this.NativeObject, m_createUserType_CallBack_void_EVString_EVString_EVString);
						m_createUserType_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_createUserType_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createUserType_void_IDataSource_EVString_EVString(this.NativeObject, m_createUserType_CallBack_void_IDataSource_EVString_EVString);
						m_onCreateUserType_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onCreateUserType_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateUserType_void_CEffectTreeviewEvent(this.NativeObject, m_onCreateUserType_CallBack_void_CEffectTreeviewEvent);
						m_onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromTemplateDB_void_CEffectTreeviewEvent(this.NativeObject, m_onImportFromTemplateDB_CallBack_void_CEffectTreeviewEvent);
						m_importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray_Function;
						GC.KeepAlive(m_importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_EVString_CStringArray_CStringArray(this.NativeObject, m_importFromScript_CallBack_void_EVString_EVString_EVString_CStringArray_CStringArray);
						m_importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray_Function;
						GC.KeepAlive(m_importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_importFromScript_void_EVString_EVString_IDataSource_CStringArray_CStringArray(this.NativeObject, m_importFromScript_CallBack_void_EVString_EVString_IDataSource_CStringArray_CStringArray);
						m_exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool_Function;
						GC.KeepAlive(m_exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_exportEffectToLocal_bool_ev_uint32_CEffectDataSource_EVString_bool(this.NativeObject, m_exportEffectToLocal_CallBack_bool_ev_uint32_CEffectDataSource_EVString_bool);
						m_onImportFromScript_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onImportFromScript_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onImportFromScript_void_CEffectTreeviewEvent(this.NativeObject, m_onImportFromScript_CallBack_void_CEffectTreeviewEvent);
						m_onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onExportToTemplateDB_void_CEffectTreeviewEvent(this.NativeObject, m_onExportToTemplateDB_CallBack_void_CEffectTreeviewEvent);
						m_createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32_Function;
						GC.KeepAlive(m_createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_EVString_EVString_EVString_EffectType_ev_uint32(this.NativeObject, m_createNewEffect_CallBack_void_EVString_EVString_EVString_EffectType_ev_uint32);
						m_createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32_Function;
						GC.KeepAlive(m_createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_createNewEffect_void_IDataSource_EVString_EVString_EffectType_ev_uint32(this.NativeObject, m_createNewEffect_CallBack_void_IDataSource_EVString_EVString_EffectType_ev_uint32);
						m_onCreateNewEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onCreateNewEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCreateNewEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onCreateNewEffect_CallBack_void_CEffectTreeviewEvent);
						m_renameUserType_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_renameUserType_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_EVString_EVString_EVString(this.NativeObject, m_renameUserType_CallBack_void_EVString_EVString_EVString);
						m_renameUserType_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_renameUserType_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameUserType_void_IDataSource_EVString_EVString(this.NativeObject, m_renameUserType_CallBack_void_IDataSource_EVString_EVString);
						m_onRenameUserType_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onRenameUserType_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameUserType_void_CEffectTreeviewEvent(this.NativeObject, m_onRenameUserType_CallBack_void_CEffectTreeviewEvent);
						m_renameBlendEffect_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_renameBlendEffect_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_EVString_EVString_EVString(this.NativeObject, m_renameBlendEffect_CallBack_void_EVString_EVString_EVString);
						m_renameBlendEffect_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_renameBlendEffect_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBlendEffect_void_IDataSource_EVString_EVString(this.NativeObject, m_renameBlendEffect_CallBack_void_IDataSource_EVString_EVString);
						m_onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBlendEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onRenameBlendEffect_CallBack_void_CEffectTreeviewEvent);
						m_renameSingleEffect_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_renameSingleEffect_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_EVString_EVString_EVString(this.NativeObject, m_renameSingleEffect_CallBack_void_EVString_EVString_EVString);
						m_copyNewEffect_CallBack_void_EVString_ev_uint32_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString_Function;
						GC.KeepAlive(m_copyNewEffect_CallBack_void_EVString_ev_uint32_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_EVString_ev_uint32_EVString(this.NativeObject, m_copyNewEffect_CallBack_void_EVString_ev_uint32_EVString);
						m_copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString_Function;
						GC.KeepAlive(m_copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_copyNewEffect_void_IDataSource_ev_uint32_EVString(this.NativeObject, m_copyNewEffect_CallBack_void_IDataSource_ev_uint32_EVString);
						m_renameSingleEffect_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_renameSingleEffect_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameSingleEffect_void_IDataSource_EVString_EVString(this.NativeObject, m_renameSingleEffect_CallBack_void_IDataSource_EVString_EVString);
						m_onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameSingleEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onRenameSingleEffect_CallBack_void_CEffectTreeviewEvent);
						m_renameBEChild_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_renameBEChild_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_EVString_EVString_EVString(this.NativeObject, m_renameBEChild_CallBack_void_EVString_EVString_EVString);
						m_renameBEChild_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_renameBEChild_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_renameBEChild_void_IDataSource_EVString_EVString(this.NativeObject, m_renameBEChild_CallBack_void_IDataSource_EVString_EVString);
						m_onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onRenameBEChildEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onRenameBEChildEffect_CallBack_void_CEffectTreeviewEvent);
						m_deleteUserType_CallBack_void_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString_Function;
						GC.KeepAlive(m_deleteUserType_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_EVString_EVString(this.NativeObject, m_deleteUserType_CallBack_void_EVString_EVString);
						m_deleteUserType_CallBack_void_IDataSource_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString_Function;
						GC.KeepAlive(m_deleteUserType_CallBack_void_IDataSource_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteUserType_void_IDataSource_EVString(this.NativeObject, m_deleteUserType_CallBack_void_IDataSource_EVString);
						m_onDeleteUserType_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onDeleteUserType_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteUserType_void_CEffectTreeviewEvent(this.NativeObject, m_onDeleteUserType_CallBack_void_CEffectTreeviewEvent);
						m_deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType_Function;
						GC.KeepAlive(m_deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_EVString_ev_uint32_ev_uint32_EffectType(this.NativeObject, m_deleteEffect_CallBack_void_EVString_ev_uint32_ev_uint32_EffectType);
						m_deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType_Function;
						GC.KeepAlive(m_deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_deleteEffect_void_IDataSource_ev_uint32_ev_uint32_EffectType(this.NativeObject, m_deleteEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32_EffectType);
						m_onDeleteEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onDeleteEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onDeleteEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onDeleteEffect_CallBack_void_CEffectTreeviewEvent);
						m_addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_EVString_ev_uint32_ev_uint32(this.NativeObject, m_addEffectToBlendEffect_CallBack_void_EVString_ev_uint32_ev_uint32);
						m_addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToBlendEffect_void_IDataSource_ev_uint32_ev_uint32(this.NativeObject, m_addEffectToBlendEffect_CallBack_void_IDataSource_ev_uint32_ev_uint32);
						m_onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToBlendEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onAddEffectToBlendEffect_CallBack_void_CEffectTreeviewEvent);
						m_isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString_Function;
						GC.KeepAlive(m_isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_EVString_EVString_EVString_EffectType_EVString(this.NativeObject, m_isExistName_CallBack_bool_EVString_EVString_EVString_EffectType_EVString);
						m_isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString_Function;
						GC.KeepAlive(m_isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_isExistName_bool_IDataSource_EVString_EVString_EffectType_EVString(this.NativeObject, m_isExistName_CallBack_bool_IDataSource_EVString_EVString_EffectType_EVString);
						m_addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString_Function;
						GC.KeepAlive(m_addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_EVString_ev_uint32_EVString(this.NativeObject, m_addEffectToUserType_CallBack_void_EVString_ev_uint32_EVString);
						m_addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString_Function;
						GC.KeepAlive(m_addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addEffectToUserType_void_IDataSource_ev_uint32_EVString(this.NativeObject, m_addEffectToUserType_CallBack_void_IDataSource_ev_uint32_EVString);
						m_onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddEffectToUserType_void_CEffectTreeviewEvent(this.NativeObject, m_onAddEffectToUserType_CallBack_void_CEffectTreeviewEvent);
						m_addUserTypeToUserType_CallBack_void_EVString_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_addUserTypeToUserType_CallBack_void_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_EVString_EVString_EVString(this.NativeObject, m_addUserTypeToUserType_CallBack_void_EVString_EVString_EVString);
						m_addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_addUserTypeToUserType_void_IDataSource_EVString_EVString(this.NativeObject, m_addUserTypeToUserType_CallBack_void_IDataSource_EVString_EVString);
						m_onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onAddUserTypeToUserType_void_CEffectTreeviewEvent(this.NativeObject, m_onAddUserTypeToUserType_CallBack_void_CEffectTreeviewEvent);
						m_saveEffect_CallBack_void_EVString_CEffect = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect_Function;
						GC.KeepAlive(m_saveEffect_CallBack_void_EVString_CEffect);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_EVString_CEffect(this.NativeObject, m_saveEffect_CallBack_void_EVString_CEffect);
						m_saveEffect_CallBack_void_IDataSource_CEffect = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect_Function;
						GC.KeepAlive(m_saveEffect_CallBack_void_IDataSource_CEffect);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffect_void_IDataSource_CEffect(this.NativeObject, m_saveEffect_CallBack_void_IDataSource_CEffect);
						m_onSaveEffect_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onSaveEffect_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffect_void_CEffectTreeviewEvent(this.NativeObject, m_onSaveEffect_CallBack_void_CEffectTreeviewEvent);
						m_saveEffectMaterial_CallBack_void_IDataSource_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32_Function;
						GC.KeepAlive(m_saveEffectMaterial_CallBack_void_IDataSource_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_IDataSource_ev_uint32(this.NativeObject, m_saveEffectMaterial_CallBack_void_IDataSource_ev_uint32);
						m_saveEffectMaterial_CallBack_void_EVString_ev_uint32 = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32_Function;
						GC.KeepAlive(m_saveEffectMaterial_CallBack_void_EVString_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_saveEffectMaterial_void_EVString_ev_uint32(this.NativeObject, m_saveEffectMaterial_CallBack_void_EVString_ev_uint32);
						m_onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent_Function;
						GC.KeepAlive(m_onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onSaveEffectMaterial_void_CEffectTreeviewEvent(this.NativeObject, m_onSaveEffectMaterial_CallBack_void_CEffectTreeviewEvent);
						m_loadTree_CallBack_void_EVString_CEffectUserTypeTree = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree_Function;
						GC.KeepAlive(m_loadTree_CallBack_void_EVString_CEffectUserTypeTree);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_EVString_CEffectUserTypeTree(this.NativeObject, m_loadTree_CallBack_void_EVString_CEffectUserTypeTree);
						m_loadTree_CallBack_void_IDataSource_CEffectUserTypeTree = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree_Function;
						GC.KeepAlive(m_loadTree_CallBack_void_IDataSource_CEffectUserTypeTree);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_loadTree_void_IDataSource_CEffectUserTypeTree(this.NativeObject, m_loadTree_CallBack_void_IDataSource_CEffectUserTypeTree);
						m_getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector_Function;
						GC.KeepAlive(m_getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_EVString_ev_uint32_CEffectInfoVector(this.NativeObject, m_getBlendEffectInfos_CallBack_void_EVString_ev_uint32_CEffectInfoVector);
						m_getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector = EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector_Function;
						GC.KeepAlive(m_getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_getBlendEffectInfos_void_IDataSource_ev_uint32_CEffectInfoVector(this.NativeObject, m_getBlendEffectInfos_CallBack_void_IDataSource_ev_uint32_CEffectInfoVector);
						m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
						GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
						m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
						GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
						m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
						GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
						EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectMgrEventObject_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
					}
				}
				protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
				{
					base.OnTimerEvent_NoVirtual(e);
				}
				protected override void OnCustomEvent(EarthView.World.Core.Event e)
				{
					base.OnCustomEvent_NoVirtual(e);
				}
				public static EffectMgrEventObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					EffectMgrEventObject obj = baseObj as  EffectMgrEventObject;
					if (object.Equals(obj, null))
					{
						obj = new EffectMgrEventObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CEffectMgrEventObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EffectMgrEventObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					EffectMgrEventObject emptyInstance = new EffectMgrEventObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
