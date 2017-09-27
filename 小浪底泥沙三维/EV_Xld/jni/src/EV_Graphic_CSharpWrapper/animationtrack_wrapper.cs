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
			/// 动画帧的时间索引类
			/// 管理通过时间索引位置查找动画帧
			/// </summary>
			public class TimeIndex : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns></returns>
				public TimeIndex(double timePos) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetimePos = new BasePtr(timePos);
					list.Add("timePos", valuetimePos.PtrVal);
					Create("CTimeIndex", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <param name="keyIndex">关键帧索引</param>
				/// <returns></returns>
				public TimeIndex(double timePos, uint keyIndex) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetimePos = new BasePtr(timePos);
					list.Add("timePos", valuetimePos.PtrVal);
					BasePtr valuekeyIndex = new BasePtr(keyIndex);
					list.Add("keyIndex", valuekeyIndex.PtrVal);
					Create("CTimeIndex", list);
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
				private static extern byte EarthView_World_Graphic_CTimeIndex_hasKeyIndex_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断是否存在有效的关键帧索引
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public bool HasKeyIndex()
				{
					byte ret=EarthView_World_Graphic_CTimeIndex_hasKeyIndex_ev_bool(this.NativeObject);
					
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
				private static extern double EarthView_World_Graphic_CTimeIndex_getTimePos_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获得动画帧的时间点
				/// </summary>
				/// <param name=""></param>
				/// <returns>时间点</returns>
				public double GetTimePos()
				{
					double ret=EarthView_World_Graphic_CTimeIndex_getTimePos_Real(this.NativeObject);
					
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
				private static extern uint EarthView_World_Graphic_CTimeIndex_getKeyIndex_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获得动画关键帧索引
				/// </summary>
				/// <param name=""></param>
				/// <returns>关键帧索引</returns>
				public uint GetKeyIndex()
				{
					uint ret=EarthView_World_Graphic_CTimeIndex_getKeyIndex_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTimeIndex = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTimeIndex = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTimeIndex", new TimeIndexClassFactory());

				public TimeIndex(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TimeIndex FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TimeIndex obj = baseObj as  TimeIndex;
					if (object.Equals(obj, null))
					{
						obj = new TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTimeIndex");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TimeIndexClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TimeIndex emptyInstance = new TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 动画轨迹类
			/// 管理动画轨迹
			/// </summary>
			public class AnimationTrack : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 动画帧监听类
				/// 管理动画帧
				/// </summary>
				public class AnimationTrackListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public AnimationTrackListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAnimationTrackListenerProxy", null);
						if (!"EarthView.World.Graphic.AnimationTrack+AnimationTrackListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(IntPtr t, IntPtr timeIndex, IntPtr kf);

					protected getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr t, IntPtr timeIndex, IntPtr kf);

					/// <summary>
					/// 关键帧插值
					/// </summary>
					/// <param name="t">动画轨迹</param>
					/// <param name="timeIndex">时间索引</param>
					/// <param name="kf">插值结果</param>
					/// <returns>标识是否插值成功</returns>
					public virtual bool GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.AnimationTrack t, EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
					{
						byte ret=EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Function(IntPtr t, IntPtr timeIndex, IntPtr kf)
					{
						EarthView.World.Graphic.AnimationTrack csobj_t = new EarthView.World.Graphic.AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_t.BindNativeObject(t,"CAnimationTrack");
						csobj_t.Delegate = true;
						IClassFactory csobj_tClassFactory = GlobalClassFactoryMap.Get(csobj_t.GetCppInstanceTypeName());
						if (csobj_tClassFactory != null)
						{
							csobj_t.Delegate = true;
							csobj_t = csobj_tClassFactory.Create() as EarthView.World.Graphic.AnimationTrack;
							csobj_t.BindNativeObject(t, "CAnimationTrack");
							csobj_t.Delegate = true;
						}
						EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
						csobj_timeIndex.Delegate = true;
						IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
						if (csobj_timeIndexClassFactory != null)
						{
							csobj_timeIndex.Delegate = true;
							csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
							csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
							csobj_timeIndex.Delegate = true;
						}
						EarthView.World.Graphic.KeyFrame csobj_kf = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_kf.BindNativeObject(kf,"CKeyFrame");
						csobj_kf.Delegate = true;
						IClassFactory csobj_kfClassFactory = GlobalClassFactoryMap.Get(csobj_kf.GetCppInstanceTypeName());
						if (csobj_kfClassFactory != null)
						{
							csobj_kf.Delegate = true;
							csobj_kf = csobj_kfClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
							csobj_kf.BindNativeObject(kf, "CKeyFrame");
							csobj_kf.Delegate = true;
						}
						
						bool csret=GetInterpolatedKeyFrame(csobj_t, csobj_timeIndex, csobj_kf);
						
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
					private static extern byte EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr t, IntPtr timeIndex, IntPtr kf);

					/// <summary>
					/// 关键帧插值
					/// </summary>
					/// <param name="t">动画轨迹</param>
					/// <param name="timeIndex">时间索引</param>
					/// <param name="kf">插值结果</param>
					/// <returns>标识是否插值成功</returns>
					public virtual bool GetInterpolatedKeyFrame(EarthView.World.Graphic.AnimationTrack t, EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
					{
						byte ret=EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadAnimationTrackListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener", new AnimationTrackListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListenerProxy", new AnimationTrackListenerClassFactory());

					public AnimationTrackListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Function;
							GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
							EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
						}
					}
					public static AnimationTrackListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AnimationTrackListener obj = baseObj as  AnimationTrackListener;
						if (object.Equals(obj, null))
						{
							obj = new AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAnimationTrackListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AnimationTrackListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AnimationTrackListener emptyInstance = new AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画类对象</param>
				/// <param name="handle">动画轨迹标识</param>
				/// <returns></returns>
				public AnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					Create("CAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.AnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				private static extern ushort EarthView_World_Graphic_CAnimationTrack_getHandle_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获得动轨迹标识
				/// </summary>
				/// <param name=""></param>
				/// <returns>标识值</returns>
				public ushort GetHandle()
				{
					ushort ret=EarthView_World_Graphic_CAnimationTrack_getHandle_ev_uint16(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getNumKeyFrames_CallBack_ev_uint16();

				protected getNumKeyFrames_CallBack_ev_uint16 m_getNumKeyFrames_CallBack_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 返回动画中关键帧数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>关键帧数量</returns>
				public virtual ushort GetNumKeyFrames_NoVirtual()
				{
					ushort ret=EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function()
				{
					ushort csret=GetNumKeyFrames();
					
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
				private static extern ushort EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 返回动画中关键帧数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>关键帧数量</returns>
				public virtual ushort GetNumKeyFrames()
				{
					ushort ret=EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getKeyFrame_CallBack_CKeyFrame_ev_uint16(ushort index);

				protected getKeyFrame_CallBack_CKeyFrame_ev_uint16 m_getKeyFrame_CallBack_CKeyFrame_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引获得关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns>关键帧指针</returns>
				public virtual EarthView.World.Graphic.KeyFrame GetKeyFrame_NoVirtual(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function(ushort index)
				{
					EarthView.World.Graphic.KeyFrame csret=GetKeyFrame(index);
					
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
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引获得关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns>关键帧指针</returns>
				public virtual EarthView.World.Graphic.KeyFrame GetKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr timeIndex, IntPtr[] keyFrame1, IntPtr[] keyFrame2, IntPtr firstKeyIndex);

				protected getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, ref IntPtr[] keyFrame1, ref IntPtr[] keyFrame2, IntPtr firstKeyIndex);

				/// <summary>
				/// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="keyFrame1">关键帧1</param>
				/// <param name="keyFrame2">关键帧2</param>
				/// <param name="firstKeyIndex">关键帧索引</param>
				/// <returns>前后两关键帧之间的时间距离</returns>
				public virtual double GetKeyFramesAtTime_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					IntPtr[] ptrskeyFrame1 = new IntPtr[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					ptrskeyFrame1[i]=keyFrame1[i].NativeObject;
					}
					IntPtr[] ptrskeyFrame2 = new IntPtr[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					ptrskeyFrame2[i]=keyFrame2[i].NativeObject;
					}
					
					double ret=EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, ref ptrskeyFrame1,ref ptrskeyFrame2,firstKeyIndex);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function(IntPtr timeIndex, IntPtr[] keyFrame1, IntPtr[] keyFrame2, IntPtr firstKeyIndex)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					EarthView.World.Graphic.KeyFrame[] csObjskeyFrame1=new EarthView.World.Graphic.KeyFrame[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(keyFrame1[i], "CKeyFrame");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(keyFrame1[i], "CKeyFrame");
					}
					csObjskeyFrame1[i]=csObj;
					}
					EarthView.World.Graphic.KeyFrame[] csObjskeyFrame2=new EarthView.World.Graphic.KeyFrame[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(keyFrame2[i], "CKeyFrame");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(keyFrame2[i], "CKeyFrame");
					}
					csObjskeyFrame2[i]=csObj;
					}
					
					double csret=GetKeyFramesAtTime(csobj_timeIndex, ref csObjskeyFrame1, ref csObjskeyFrame2, firstKeyIndex);
					
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
				private static extern double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pNativeObject, IntPtr timeIndex, ref IntPtr[] keyFrame1, ref IntPtr[] keyFrame2, IntPtr firstKeyIndex);

				/// <summary>
				/// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="keyFrame1">关键帧1</param>
				/// <param name="keyFrame2">关键帧2</param>
				/// <param name="firstKeyIndex">关键帧索引</param>
				/// <returns>前后两关键帧之间的时间距离</returns>
				public virtual double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					IntPtr[] ptrskeyFrame1 = new IntPtr[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					ptrskeyFrame1[i]=keyFrame1[i].NativeObject;
					}
					IntPtr[] ptrskeyFrame2 = new IntPtr[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					ptrskeyFrame2[i]=keyFrame2[i].NativeObject;
					}
					
					double ret=EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, ref ptrskeyFrame1,ref ptrskeyFrame2,firstKeyIndex);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr timeIndex, IntPtr[] keyFrame1, IntPtr[] keyFrame2);

				protected getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, ref IntPtr[] keyFrame1, ref IntPtr[] keyFrame2);

				/// <summary>
				/// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="keyFrame1">关键帧1</param>
				/// <param name="keyFrame2">关键帧2</param>
				/// <returns>前后两关键帧之间的时间距离</returns>
				public virtual double GetKeyFramesAtTime_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					IntPtr[] ptrskeyFrame1 = new IntPtr[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					ptrskeyFrame1[i]=keyFrame1[i].NativeObject;
					}
					IntPtr[] ptrskeyFrame2 = new IntPtr[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					ptrskeyFrame2[i]=keyFrame2[i].NativeObject;
					}
					
					double ret=EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, ref ptrskeyFrame1,ref ptrskeyFrame2);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function(IntPtr timeIndex, IntPtr[] keyFrame1, IntPtr[] keyFrame2)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					EarthView.World.Graphic.KeyFrame[] csObjskeyFrame1=new EarthView.World.Graphic.KeyFrame[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(keyFrame1[i], "CKeyFrame");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(keyFrame1[i], "CKeyFrame");
					}
					csObjskeyFrame1[i]=csObj;
					}
					EarthView.World.Graphic.KeyFrame[] csObjskeyFrame2=new EarthView.World.Graphic.KeyFrame[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(keyFrame2[i], "CKeyFrame");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(keyFrame2[i], "CKeyFrame");
					}
					csObjskeyFrame2[i]=csObj;
					}
					
					double csret=GetKeyFramesAtTime(csobj_timeIndex, ref csObjskeyFrame1, ref csObjskeyFrame2);
					
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
				private static extern double EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, ref IntPtr[] keyFrame1, ref IntPtr[] keyFrame2);

				/// <summary>
				/// 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="keyFrame1">关键帧1</param>
				/// <param name="keyFrame2">关键帧2</param>
				/// <returns>前后两关键帧之间的时间距离</returns>
				public virtual double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					IntPtr[] ptrskeyFrame1 = new IntPtr[keyFrame1.Length];
					for (int i = 0; i < keyFrame1.Length; i++)
					{
					ptrskeyFrame1[i]=keyFrame1[i].NativeObject;
					}
					IntPtr[] ptrskeyFrame2 = new IntPtr[keyFrame2.Length];
					for (int i = 0; i < keyFrame2.Length; i++)
					{
					ptrskeyFrame2[i]=keyFrame2[i].NativeObject;
					}
					
					double ret=EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, ref ptrskeyFrame1,ref ptrskeyFrame2);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createKeyFrame_CallBack_CKeyFrame_Real(double timePos);

				protected createKeyFrame_CallBack_CKeyFrame_Real m_createKeyFrame_CallBack_CKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 在给定的时间点创建关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>创建的关键帧</returns>
				public virtual EarthView.World.Graphic.KeyFrame CreateKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.KeyFrame csret=CreateKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 在给定的时间点创建关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>创建的关键帧</returns>
				public virtual EarthView.World.Graphic.KeyFrame CreateKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeKeyFrame_CallBack_void_ev_uint16(ushort index);

				protected removeKeyFrame_CallBack_void_ev_uint16 m_removeKeyFrame_CallBack_void_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引删除关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns></returns>
				public virtual void RemoveKeyFrame_NoVirtual(ushort index)
				{
					EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_NoVirtual(this.NativeObject, index);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function(ushort index)
				{
					RemoveKeyFrame(index);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引删除关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns></returns>
				public virtual void RemoveKeyFrame(ushort index)
				{
					EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, index);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeAllKeyFrames_CallBack_void();

				protected removeAllKeyFrames_CallBack_void m_removeAllKeyFrames_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 删除所有关键帧
				/// </summary>
				/// <param name="0">0</param>
				/// <returns></returns>
				public virtual void RemoveAllKeyFrames_NoVirtual()
				{
					EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function()
				{
					RemoveAllKeyFrames();
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除所有关键帧
				/// </summary>
				/// <param name="0">0</param>
				/// <returns></returns>
				public virtual void RemoveAllKeyFrames()
				{
					EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame(IntPtr timeIndex, IntPtr kf);

				protected getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public virtual void GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function(IntPtr timeIndex, IntPtr kf)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					EarthView.World.Graphic.KeyFrame csobj_kf = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_kf.BindNativeObject(kf,"CKeyFrame");
					csobj_kf.Delegate = true;
					IClassFactory csobj_kfClassFactory = GlobalClassFactoryMap.Get(csobj_kf.GetCppInstanceTypeName());
					if (csobj_kfClassFactory != null)
					{
						csobj_kf.Delegate = true;
						csobj_kf = csobj_kfClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csobj_kf.BindNativeObject(kf, "CKeyFrame");
						csobj_kf.Delegate = true;
					}
					
					GetInterpolatedKeyFrame(csobj_timeIndex, csobj_kf);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public virtual void GetInterpolatedKeyFrame(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void apply_CallBack_void_CTimeIndex_Real_Real(IntPtr timeIndex, double weight, double scale);

				protected apply_CallBack_void_CTimeIndex_Real_Real m_apply_CallBack_void_CTimeIndex_Real_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public virtual void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function(IntPtr timeIndex, double weight, double scale)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					Apply(csobj_timeIndex, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public virtual void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void apply_CallBack_void_CTimeIndex_Real(IntPtr timeIndex, double weight);

				protected apply_CallBack_void_CTimeIndex_Real m_apply_CallBack_void_CTimeIndex_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public virtual void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function(IntPtr timeIndex, double weight)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					Apply(csobj_timeIndex, weight);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public virtual void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void apply_CallBack_void_CTimeIndex(IntPtr timeIndex);

				protected apply_CallBack_void_CTimeIndex m_apply_CallBack_void_CTimeIndex;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function(IntPtr timeIndex)
				{
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					Apply(csobj_timeIndex);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void Apply(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _keyFrameDataChanged_CallBack_void();

				protected _keyFrameDataChanged_CallBack_void m__keyFrameDataChanged_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _keyFrameDataChanged_NoVirtual()
				{
					EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function()
				{
					_keyFrameDataChanged();
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _keyFrameDataChanged()
				{
					EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte hasNonZeroKeyFrames_CallBack_ev_bool();

				protected hasNonZeroKeyFrames_CallBack_ev_bool m_hasNonZeroKeyFrames_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public virtual bool HasNonZeroKeyFrames_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function()
				{
					bool csret=HasNonZeroKeyFrames();
					
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
				private static extern byte EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public virtual bool HasNonZeroKeyFrames()
				{
					byte ret=EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void optimise_CallBack_void();

				protected optimise_CallBack_void m_optimise_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_optimise_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Optimise_NoVirtual()
				{
					EarthView_World_Graphic_CAnimationTrack_optimise_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_optimise_void_Function()
				{
					Optimise();
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_optimise_void(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Optimise()
				{
					EarthView_World_Graphic_CAnimationTrack_optimise_void(this.NativeObject);
					
				}

				/// <summary>
				/// 关键帧时间集合类
				/// 管理关键帧时间集合
				/// </summary>
				public class KeyFrameTimes : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public KeyFrameTimes() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("KeyFrameTimes",  null);
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_push_back_void_Real(IntPtr pNativeObject, ref double t);

					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Push_back(ref double t)
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_push_back_void_Real(this.NativeObject, ref t);
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_pop_back_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Pop_back()
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_pop_back_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_front_Real(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					public IntPtr Front()
					{
						IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_front_Real(this.NativeObject);
						
						return __ptr;
						
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
					private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_back_Real(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					public IntPtr Back()
					{
						IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_back_Real(this.NativeObject);
						
						return __ptr;
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_insert_void_ev_uint32_Real(IntPtr pNativeObject, uint pos, ref double t);

					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Insert(uint pos, ref double t)
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_insert_void_ev_uint32_Real(this.NativeObject, pos, ref t);
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					public void Remove(ulong pos)
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_remove_void_ev_size_t(this.NativeObject, pos);
						
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
					private static extern byte EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_empty_ev_bool(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_at_Real_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					public IntPtr At(ulong n)
					{
						IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_at_Real_ev_size_t(this.NativeObject, n);
						
						return __ptr;
						
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
					private static extern ulong EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					public void Resize(ulong newSize)
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_resize_void_ev_size_t(this.NativeObject, newSize);
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					public void Reserve(ulong count)
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_reserve_void_ev_size_t(this.NativeObject, count);
						
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
					private static extern void EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadKeyFrameTimes = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadKeyFrameTimes = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes", new KeyFrameTimesClassFactory());

					public KeyFrameTimes(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KeyFrameTimes FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KeyFrameTimes obj = baseObj as  KeyFrameTimes;
						if (object.Equals(obj, null))
						{
							obj = new KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "KeyFrameTimes");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KeyFrameTimesClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KeyFrameTimes emptyInstance = new KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _collectKeyFrameTimes_CallBack_void_KeyFrameTimes(IntPtr keyFrameTimes);

				protected _collectKeyFrameTimes_CallBack_void_KeyFrameTimes m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_NoVirtual(IntPtr pNativeObject, IntPtr keyFrameTimes);

				/// <summary>
				/// 以唯一、有序的排列方式收集关键帧时间
				/// </summary>
				/// <param name="keyFrameTimes">关键帧时间对象</param>
				/// <returns></returns>
				public virtual void _collectKeyFrameTimes_NoVirtual(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_NoVirtual(this.NativeObject, object.Equals(keyFrameTimes, null) ? IntPtr.Zero : keyFrameTimes.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function(IntPtr keyFrameTimes)
				{
					EarthView.World.Graphic.AnimationTrack.KeyFrameTimes csobj_keyFrameTimes = new EarthView.World.Graphic.AnimationTrack.KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_keyFrameTimes.BindNativeObject(keyFrameTimes,"KeyFrameTimes");
					csobj_keyFrameTimes.Delegate = true;
					IClassFactory csobj_keyFrameTimesClassFactory = GlobalClassFactoryMap.Get(csobj_keyFrameTimes.GetCppInstanceTypeName());
					if (csobj_keyFrameTimesClassFactory != null)
					{
						csobj_keyFrameTimes.Delegate = true;
						csobj_keyFrameTimes = csobj_keyFrameTimesClassFactory.Create() as EarthView.World.Graphic.AnimationTrack.KeyFrameTimes;
						csobj_keyFrameTimes.BindNativeObject(keyFrameTimes, "KeyFrameTimes");
						csobj_keyFrameTimes.Delegate = true;
					}
					
					_collectKeyFrameTimes(ref csobj_keyFrameTimes);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pNativeObject, IntPtr keyFrameTimes);

				/// <summary>
				/// 以唯一、有序的排列方式收集关键帧时间
				/// </summary>
				/// <param name="keyFrameTimes">关键帧时间对象</param>
				/// <returns></returns>
				public virtual void _collectKeyFrameTimes(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, object.Equals(keyFrameTimes, null) ? IntPtr.Zero : keyFrameTimes.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes(IntPtr keyFrameTimes);

				protected _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_NoVirtual(IntPtr pNativeObject, IntPtr keyFrameTimes);

				/// <summary>
				/// 创建关键帧时间索引集合
				/// </summary>
				/// <param name="keyFrameTimes">关键帧时间对象</param>
				/// <returns></returns>
				public virtual void _buildKeyFrameIndexMap_NoVirtual(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_NoVirtual(this.NativeObject, object.Equals(keyFrameTimes, null) ? IntPtr.Zero : keyFrameTimes.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function(IntPtr keyFrameTimes)
				{
					EarthView.World.Graphic.AnimationTrack.KeyFrameTimes csobj_keyFrameTimes = new EarthView.World.Graphic.AnimationTrack.KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_keyFrameTimes.BindNativeObject(keyFrameTimes,"KeyFrameTimes");
					csobj_keyFrameTimes.Delegate = true;
					IClassFactory csobj_keyFrameTimesClassFactory = GlobalClassFactoryMap.Get(csobj_keyFrameTimes.GetCppInstanceTypeName());
					if (csobj_keyFrameTimesClassFactory != null)
					{
						csobj_keyFrameTimes.Delegate = true;
						csobj_keyFrameTimes = csobj_keyFrameTimesClassFactory.Create() as EarthView.World.Graphic.AnimationTrack.KeyFrameTimes;
						csobj_keyFrameTimes.BindNativeObject(keyFrameTimes, "KeyFrameTimes");
						csobj_keyFrameTimes.Delegate = true;
					}
					
					_buildKeyFrameIndexMap(csobj_keyFrameTimes);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pNativeObject, IntPtr keyFrameTimes);

				/// <summary>
				/// 创建关键帧时间索引集合
				/// </summary>
				/// <param name="keyFrameTimes">关键帧时间对象</param>
				/// <returns></returns>
				public virtual void _buildKeyFrameIndexMap(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, object.Equals(keyFrameTimes, null) ? IntPtr.Zero : keyFrameTimes.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _applyBaseKeyFrame_CallBack_void_CKeyFrame(IntPtr EVbase);

				protected _applyBaseKeyFrame_CallBack_void_CKeyFrame m__applyBaseKeyFrame_CallBack_void_CKeyFrame;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="keyFrameTimes">关键帧对象</param>
				/// <returns></returns>
				public virtual void _applyBaseKeyFrame_NoVirtual(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function(IntPtr EVbase)
				{
					EarthView.World.Graphic.KeyFrame csobj_base = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_base.BindNativeObject(EVbase,"CKeyFrame");
					csobj_base.Delegate = true;
					IClassFactory csobj_baseClassFactory = GlobalClassFactoryMap.Get(csobj_base.GetCppInstanceTypeName());
					if (csobj_baseClassFactory != null)
					{
						csobj_base.Delegate = true;
						csobj_base = csobj_baseClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csobj_base.BindNativeObject(EVbase, "CKeyFrame");
						csobj_base.Delegate = true;
					}
					
					_applyBaseKeyFrame(csobj_base);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="keyFrameTimes">关键帧对象</param>
				/// <returns></returns>
				public virtual void _applyBaseKeyFrame(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setListener_CallBack_void_CAnimationTrackListener(IntPtr ref_l);

				protected setListener_CallBack_void_CAnimationTrackListener m_setListener_CallBack_void_CAnimationTrackListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_l);

				/// <summary>
				/// 设置动画轨迹的监听器
				/// </summary>
				/// <param name="l">动画轨迹的监听器对象</param>
				/// <returns></returns>
				public virtual void SetListener_NoVirtual(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function(IntPtr ref_l)
				{
					EarthView.World.Graphic.AnimationTrack.AnimationTrackListener csobj_ref_l = new EarthView.World.Graphic.AnimationTrack.AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_l.BindNativeObject(ref_l,"CAnimationTrackListener");
					csobj_ref_l.Delegate = true;
					IClassFactory csobj_ref_lClassFactory = GlobalClassFactoryMap.Get(csobj_ref_l.GetCppInstanceTypeName());
					if (csobj_ref_lClassFactory != null)
					{
						csobj_ref_l.Delegate = true;
						csobj_ref_l = csobj_ref_lClassFactory.Create() as EarthView.World.Graphic.AnimationTrack.AnimationTrackListener;
						csobj_ref_l.BindNativeObject(ref_l, "CAnimationTrackListener");
						csobj_ref_l.Delegate = true;
					}
					
					SetListener(csobj_ref_l);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pNativeObject, IntPtr ref_l);

				/// <summary>
				/// 设置动画轨迹的监听器
				/// </summary>
				/// <param name="l">动画轨迹的监听器对象</param>
				/// <returns></returns>
				public virtual void SetListener(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_getParent_CAnimation(IntPtr pNativeObject);

				/// <summary>
				/// 获得动画轨迹所属动画对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画对象</returns>
				public EarthView.World.Graphic.Animation GetParent()
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_getParent_CAnimation(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Animation csObj = new EarthView.World.Graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAnimation");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Animation;
						csObj.BindNativeObject(__ptr, "CAnimation");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createKeyFrameImpl_CallBack_CKeyFrame_Real(double time);

				protected createKeyFrameImpl_CallBack_CKeyFrame_Real m_createKeyFrameImpl_CallBack_CKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected virtual EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function(double time)
				{
					EarthView.World.Graphic.KeyFrame csret=CreateKeyFrameImpl(time);
					
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
				private static extern IntPtr EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected virtual EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void populateClone_CallBack_void_CAnimationTrack(IntPtr clone);

				protected populateClone_CallBack_void_CAnimationTrack m_populateClone_CallBack_void_CAnimationTrack;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_NoVirtual(IntPtr pNativeObject, IntPtr clone);

				/// <summary>
				/// clone动画轨迹
				/// </summary>
				/// <param name="clone">动画轨迹</param>
				/// <returns></returns>
				protected virtual void PopulateClone_NoVirtual(EarthView.World.Graphic.AnimationTrack clone)
				{
					EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_NoVirtual(this.NativeObject, object.Equals(clone, null) ? IntPtr.Zero : clone.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function(IntPtr clone)
				{
					EarthView.World.Graphic.AnimationTrack csobj_clone = new EarthView.World.Graphic.AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_clone.BindNativeObject(clone,"CAnimationTrack");
					csobj_clone.Delegate = true;
					IClassFactory csobj_cloneClassFactory = GlobalClassFactoryMap.Get(csobj_clone.GetCppInstanceTypeName());
					if (csobj_cloneClassFactory != null)
					{
						csobj_clone.Delegate = true;
						csobj_clone = csobj_cloneClassFactory.Create() as EarthView.World.Graphic.AnimationTrack;
						csobj_clone.BindNativeObject(clone, "CAnimationTrack");
						csobj_clone.Delegate = true;
					}
					
					PopulateClone(csobj_clone);
					
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
				private static extern void EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pNativeObject, IntPtr clone);

				/// <summary>
				/// clone动画轨迹
				/// </summary>
				/// <param name="clone">动画轨迹</param>
				/// <returns></returns>
				protected virtual void PopulateClone(EarthView.World.Graphic.AnimationTrack clone)
				{
					EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, object.Equals(clone, null) ? IntPtr.Zero : clone.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationTrack", new AnimationTrackClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationTrackProxy", new AnimationTrackClassFactory());

				public AnimationTrack(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pObject, getNumKeyFrames_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFrame_CallBack_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pObject, createKeyFrame_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pObject, removeKeyFrame_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(IntPtr pObject, removeAllKeyFrames_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(IntPtr pObject, apply_CallBack_void_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(IntPtr pObject, _keyFrameDataChanged_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pObject, hasNonZeroKeyFrames_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_optimise_void(IntPtr pObject, optimise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pObject, _collectKeyFrameTimes_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pObject, _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pObject, _applyBaseKeyFrame_CallBack_void_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pObject, setListener_CallBack_void_CAnimationTrackListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pObject, createKeyFrameImpl_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pObject, populateClone_CallBack_void_CAnimationTrack pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getNumKeyFrames_CallBack_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function;
						GC.KeepAlive(m_getNumKeyFrames_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject, m_getNumKeyFrames_CallBack_ev_uint16);
						m_getKeyFrame_CallBack_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						m_createKeyFrame_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrame_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, m_createKeyFrame_CallBack_CKeyFrame_Real);
						m_removeKeyFrame_CallBack_void_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function;
						GC.KeepAlive(m_removeKeyFrame_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, m_removeKeyFrame_CallBack_void_ev_uint16);
						m_removeAllKeyFrames_CallBack_void = EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function;
						GC.KeepAlive(m_removeAllKeyFrames_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(this.NativeObject, m_removeAllKeyFrames_CallBack_void);
						m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function;
						GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						m_apply_CallBack_void_CTimeIndex_Real_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real_Real);
						m_apply_CallBack_void_CTimeIndex_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real);
						m_apply_CallBack_void_CTimeIndex = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(this.NativeObject, m_apply_CallBack_void_CTimeIndex);
						m__keyFrameDataChanged_CallBack_void = EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function;
						GC.KeepAlive(m__keyFrameDataChanged_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(this.NativeObject, m__keyFrameDataChanged_CallBack_void);
						m_hasNonZeroKeyFrames_CallBack_ev_bool = EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function;
						GC.KeepAlive(m_hasNonZeroKeyFrames_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject, m_hasNonZeroKeyFrames_CallBack_ev_bool);
						m_optimise_CallBack_void = EarthView_World_Graphic_CAnimationTrack_optimise_void_Function;
						GC.KeepAlive(m_optimise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_optimise_void(this.NativeObject, m_optimise_CallBack_void);
						m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						m__applyBaseKeyFrame_CallBack_void_CKeyFrame = EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function;
						GC.KeepAlive(m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						m_setListener_CallBack_void_CAnimationTrackListener = EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function;
						GC.KeepAlive(m_setListener_CallBack_void_CAnimationTrackListener);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, m_setListener_CallBack_void_CAnimationTrackListener);
						m_createKeyFrameImpl_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						m_populateClone_CallBack_void_CAnimationTrack = EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function;
						GC.KeepAlive(m_populateClone_CallBack_void_CAnimationTrack);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, m_populateClone_CallBack_void_CAnimationTrack);
					}
				}
				public static AnimationTrack FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimationTrack obj = baseObj as  AnimationTrack;
					if (object.Equals(obj, null))
					{
						obj = new AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAnimationTrack");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimationTrackClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimationTrack emptyInstance = new AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 数字动画轨迹类
			/// 管理数字动画轨迹
			/// </summary>
			public class NumericAnimationTrack : EarthView.World.Graphic.AnimationTrack
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <returns></returns>
				public NumericAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					Create("CNumericAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.NumericAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="target">可动画值对象</param>
				/// <returns></returns>
				public NumericAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, ref EarthView.World.Graphic.AnimableValuePtr target) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valuetarget = new BasePtr(target);
					list.Add("target", valuetarget.PtrVal);
					Create("CNumericAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.NumericAnimationTrack".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createNumericKeyFrame_CallBack_CNumericKeyFrame_Real(double timePos);

				protected createNumericKeyFrame_CallBack_CNumericKeyFrame_Real m_createNumericKeyFrame_CallBack_CNumericKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 在给定时间点产生新的数字动画关键帧并加入到动画序列
				/// </summary>
				/// <param name="timePos">动画时间点</param>
				/// <returns>产生的数字动画关键帧</returns>
				public virtual EarthView.World.Graphic.NumericKeyFrame CreateNumericKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.NumericKeyFrame csObj = new EarthView.World.Graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.NumericKeyFrame;
						csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.NumericKeyFrame csret=CreateNumericKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 在给定时间点产生新的数字动画关键帧并加入到动画序列
				/// </summary>
				/// <param name="timePos">动画时间点</param>
				/// <returns>产生的数字动画关键帧</returns>
				public virtual EarthView.World.Graphic.NumericKeyFrame CreateNumericKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.NumericKeyFrame csObj = new EarthView.World.Graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.NumericKeyFrame;
						csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 数字动画关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns>标识是否插值成功</returns>
				public new void GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 数字动画关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns>标识是否插值成功</returns>
				public override void GetInterpolatedKeyFrame(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的数字动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr anim, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对可动画值应用动画轨迹
				/// </summary>
				/// <param name="anim">可动画值对象</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				public void ApplyToAnimable(EarthView.World.Graphic.AnimableValuePtr anim, EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real_Real(this.NativeObject, object.Equals(anim, null) ? IntPtr.Zero : anim.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real(IntPtr pNativeObject, IntPtr anim, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对可动画值应用动画轨迹
				/// </summary>
				/// <param name="anim">可动画值对象</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public void ApplyToAnimable(EarthView.World.Graphic.AnimableValuePtr anim, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real(this.NativeObject, object.Equals(anim, null) ? IntPtr.Zero : anim.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex(IntPtr pNativeObject, IntPtr anim, IntPtr timeIndex);

				/// <summary>
				/// 对可动画值应用动画轨迹
				/// </summary>
				/// <param name="anim">可动画值对象</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public void ApplyToAnimable(EarthView.World.Graphic.AnimableValuePtr anim, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex(this.NativeObject, object.Equals(anim, null) ? IntPtr.Zero : anim.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getAssociatedAnimable_CallBack_AnimableValuePtr();

				protected getAssociatedAnimable_CallBack_AnimableValuePtr m_getAssociatedAnimable_CallBack_AnimableValuePtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得相关的可动画对象指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>可动画对象指针</returns>
				public virtual EarthView.World.Graphic.AnimableValuePtr GetAssociatedAnimable_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.AnimableValuePtr csObj = new EarthView.World.Graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.AnimableValuePtr;
						csObj.BindNativeObject(__ptr, "AnimableValuePtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Function()
				{
					EarthView.World.Graphic.AnimableValuePtr csret=GetAssociatedAnimable();
					
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(IntPtr pNativeObject);

				/// <summary>
				/// 获得相关的可动画对象指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>可动画对象指针</returns>
				public virtual EarthView.World.Graphic.AnimableValuePtr GetAssociatedAnimable()
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.AnimableValuePtr csObj = new EarthView.World.Graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.AnimableValuePtr;
						csObj.BindNativeObject(__ptr, "AnimableValuePtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAssociatedAnimable_CallBack_void_AnimableValuePtr(IntPtr val);

				protected setAssociatedAnimable_CallBack_void_AnimableValuePtr m_setAssociatedAnimable_CallBack_void_AnimableValuePtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置相关的可动画对象
				/// </summary>
				/// <param name="val">可动画对象指针</param>
				/// <returns></returns>
				public virtual void SetAssociatedAnimable_NoVirtual(EarthView.World.Graphic.AnimableValuePtr val)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Function(IntPtr val)
				{
					EarthView.World.Graphic.AnimableValuePtr csobj_val = new EarthView.World.Graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"AnimableValuePtr");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Graphic.AnimableValuePtr;
						csobj_val.BindNativeObject(val, "AnimableValuePtr");
						csobj_val.Delegate = true;
					}
					
					SetAssociatedAnimable(csobj_val);
					
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
				private static extern void EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置相关的可动画对象
				/// </summary>
				/// <param name="val">可动画对象指针</param>
				/// <returns></returns>
				public virtual void SetAssociatedAnimable(EarthView.World.Graphic.AnimableValuePtr val)
				{
					EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_getNumericKeyFrame_CNumericKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引获得数字动画关键帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>数字动画关键帧指针</returns>
				public EarthView.World.Graphic.NumericKeyFrame GetNumericKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_getNumericKeyFrame_CNumericKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.NumericKeyFrame csObj = new EarthView.World.Graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.NumericKeyFrame;
						csObj.BindNativeObject(__ptr, "CNumericKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack__clone_CNumericAnimationTrack_CAnimation(IntPtr pNativeObject, IntPtr newParent);

				/// <summary>
				/// clone数字动画轨迹
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public EarthView.World.Graphic.NumericAnimationTrack _clone(EarthView.World.Graphic.Animation newParent)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack__clone_CNumericAnimationTrack_CAnimation(this.NativeObject, object.Equals(newParent, null) ? IntPtr.Zero : newParent.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.NumericAnimationTrack csObj = new EarthView.World.Graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNumericAnimationTrack");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.NumericAnimationTrack;
						csObj.BindNativeObject(__ptr, "CNumericAnimationTrack");
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected new EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected override EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNumericAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CNumericAnimationTrack", new NumericAnimationTrackClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CNumericAnimationTrackProxy", new NumericAnimationTrackClassFactory());

				public NumericAnimationTrack(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(IntPtr pObject, createNumericKeyFrame_CallBack_CNumericKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(IntPtr pObject, getAssociatedAnimable_CallBack_AnimableValuePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(IntPtr pObject, setAssociatedAnimable_CallBack_void_AnimableValuePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pObject, getNumKeyFrames_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFrame_CallBack_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pObject, createKeyFrame_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pObject, removeKeyFrame_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void(IntPtr pObject, removeAllKeyFrames_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(IntPtr pObject, apply_CallBack_void_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void(IntPtr pObject, _keyFrameDataChanged_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pObject, hasNonZeroKeyFrames_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void(IntPtr pObject, optimise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pObject, _collectKeyFrameTimes_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pObject, _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pObject, _applyBaseKeyFrame_CallBack_void_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pObject, setListener_CallBack_void_CAnimationTrackListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pObject, createKeyFrameImpl_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pObject, populateClone_CallBack_void_CAnimationTrack pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createNumericKeyFrame_CallBack_CNumericKeyFrame_Real = EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Function;
						GC.KeepAlive(m_createNumericKeyFrame_CallBack_CNumericKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(this.NativeObject, m_createNumericKeyFrame_CallBack_CNumericKeyFrame_Real);
						m_getAssociatedAnimable_CallBack_AnimableValuePtr = EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Function;
						GC.KeepAlive(m_getAssociatedAnimable_CallBack_AnimableValuePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(this.NativeObject, m_getAssociatedAnimable_CallBack_AnimableValuePtr);
						m_setAssociatedAnimable_CallBack_void_AnimableValuePtr = EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Function;
						GC.KeepAlive(m_setAssociatedAnimable_CallBack_void_AnimableValuePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(this.NativeObject, m_setAssociatedAnimable_CallBack_void_AnimableValuePtr);
						m_getNumKeyFrames_CallBack_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function;
						GC.KeepAlive(m_getNumKeyFrames_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject, m_getNumKeyFrames_CallBack_ev_uint16);
						m_getKeyFrame_CallBack_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						m_createKeyFrame_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrame_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, m_createKeyFrame_CallBack_CKeyFrame_Real);
						m_removeKeyFrame_CallBack_void_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function;
						GC.KeepAlive(m_removeKeyFrame_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, m_removeKeyFrame_CallBack_void_ev_uint16);
						m_removeAllKeyFrames_CallBack_void = EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function;
						GC.KeepAlive(m_removeAllKeyFrames_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void(this.NativeObject, m_removeAllKeyFrames_CallBack_void);
						m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function;
						GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						m_apply_CallBack_void_CTimeIndex_Real_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real_Real);
						m_apply_CallBack_void_CTimeIndex_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real);
						m_apply_CallBack_void_CTimeIndex = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(this.NativeObject, m_apply_CallBack_void_CTimeIndex);
						m__keyFrameDataChanged_CallBack_void = EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function;
						GC.KeepAlive(m__keyFrameDataChanged_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void(this.NativeObject, m__keyFrameDataChanged_CallBack_void);
						m_hasNonZeroKeyFrames_CallBack_ev_bool = EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function;
						GC.KeepAlive(m_hasNonZeroKeyFrames_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject, m_hasNonZeroKeyFrames_CallBack_ev_bool);
						m_optimise_CallBack_void = EarthView_World_Graphic_CAnimationTrack_optimise_void_Function;
						GC.KeepAlive(m_optimise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void(this.NativeObject, m_optimise_CallBack_void);
						m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						m__applyBaseKeyFrame_CallBack_void_CKeyFrame = EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function;
						GC.KeepAlive(m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						m_setListener_CallBack_void_CAnimationTrackListener = EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function;
						GC.KeepAlive(m_setListener_CallBack_void_CAnimationTrackListener);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, m_setListener_CallBack_void_CAnimationTrackListener);
						m_createKeyFrameImpl_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						m_populateClone_CallBack_void_CAnimationTrack = EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function;
						GC.KeepAlive(m_populateClone_CallBack_void_CAnimationTrack);
						EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, m_populateClone_CallBack_void_CAnimationTrack);
					}
				}
				public override ushort GetNumKeyFrames()
				{
					return base.GetNumKeyFrames_NoVirtual();
				}
				public override EarthView.World.Graphic.KeyFrame GetKeyFrame(ushort index)
				{
					return base.GetKeyFrame_NoVirtual(index);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2,firstKeyIndex);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2);
				}
				public override EarthView.World.Graphic.KeyFrame CreateKeyFrame(double timePos)
				{
					return base.CreateKeyFrame_NoVirtual(timePos);
				}
				public override void RemoveKeyFrame(ushort index)
				{
					base.RemoveKeyFrame_NoVirtual(index);
				}
				public override void RemoveAllKeyFrames()
				{
					base.RemoveAllKeyFrames_NoVirtual();
				}
				public override void _keyFrameDataChanged()
				{
					base._keyFrameDataChanged_NoVirtual();
				}
				public override bool HasNonZeroKeyFrames()
				{
					return base.HasNonZeroKeyFrames_NoVirtual();
				}
				public override void Optimise()
				{
					base.Optimise_NoVirtual();
				}
				public override void _collectKeyFrameTimes(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._collectKeyFrameTimes_NoVirtual(ref keyFrameTimes);
				}
				public override void _buildKeyFrameIndexMap(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
				}
				public override void _applyBaseKeyFrame(EarthView.World.Graphic.KeyFrame EVbase)
				{
					base._applyBaseKeyFrame_NoVirtual(EVbase);
				}
				public override void SetListener(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					base.SetListener_NoVirtual(ref_l);
				}
				protected override void PopulateClone(EarthView.World.Graphic.AnimationTrack clone)
				{
					base.PopulateClone_NoVirtual(clone);
				}
				public static NumericAnimationTrack FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					NumericAnimationTrack obj = baseObj as  NumericAnimationTrack;
					if (object.Equals(obj, null))
					{
						obj = new NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CNumericAnimationTrack");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class NumericAnimationTrackClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					NumericAnimationTrack emptyInstance = new NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 节点动画轨迹类
			/// 管理节点动画轨迹变换
			/// </summary>
			public class NodeAnimationTrack : EarthView.World.Graphic.AnimationTrack
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <returns></returns>
				public NodeAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					Create("CNodeAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.NodeAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="targetNode">目标节点对象</param>
				/// <returns></returns>
				public NodeAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, EarthView.World.Graphic.Node ref_targetNode) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valueref_targetNode = new BasePtr(ref_targetNode);
					list.Add("ref_targetNode", valueref_targetNode.PtrVal);
					Create("CNodeAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.NodeAnimationTrack".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createNodeKeyFrame_CallBack_CTransformKeyFrame_Real(double timePos);

				protected createNodeKeyFrame_CallBack_CTransformKeyFrame_Real m_createNodeKeyFrame_CallBack_CTransformKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建新的节点动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>返回变换帧指针</returns>
				public virtual EarthView.World.Graphic.TransformKeyFrame CreateNodeKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TransformKeyFrame csObj = new EarthView.World.Graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.TransformKeyFrame csret=CreateNodeKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建新的节点动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>返回变换帧指针</returns>
				public virtual EarthView.World.Graphic.TransformKeyFrame CreateNodeKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TransformKeyFrame csObj = new EarthView.World.Graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getAssociatedNode_CallBack_CNode();

				protected getAssociatedNode_CallBack_CNode m_getAssociatedNode_CallBack_CNode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得节点动画轨迹相关节点对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>相关节点对象</returns>
				public virtual EarthView.World.Graphic.Node GetAssociatedNode_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(this.NativeObject);
					
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

				protected  IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Function()
				{
					EarthView.World.Graphic.Node csret=GetAssociatedNode();
					
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(IntPtr pNativeObject);

				/// <summary>
				/// 获得节点动画轨迹相关节点对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>相关节点对象</returns>
				public virtual EarthView.World.Graphic.Node GetAssociatedNode()
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(this.NativeObject);
					
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
				protected delegate void setAssociatedNode_CallBack_void_CNode(IntPtr ref_node);

				protected setAssociatedNode_CallBack_void_CNode m_setAssociatedNode_CallBack_void_CNode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 设置节点动画轨迹相关节点对象
				/// </summary>
				/// <param name="node">相关节点对象</param>
				/// <returns></returns>
				public virtual void SetAssociatedNode_NoVirtual(EarthView.World.Graphic.Node ref_node)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Function(IntPtr ref_node)
				{
					EarthView.World.Graphic.Node csobj_ref_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_node.BindNativeObject(ref_node,"CNode");
					csobj_ref_node.Delegate = true;
					IClassFactory csobj_ref_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_ref_node.GetCppInstanceTypeName());
					if (csobj_ref_nodeClassFactory != null)
					{
						csobj_ref_node.Delegate = true;
						csobj_ref_node = csobj_ref_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_ref_node.BindNativeObject(ref_node, "CNode");
						csobj_ref_node.Delegate = true;
					}
					
					SetAssociatedNode(csobj_ref_node);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 设置节点动画轨迹相关节点对象
				/// </summary>
				/// <param name="node">相关节点对象</param>
				/// <returns></returns>
				public virtual void SetAssociatedNode(EarthView.World.Graphic.Node ref_node)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real(IntPtr node, IntPtr timeIndex, double weight, double scale);

				protected applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Function(IntPtr node, IntPtr timeIndex, double weight, double scale)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex_Real(IntPtr node, IntPtr timeIndex, double weight);

				protected applyToNode_CallBack_void_CNode_CTimeIndex_Real m_applyToNode_CallBack_void_CNode_CTimeIndex_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Function(IntPtr node, IntPtr timeIndex, double weight)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex, weight);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex(IntPtr node, IntPtr timeIndex);

				protected applyToNode_CallBack_void_CNode_CTimeIndex m_applyToNode_CallBack_void_CNode_CTimeIndex;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Function(IntPtr node, IntPtr timeIndex)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setUseShortestRotationPath_CallBack_void_ev_bool(bool useShortestPath);

				protected setUseShortestRotationPath_CallBack_void_ev_bool m_setUseShortestRotationPath_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte useShortestPath);

				/// <summary>
				/// 设置是否应用最短旋转路径
				/// </summary>
				/// <param name="useShortestPath">是否应用最短旋转路径标识</param>
				/// <returns></returns>
				public virtual void SetUseShortestRotationPath_NoVirtual(bool useShortestPath)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(useShortestPath));
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Function(bool useShortestPath)
				{
					SetUseShortestRotationPath(useShortestPath);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(IntPtr pNativeObject, byte useShortestPath);

				/// <summary>
				/// 设置是否应用最短旋转路径
				/// </summary>
				/// <param name="useShortestPath">是否应用最短旋转路径标识</param>
				/// <returns></returns>
				public virtual void SetUseShortestRotationPath(bool useShortestPath)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(this.NativeObject, Convert.ToByte(useShortestPath));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getUseShortestRotationPath_CallBack_ev_bool();

				protected getUseShortestRotationPath_CallBack_ev_bool m_getUseShortestRotationPath_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得是否应用最短旋转路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>是返回true，否则false</returns>
				public virtual bool GetUseShortestRotationPath_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Function()
				{
					bool csret=GetUseShortestRotationPath();
					
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
				private static extern byte EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得是否应用最短旋转路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>是返回true，否则false</returns>
				public virtual bool GetUseShortestRotationPath()
				{
					byte ret=EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public new void GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public override void GetInterpolatedKeyFrame(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void _keyFrameDataChanged_NoVirtual()
				{
					EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void _keyFrameDataChanged()
				{
					EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16(ushort index);

				protected getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16 m_getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引返回节点动画
				/// </summary>
				/// <param name="index">动画索引</param>
				/// <returns>返回变换节点动画</returns>
				public virtual EarthView.World.Graphic.TransformKeyFrame GetNodeKeyFrame_NoVirtual(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TransformKeyFrame csObj = new EarthView.World.Graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Function(ushort index)
				{
					EarthView.World.Graphic.TransformKeyFrame csret=GetNodeKeyFrame(index);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引返回节点动画
				/// </summary>
				/// <param name="index">动画索引</param>
				/// <returns>返回变换节点动画</returns>
				public virtual EarthView.World.Graphic.TransformKeyFrame GetNodeKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TransformKeyFrame csObj = new EarthView.World.Graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CTransformKeyFrame");
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
				private static extern byte EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public new bool HasNonZeroKeyFrames_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public override bool HasNonZeroKeyFrames()
				{
					byte ret=EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void Optimise_NoVirtual()
				{
					EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void Optimise()
				{
					EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack__clone_CNodeAnimationTrack_CAnimation(IntPtr pNativeObject, IntPtr newParent);

				/// <summary>
				/// clone节点动画轨迹
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public EarthView.World.Graphic.NodeAnimationTrack _clone(EarthView.World.Graphic.Animation newParent)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack__clone_CNodeAnimationTrack_CAnimation(this.NativeObject, object.Equals(newParent, null) ? IntPtr.Zero : newParent.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.NodeAnimationTrack csObj = new EarthView.World.Graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNodeAnimationTrack");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.NodeAnimationTrack;
						csObj.BindNativeObject(__ptr, "CNodeAnimationTrack");
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public new void _applyBaseKeyFrame_NoVirtual(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public override void _applyBaseKeyFrame(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected new EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected override EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void buildInterpolationSplines_CallBack_void();

				protected buildInterpolationSplines_CallBack_void m_buildInterpolationSplines_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建动画轨迹插值曲线
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected virtual void BuildInterpolationSplines_NoVirtual()
				{
					EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Function()
				{
					BuildInterpolationSplines();
					
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
				private static extern void EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(IntPtr pNativeObject);

				/// <summary>
				/// 创建动画轨迹插值曲线
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected virtual void BuildInterpolationSplines()
				{
					EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CNodeAnimationTrack", new NodeAnimationTrackClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CNodeAnimationTrackProxy", new NodeAnimationTrackClassFactory());

				public NodeAnimationTrack(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(IntPtr pObject, createNodeKeyFrame_CallBack_CTransformKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(IntPtr pObject, getAssociatedNode_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(IntPtr pObject, setAssociatedNode_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(IntPtr pObject, setUseShortestRotationPath_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(IntPtr pObject, getUseShortestRotationPath_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(IntPtr pObject, getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(IntPtr pObject, buildInterpolationSplines_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pObject, getNumKeyFrames_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFrame_CallBack_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pObject, createKeyFrame_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pObject, removeKeyFrame_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void(IntPtr pObject, removeAllKeyFrames_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(IntPtr pObject, apply_CallBack_void_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(IntPtr pObject, _keyFrameDataChanged_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pObject, hasNonZeroKeyFrames_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(IntPtr pObject, optimise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pObject, _collectKeyFrameTimes_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pObject, _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pObject, _applyBaseKeyFrame_CallBack_void_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pObject, setListener_CallBack_void_CAnimationTrackListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pObject, createKeyFrameImpl_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pObject, populateClone_CallBack_void_CAnimationTrack pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createNodeKeyFrame_CallBack_CTransformKeyFrame_Real = EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Function;
						GC.KeepAlive(m_createNodeKeyFrame_CallBack_CTransformKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(this.NativeObject, m_createNodeKeyFrame_CallBack_CTransformKeyFrame_Real);
						m_getAssociatedNode_CallBack_CNode = EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Function;
						GC.KeepAlive(m_getAssociatedNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(this.NativeObject, m_getAssociatedNode_CallBack_CNode);
						m_setAssociatedNode_CallBack_void_CNode = EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Function;
						GC.KeepAlive(m_setAssociatedNode_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(this.NativeObject, m_setAssociatedNode_CallBack_void_CNode);
						m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real = EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real);
						m_applyToNode_CallBack_void_CNode_CTimeIndex_Real = EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex_Real);
						m_applyToNode_CallBack_void_CNode_CTimeIndex = EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex);
						m_setUseShortestRotationPath_CallBack_void_ev_bool = EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Function;
						GC.KeepAlive(m_setUseShortestRotationPath_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(this.NativeObject, m_setUseShortestRotationPath_CallBack_void_ev_bool);
						m_getUseShortestRotationPath_CallBack_ev_bool = EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Function;
						GC.KeepAlive(m_getUseShortestRotationPath_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(this.NativeObject, m_getUseShortestRotationPath_CallBack_ev_bool);
						m_getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16 = EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(this.NativeObject, m_getNodeKeyFrame_CallBack_CTransformKeyFrame_ev_uint16);
						m_buildInterpolationSplines_CallBack_void = EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Function;
						GC.KeepAlive(m_buildInterpolationSplines_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(this.NativeObject, m_buildInterpolationSplines_CallBack_void);
						m_getNumKeyFrames_CallBack_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function;
						GC.KeepAlive(m_getNumKeyFrames_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject, m_getNumKeyFrames_CallBack_ev_uint16);
						m_getKeyFrame_CallBack_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						m_createKeyFrame_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrame_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, m_createKeyFrame_CallBack_CKeyFrame_Real);
						m_removeKeyFrame_CallBack_void_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function;
						GC.KeepAlive(m_removeKeyFrame_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, m_removeKeyFrame_CallBack_void_ev_uint16);
						m_removeAllKeyFrames_CallBack_void = EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function;
						GC.KeepAlive(m_removeAllKeyFrames_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void(this.NativeObject, m_removeAllKeyFrames_CallBack_void);
						m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function;
						GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						m_apply_CallBack_void_CTimeIndex_Real_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real_Real);
						m_apply_CallBack_void_CTimeIndex_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real);
						m_apply_CallBack_void_CTimeIndex = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(this.NativeObject, m_apply_CallBack_void_CTimeIndex);
						m__keyFrameDataChanged_CallBack_void = EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function;
						GC.KeepAlive(m__keyFrameDataChanged_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(this.NativeObject, m__keyFrameDataChanged_CallBack_void);
						m_hasNonZeroKeyFrames_CallBack_ev_bool = EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function;
						GC.KeepAlive(m_hasNonZeroKeyFrames_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject, m_hasNonZeroKeyFrames_CallBack_ev_bool);
						m_optimise_CallBack_void = EarthView_World_Graphic_CAnimationTrack_optimise_void_Function;
						GC.KeepAlive(m_optimise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(this.NativeObject, m_optimise_CallBack_void);
						m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						m__applyBaseKeyFrame_CallBack_void_CKeyFrame = EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function;
						GC.KeepAlive(m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						m_setListener_CallBack_void_CAnimationTrackListener = EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function;
						GC.KeepAlive(m_setListener_CallBack_void_CAnimationTrackListener);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, m_setListener_CallBack_void_CAnimationTrackListener);
						m_createKeyFrameImpl_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						m_populateClone_CallBack_void_CAnimationTrack = EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function;
						GC.KeepAlive(m_populateClone_CallBack_void_CAnimationTrack);
						EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, m_populateClone_CallBack_void_CAnimationTrack);
					}
				}
				public override ushort GetNumKeyFrames()
				{
					return base.GetNumKeyFrames_NoVirtual();
				}
				public override EarthView.World.Graphic.KeyFrame GetKeyFrame(ushort index)
				{
					return base.GetKeyFrame_NoVirtual(index);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2,firstKeyIndex);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2);
				}
				public override EarthView.World.Graphic.KeyFrame CreateKeyFrame(double timePos)
				{
					return base.CreateKeyFrame_NoVirtual(timePos);
				}
				public override void RemoveKeyFrame(ushort index)
				{
					base.RemoveKeyFrame_NoVirtual(index);
				}
				public override void RemoveAllKeyFrames()
				{
					base.RemoveAllKeyFrames_NoVirtual();
				}
				public override void _collectKeyFrameTimes(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._collectKeyFrameTimes_NoVirtual(ref keyFrameTimes);
				}
				public override void _buildKeyFrameIndexMap(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
				}
				public override void SetListener(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					base.SetListener_NoVirtual(ref_l);
				}
				protected override void PopulateClone(EarthView.World.Graphic.AnimationTrack clone)
				{
					base.PopulateClone_NoVirtual(clone);
				}
				public static NodeAnimationTrack FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					NodeAnimationTrack obj = baseObj as  NodeAnimationTrack;
					if (object.Equals(obj, null))
					{
						obj = new NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CNodeAnimationTrack");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class NodeAnimationTrackClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					NodeAnimationTrack emptyInstance = new NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class SphereNodeAnimationTrack : EarthView.World.Graphic.AnimationTrack
			{
				public class SphereNodeAnimationTrackListener : EarthView.World.Graphic.AnimationTrack.AnimationTrackListener
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public SphereNodeAnimationTrackListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSphereNodeAnimationTrackListenerProxy", null);
						if (!"EarthView.World.Graphic.SphereNodeAnimationTrack+SphereNodeAnimationTrackListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getRadius_CallBack_ev_real64_CSphereTransformKeyFrame(IntPtr kf);

					protected getRadius_CallBack_ev_real64_CSphereTransformKeyFrame m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr kf);

					/// <summary>
					/// 关键帧插值
					/// </summary>
					/// <param name="t">动画轨迹</param>
					/// <param name="timeIndex">时间索引</param>
					/// <param name="kf">插值结果</param>
					/// <returns>标识是否插值成功</returns>
					//virtual ev_real64 getRadius(_in ev_real64 lat,_in ev_real64 lon);
					public virtual double GetRadius_NoVirtual(EarthView.World.Graphic.SphereTransformKeyFrame kf)
					{
						double ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(this.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Function(IntPtr kf)
					{
						EarthView.World.Graphic.SphereTransformKeyFrame csobj_kf = new EarthView.World.Graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_kf.BindNativeObject(kf,"CSphereTransformKeyFrame");
						csobj_kf.Delegate = true;
						IClassFactory csobj_kfClassFactory = GlobalClassFactoryMap.Get(csobj_kf.GetCppInstanceTypeName());
						if (csobj_kfClassFactory != null)
						{
							csobj_kf.Delegate = true;
							csobj_kf = csobj_kfClassFactory.Create() as EarthView.World.Graphic.SphereTransformKeyFrame;
							csobj_kf.BindNativeObject(kf, "CSphereTransformKeyFrame");
							csobj_kf.Delegate = true;
						}
						
						double csret=GetRadius(csobj_kf);
						
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
					private static extern double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(IntPtr pNativeObject, IntPtr kf);

					/// <summary>
					/// 关键帧插值
					/// </summary>
					/// <param name="t">动画轨迹</param>
					/// <param name="timeIndex">时间索引</param>
					/// <param name="kf">插值结果</param>
					/// <returns>标识是否插值成功</returns>
					//virtual ev_real64 getRadius(_in ev_real64 lat,_in ev_real64 lon);
					public virtual double GetRadius(EarthView.World.Graphic.SphereTransformKeyFrame kf)
					{
						double ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(this.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					protected getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latA, double lonA, double latB, double lonB);

					/// <summary>
					///根据两个控制点计算heading角
					/// </summary>
					/// <param name="latA">第一个纬度</param>
					/// <param name="lonA">第一个经度</param>
					/// <param name="latB">第二个纬度</param>
					/// <param name="lonB">第二个经度</param>
					/// <returns></returns>
					public virtual double GetHeading_NoVirtual(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latA, lonA, latB, lonB);
						
						return ret;
						
					}

					protected  double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function(double latA, double lonA, double latB, double lonB)
					{
						double csret=GetHeading(latA, lonA, latB, lonB);
						
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
					private static extern double EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latA, double lonA, double latB, double lonB);

					/// <summary>
					///根据两个控制点计算heading角
					/// </summary>
					/// <param name="latA">第一个纬度</param>
					/// <param name="lonA">第一个经度</param>
					/// <param name="latB">第二个纬度</param>
					/// <param name="lonB">第二个经度</param>
					/// <returns></returns>
					public virtual double GetHeading(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, latA, lonA, latB, lonB);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(IntPtr yawA, IntPtr pitchA, IntPtr rollA, IntPtr yawB, IntPtr pitchB, IntPtr rollB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr roll);

					protected getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr yawA, IntPtr pitchA, IntPtr rollA, IntPtr yawB, IntPtr pitchB, IntPtr rollB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr roll);

					/// <summary>
					/// 计算当前帧的欧拉角
					/// </summary>
					/// <param name="yawA">第一个关键帧的yaw角</param>
					/// <param name="pitchA">第一个关键帧的pitch角</param>
					/// <param name="rollA">第一个关键帧的roll角</param>
					/// <param name="yawB">第二个关键帧的yaw角</param>
					/// <param name="pitchB">第二个关键帧的pitch角</param>
					/// <param name="rollB">第二个关键帧的roll角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="roll">返回的roll角</param>
					/// <returns></returns>
					public virtual void GetEuler_NoVirtual(EarthView.World.Spatial.Math.Degree yawA, EarthView.World.Spatial.Math.Degree pitchA, EarthView.World.Spatial.Math.Degree rollA, EarthView.World.Spatial.Math.Degree yawB, EarthView.World.Spatial.Math.Degree pitchB, EarthView.World.Spatial.Math.Degree rollB, double timeRatio, ref EarthView.World.Spatial.Math.Degree yaw, ref EarthView.World.Spatial.Math.Degree pitch, ref EarthView.World.Spatial.Math.Degree roll)
					{
						EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(this.NativeObject, object.Equals(yawA, null) ? IntPtr.Zero : yawA.NativeObject, object.Equals(pitchA, null) ? IntPtr.Zero : pitchA.NativeObject, object.Equals(rollA, null) ? IntPtr.Zero : rollA.NativeObject, object.Equals(yawB, null) ? IntPtr.Zero : yawB.NativeObject, object.Equals(pitchB, null) ? IntPtr.Zero : pitchB.NativeObject, object.Equals(rollB, null) ? IntPtr.Zero : rollB.NativeObject, timeRatio, object.Equals(yaw, null) ? IntPtr.Zero : yaw.NativeObject, object.Equals(pitch, null) ? IntPtr.Zero : pitch.NativeObject, object.Equals(roll, null) ? IntPtr.Zero : roll.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Function(IntPtr yawA, IntPtr pitchA, IntPtr rollA, IntPtr yawB, IntPtr pitchB, IntPtr rollB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr roll)
					{
						EarthView.World.Spatial.Math.Degree csobj_yawA = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_yawA.BindNativeObject(yawA,"CDegree");
						csobj_yawA.Delegate = true;
						IClassFactory csobj_yawAClassFactory = GlobalClassFactoryMap.Get(csobj_yawA.GetCppInstanceTypeName());
						if (csobj_yawAClassFactory != null)
						{
							csobj_yawA.Delegate = true;
							csobj_yawA = csobj_yawAClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_yawA.BindNativeObject(yawA, "CDegree");
							csobj_yawA.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_pitchA = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pitchA.BindNativeObject(pitchA,"CDegree");
						csobj_pitchA.Delegate = true;
						IClassFactory csobj_pitchAClassFactory = GlobalClassFactoryMap.Get(csobj_pitchA.GetCppInstanceTypeName());
						if (csobj_pitchAClassFactory != null)
						{
							csobj_pitchA.Delegate = true;
							csobj_pitchA = csobj_pitchAClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_pitchA.BindNativeObject(pitchA, "CDegree");
							csobj_pitchA.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_rollA = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rollA.BindNativeObject(rollA,"CDegree");
						csobj_rollA.Delegate = true;
						IClassFactory csobj_rollAClassFactory = GlobalClassFactoryMap.Get(csobj_rollA.GetCppInstanceTypeName());
						if (csobj_rollAClassFactory != null)
						{
							csobj_rollA.Delegate = true;
							csobj_rollA = csobj_rollAClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_rollA.BindNativeObject(rollA, "CDegree");
							csobj_rollA.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_yawB = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_yawB.BindNativeObject(yawB,"CDegree");
						csobj_yawB.Delegate = true;
						IClassFactory csobj_yawBClassFactory = GlobalClassFactoryMap.Get(csobj_yawB.GetCppInstanceTypeName());
						if (csobj_yawBClassFactory != null)
						{
							csobj_yawB.Delegate = true;
							csobj_yawB = csobj_yawBClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_yawB.BindNativeObject(yawB, "CDegree");
							csobj_yawB.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_pitchB = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pitchB.BindNativeObject(pitchB,"CDegree");
						csobj_pitchB.Delegate = true;
						IClassFactory csobj_pitchBClassFactory = GlobalClassFactoryMap.Get(csobj_pitchB.GetCppInstanceTypeName());
						if (csobj_pitchBClassFactory != null)
						{
							csobj_pitchB.Delegate = true;
							csobj_pitchB = csobj_pitchBClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_pitchB.BindNativeObject(pitchB, "CDegree");
							csobj_pitchB.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_rollB = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rollB.BindNativeObject(rollB,"CDegree");
						csobj_rollB.Delegate = true;
						IClassFactory csobj_rollBClassFactory = GlobalClassFactoryMap.Get(csobj_rollB.GetCppInstanceTypeName());
						if (csobj_rollBClassFactory != null)
						{
							csobj_rollB.Delegate = true;
							csobj_rollB = csobj_rollBClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_rollB.BindNativeObject(rollB, "CDegree");
							csobj_rollB.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_yaw = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_yaw.BindNativeObject(yaw,"CDegree");
						csobj_yaw.Delegate = true;
						IClassFactory csobj_yawClassFactory = GlobalClassFactoryMap.Get(csobj_yaw.GetCppInstanceTypeName());
						if (csobj_yawClassFactory != null)
						{
							csobj_yaw.Delegate = true;
							csobj_yaw = csobj_yawClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_yaw.BindNativeObject(yaw, "CDegree");
							csobj_yaw.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_pitch = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pitch.BindNativeObject(pitch,"CDegree");
						csobj_pitch.Delegate = true;
						IClassFactory csobj_pitchClassFactory = GlobalClassFactoryMap.Get(csobj_pitch.GetCppInstanceTypeName());
						if (csobj_pitchClassFactory != null)
						{
							csobj_pitch.Delegate = true;
							csobj_pitch = csobj_pitchClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_pitch.BindNativeObject(pitch, "CDegree");
							csobj_pitch.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_roll = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_roll.BindNativeObject(roll,"CDegree");
						csobj_roll.Delegate = true;
						IClassFactory csobj_rollClassFactory = GlobalClassFactoryMap.Get(csobj_roll.GetCppInstanceTypeName());
						if (csobj_rollClassFactory != null)
						{
							csobj_roll.Delegate = true;
							csobj_roll = csobj_rollClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_roll.BindNativeObject(roll, "CDegree");
							csobj_roll.Delegate = true;
						}
						
						GetEuler(csobj_yawA, csobj_pitchA, csobj_rollA, csobj_yawB, csobj_pitchB, csobj_rollB, timeRatio, ref csobj_yaw, ref csobj_pitch, ref csobj_roll);
						
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
					private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(IntPtr pNativeObject, IntPtr yawA, IntPtr pitchA, IntPtr rollA, IntPtr yawB, IntPtr pitchB, IntPtr rollB, double timeRatio, IntPtr yaw, IntPtr pitch, IntPtr roll);

					/// <summary>
					/// 计算当前帧的欧拉角
					/// </summary>
					/// <param name="yawA">第一个关键帧的yaw角</param>
					/// <param name="pitchA">第一个关键帧的pitch角</param>
					/// <param name="rollA">第一个关键帧的roll角</param>
					/// <param name="yawB">第二个关键帧的yaw角</param>
					/// <param name="pitchB">第二个关键帧的pitch角</param>
					/// <param name="rollB">第二个关键帧的roll角</param>
					/// <param name="timeRatio">时间比例</param>
					/// <param name="yaw">返回的yaw角</param>
					/// <param name="pitch">返回的pitch角</param>
					/// <param name="roll">返回的roll角</param>
					/// <returns></returns>
					public virtual void GetEuler(EarthView.World.Spatial.Math.Degree yawA, EarthView.World.Spatial.Math.Degree pitchA, EarthView.World.Spatial.Math.Degree rollA, EarthView.World.Spatial.Math.Degree yawB, EarthView.World.Spatial.Math.Degree pitchB, EarthView.World.Spatial.Math.Degree rollB, double timeRatio, ref EarthView.World.Spatial.Math.Degree yaw, ref EarthView.World.Spatial.Math.Degree pitch, ref EarthView.World.Spatial.Math.Degree roll)
					{
						EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.NativeObject, object.Equals(yawA, null) ? IntPtr.Zero : yawA.NativeObject, object.Equals(pitchA, null) ? IntPtr.Zero : pitchA.NativeObject, object.Equals(rollA, null) ? IntPtr.Zero : rollA.NativeObject, object.Equals(yawB, null) ? IntPtr.Zero : yawB.NativeObject, object.Equals(pitchB, null) ? IntPtr.Zero : pitchB.NativeObject, object.Equals(rollB, null) ? IntPtr.Zero : rollB.NativeObject, timeRatio, object.Equals(yaw, null) ? IntPtr.Zero : yaw.NativeObject, object.Equals(pitch, null) ? IntPtr.Zero : pitch.NativeObject, object.Equals(roll, null) ? IntPtr.Zero : roll.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetRadius_void_ev_bool(IntPtr pNativeObject, byte enableGetRadius);

					/// <summary>
					/// 设置是否启用获取半径功能
					/// </summary>
					/// <param name="enableGetRadius">是否启用</param>
					/// <returns></returns>
					public void SetEnabledToGetRadius(bool enableGetRadius)
					{
						EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetRadius_void_ev_bool(this.NativeObject, Convert.ToByte(enableGetRadius));
						
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
					private static extern byte EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetRadius_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否启用获取半径功能
					/// </summary>
					/// <returns></returns>
					public bool GetEnabledToGetRadius()
					{
						byte ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetRadius_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetHeading_void_ev_bool(IntPtr pNativeObject, byte enableGetHeading);

					/// <summary>
					/// 设置是否启用获取偏航角功能
					/// </summary>
					/// <param name="enableGetHeading">是否启用</param>
					/// <returns></returns>
					public void SetEnabledToGetHeading(bool enableGetHeading)
					{
						EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetHeading_void_ev_bool(this.NativeObject, Convert.ToByte(enableGetHeading));
						
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
					private static extern byte EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetHeading_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否启用获取偏航角功能
					/// </summary>
					/// <returns></returns>
					public bool GetEnabledToGetHeading()
					{
						byte ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetHeading_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetEuler_void_ev_bool(IntPtr pNativeObject, byte enableGetEuler);

					/// <summary>
					/// 设置是否启用计算欧拉角功能
					/// </summary>
					/// <param name="enableGetEuler">是否启用</param>
					/// <returns></returns>
					public void SetEnabledToGetEuler(bool enableGetEuler)
					{
						EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetEuler_void_ev_bool(this.NativeObject, Convert.ToByte(enableGetEuler));
						
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
					private static extern byte EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetEuler_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否启用计算欧拉角功能
					/// </summary>
					/// <returns></returns>
					public bool GetEnabledToGetEuler()
					{
						byte ret=EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetEuler_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSphereNodeAnimationTrackListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener", new SphereNodeAnimationTrackListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListenerProxy", new SphereNodeAnimationTrackListenerClassFactory());

					public SphereNodeAnimationTrackListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(IntPtr pObject, getRadius_CallBack_ev_real64_CSphereTransformKeyFrame pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(IntPtr pObject, getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Function;
							GC.KeepAlive(m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame);
							EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(this.NativeObject, m_getRadius_CallBack_ev_real64_CSphereTransformKeyFrame);
							m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getHeading_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree = EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Function;
							GC.KeepAlive(m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree);
							EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.NativeObject, m_getEuler_CallBack_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree);
							m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Function;
							GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
							EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame);
						}
					}
					public override bool GetInterpolatedKeyFrame(EarthView.World.Graphic.AnimationTrack t, EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
					{
						return base.GetInterpolatedKeyFrame_NoVirtual(t,timeIndex,kf);
					}
					public static SphereNodeAnimationTrackListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SphereNodeAnimationTrackListener obj = baseObj as  SphereNodeAnimationTrackListener;
						if (object.Equals(obj, null))
						{
							obj = new SphereNodeAnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSphereNodeAnimationTrackListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SphereNodeAnimationTrackListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SphereNodeAnimationTrackListener emptyInstance = new SphereNodeAnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <returns></returns>
				public SphereNodeAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					Create("CSphereNodeAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.SphereNodeAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="targetNode">目标节点对象</param>
				/// <returns></returns>
				public SphereNodeAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, EarthView.World.Graphic.Node ref_targetNode) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valueref_targetNode = new BasePtr(ref_targetNode);
					list.Add("ref_targetNode", valueref_targetNode.PtrVal);
					Create("CSphereNodeAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.SphereNodeAnimationTrack".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real(double timePos);

				protected createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real m_createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建新的节点动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>返回变换帧指针</returns>
				public virtual EarthView.World.Graphic.SphereTransformKeyFrame CreateNodeKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SphereTransformKeyFrame csObj = new EarthView.World.Graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SphereTransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.SphereTransformKeyFrame csret=CreateNodeKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建新的节点动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>返回变换帧指针</returns>
				public virtual EarthView.World.Graphic.SphereTransformKeyFrame CreateNodeKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SphereTransformKeyFrame csObj = new EarthView.World.Graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SphereTransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getAssociatedNode_CallBack_CNode();

				protected getAssociatedNode_CallBack_CNode m_getAssociatedNode_CallBack_CNode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得节点动画轨迹相关节点对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>相关节点对象</returns>
				public virtual EarthView.World.Graphic.Node GetAssociatedNode_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(this.NativeObject);
					
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

				protected  IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Function()
				{
					EarthView.World.Graphic.Node csret=GetAssociatedNode();
					
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(IntPtr pNativeObject);

				/// <summary>
				/// 获得节点动画轨迹相关节点对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>相关节点对象</returns>
				public virtual EarthView.World.Graphic.Node GetAssociatedNode()
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(this.NativeObject);
					
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
				protected delegate void setAssociatedNode_CallBack_void_CNode(IntPtr ref_node);

				protected setAssociatedNode_CallBack_void_CNode m_setAssociatedNode_CallBack_void_CNode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 设置节点动画轨迹相关节点对象
				/// </summary>
				/// <param name="node">相关节点对象</param>
				/// <returns></returns>
				public virtual void SetAssociatedNode_NoVirtual(EarthView.World.Graphic.Node ref_node)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Function(IntPtr ref_node)
				{
					EarthView.World.Graphic.Node csobj_ref_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_node.BindNativeObject(ref_node,"CNode");
					csobj_ref_node.Delegate = true;
					IClassFactory csobj_ref_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_ref_node.GetCppInstanceTypeName());
					if (csobj_ref_nodeClassFactory != null)
					{
						csobj_ref_node.Delegate = true;
						csobj_ref_node = csobj_ref_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_ref_node.BindNativeObject(ref_node, "CNode");
						csobj_ref_node.Delegate = true;
					}
					
					SetAssociatedNode(csobj_ref_node);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 设置节点动画轨迹相关节点对象
				/// </summary>
				/// <param name="node">相关节点对象</param>
				/// <returns></returns>
				public virtual void SetAssociatedNode(EarthView.World.Graphic.Node ref_node)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real(IntPtr node, IntPtr timeIndex, double weight, double scale);

				protected applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				protected  void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Function(IntPtr node, IntPtr timeIndex, double weight, double scale)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="scale">动画大小变化比例</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex_Real(IntPtr node, IntPtr timeIndex, double weight);

				protected applyToNode_CallBack_void_CNode_CTimeIndex_Real m_applyToNode_CallBack_void_CNode_CTimeIndex_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				protected  void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Function(IntPtr node, IntPtr timeIndex, double weight)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex, weight);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToNode_CallBack_void_CNode_CTimeIndex(IntPtr node, IntPtr timeIndex);

				protected applyToNode_CallBack_void_CNode_CTimeIndex m_applyToNode_CallBack_void_CNode_CTimeIndex;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToNode_NoVirtual(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Function(IntPtr node, IntPtr timeIndex)
				{
					EarthView.World.Graphic.Node csobj_node = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"CNode");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_node.BindNativeObject(node, "CNode");
						csobj_node.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToNode(csobj_node, csobj_timeIndex);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(IntPtr pNativeObject, IntPtr node, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的节点
				/// </summary>
				/// <param name="node">节点</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToNode(EarthView.World.Graphic.Node node, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public new void GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public override void GetInterpolatedKeyFrame(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的节点动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void _keyFrameDataChanged_NoVirtual()
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(IntPtr pNativeObject);

				/// <summary>
				/// 通知动画轨迹动画帧已经改变
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void _keyFrameDataChanged()
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16(ushort index);

				protected getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16 m_getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引返回节点动画
				/// </summary>
				/// <param name="index">动画索引</param>
				/// <returns>返回变换节点动画</returns>
				public virtual EarthView.World.Graphic.SphereTransformKeyFrame GetNodeKeyFrame_NoVirtual(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SphereTransformKeyFrame csObj = new EarthView.World.Graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SphereTransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Function(ushort index)
				{
					EarthView.World.Graphic.SphereTransformKeyFrame csret=GetNodeKeyFrame(index);
					
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 根据索引返回节点动画
				/// </summary>
				/// <param name="index">动画索引</param>
				/// <returns>返回变换节点动画</returns>
				public virtual EarthView.World.Graphic.SphereTransformKeyFrame GetNodeKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SphereTransformKeyFrame csObj = new EarthView.World.Graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SphereTransformKeyFrame;
						csObj.BindNativeObject(__ptr, "CSphereTransformKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack__clone_CSphereNodeAnimationTrack_CAnimation(IntPtr pNativeObject, IntPtr newParent);

				///
				///				/// <summary>
				///				/// 判断动画轨迹是否含有效帧
				///				/// </summary>
				///				/// <param name=""></param>
				///				/// <returns>存在返回true，否则false</returns>
				///				virtual ev_bool hasNonZeroKeyFrames() const;
				///				/// <summary>
				///				/// 通过删除相同关键帧优化动画轨迹
				///				/// </summary>
				///				/// <param name=""></param>
				///				/// <returns></returns>
				///				virtual void optimise();
				//// <summary>
				//// clone节点动画轨迹
				//// </summary>
				//// <param name="newParent">所属动画序列</param>
				//// <returns>数字动画轨迹指针</returns>
				public EarthView.World.Graphic.SphereNodeAnimationTrack _clone(EarthView.World.Graphic.Animation newParent)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack__clone_CSphereNodeAnimationTrack_CAnimation(this.NativeObject, object.Equals(newParent, null) ? IntPtr.Zero : newParent.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SphereNodeAnimationTrack csObj = new EarthView.World.Graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSphereNodeAnimationTrack");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SphereNodeAnimationTrack;
						csObj.BindNativeObject(__ptr, "CSphereNodeAnimationTrack");
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_l);

				public new void SetListener_NoVirtual(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pNativeObject, IntPtr ref_l);

				public override void SetListener(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public new void _applyBaseKeyFrame_NoVirtual(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public override void _applyBaseKeyFrame(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected new EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected override EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSphereNodeAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSphereNodeAnimationTrack", new SphereNodeAnimationTrackClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSphereNodeAnimationTrackProxy", new SphereNodeAnimationTrackClassFactory());

				public SphereNodeAnimationTrack(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(IntPtr pObject, createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(IntPtr pObject, getAssociatedNode_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(IntPtr pObject, setAssociatedNode_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(IntPtr pObject, applyToNode_CallBack_void_CNode_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(IntPtr pObject, getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pObject, getNumKeyFrames_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFrame_CallBack_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pObject, createKeyFrame_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pObject, removeKeyFrame_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void(IntPtr pObject, removeAllKeyFrames_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(IntPtr pObject, apply_CallBack_void_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(IntPtr pObject, _keyFrameDataChanged_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pObject, hasNonZeroKeyFrames_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void(IntPtr pObject, optimise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pObject, _collectKeyFrameTimes_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pObject, _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pObject, _applyBaseKeyFrame_CallBack_void_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pObject, setListener_CallBack_void_CAnimationTrackListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pObject, createKeyFrameImpl_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pObject, populateClone_CallBack_void_CAnimationTrack pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real = EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Function;
						GC.KeepAlive(m_createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(this.NativeObject, m_createNodeKeyFrame_CallBack_CSphereTransformKeyFrame_Real);
						m_getAssociatedNode_CallBack_CNode = EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Function;
						GC.KeepAlive(m_getAssociatedNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(this.NativeObject, m_getAssociatedNode_CallBack_CNode);
						m_setAssociatedNode_CallBack_void_CNode = EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Function;
						GC.KeepAlive(m_setAssociatedNode_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(this.NativeObject, m_setAssociatedNode_CallBack_void_CNode);
						m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real = EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex_Real_Real);
						m_applyToNode_CallBack_void_CNode_CTimeIndex_Real = EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex_Real);
						m_applyToNode_CallBack_void_CNode_CTimeIndex = EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Function;
						GC.KeepAlive(m_applyToNode_CallBack_void_CNode_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(this.NativeObject, m_applyToNode_CallBack_void_CNode_CTimeIndex);
						m_getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16 = EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(this.NativeObject, m_getNodeKeyFrame_CallBack_CSphereTransformKeyFrame_ev_uint16);
						m_getNumKeyFrames_CallBack_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function;
						GC.KeepAlive(m_getNumKeyFrames_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject, m_getNumKeyFrames_CallBack_ev_uint16);
						m_getKeyFrame_CallBack_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						m_createKeyFrame_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrame_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, m_createKeyFrame_CallBack_CKeyFrame_Real);
						m_removeKeyFrame_CallBack_void_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function;
						GC.KeepAlive(m_removeKeyFrame_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, m_removeKeyFrame_CallBack_void_ev_uint16);
						m_removeAllKeyFrames_CallBack_void = EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function;
						GC.KeepAlive(m_removeAllKeyFrames_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void(this.NativeObject, m_removeAllKeyFrames_CallBack_void);
						m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function;
						GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						m_apply_CallBack_void_CTimeIndex_Real_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real_Real);
						m_apply_CallBack_void_CTimeIndex_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real);
						m_apply_CallBack_void_CTimeIndex = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(this.NativeObject, m_apply_CallBack_void_CTimeIndex);
						m__keyFrameDataChanged_CallBack_void = EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function;
						GC.KeepAlive(m__keyFrameDataChanged_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(this.NativeObject, m__keyFrameDataChanged_CallBack_void);
						m_hasNonZeroKeyFrames_CallBack_ev_bool = EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function;
						GC.KeepAlive(m_hasNonZeroKeyFrames_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject, m_hasNonZeroKeyFrames_CallBack_ev_bool);
						m_optimise_CallBack_void = EarthView_World_Graphic_CAnimationTrack_optimise_void_Function;
						GC.KeepAlive(m_optimise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void(this.NativeObject, m_optimise_CallBack_void);
						m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						m__applyBaseKeyFrame_CallBack_void_CKeyFrame = EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function;
						GC.KeepAlive(m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						m_setListener_CallBack_void_CAnimationTrackListener = EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function;
						GC.KeepAlive(m_setListener_CallBack_void_CAnimationTrackListener);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, m_setListener_CallBack_void_CAnimationTrackListener);
						m_createKeyFrameImpl_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						m_populateClone_CallBack_void_CAnimationTrack = EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function;
						GC.KeepAlive(m_populateClone_CallBack_void_CAnimationTrack);
						EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, m_populateClone_CallBack_void_CAnimationTrack);
					}
				}
				public override ushort GetNumKeyFrames()
				{
					return base.GetNumKeyFrames_NoVirtual();
				}
				public override EarthView.World.Graphic.KeyFrame GetKeyFrame(ushort index)
				{
					return base.GetKeyFrame_NoVirtual(index);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2,firstKeyIndex);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2);
				}
				public override EarthView.World.Graphic.KeyFrame CreateKeyFrame(double timePos)
				{
					return base.CreateKeyFrame_NoVirtual(timePos);
				}
				public override void RemoveKeyFrame(ushort index)
				{
					base.RemoveKeyFrame_NoVirtual(index);
				}
				public override void RemoveAllKeyFrames()
				{
					base.RemoveAllKeyFrames_NoVirtual();
				}
				public override bool HasNonZeroKeyFrames()
				{
					return base.HasNonZeroKeyFrames_NoVirtual();
				}
				public override void Optimise()
				{
					base.Optimise_NoVirtual();
				}
				public override void _collectKeyFrameTimes(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._collectKeyFrameTimes_NoVirtual(ref keyFrameTimes);
				}
				public override void _buildKeyFrameIndexMap(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
				}
				protected override void PopulateClone(EarthView.World.Graphic.AnimationTrack clone)
				{
					base.PopulateClone_NoVirtual(clone);
				}
				public static SphereNodeAnimationTrack FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					SphereNodeAnimationTrack obj = baseObj as  SphereNodeAnimationTrack;
					if (object.Equals(obj, null))
					{
						obj = new SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CSphereNodeAnimationTrack");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class SphereNodeAnimationTrackClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					SphereNodeAnimationTrack emptyInstance = new SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public enum VERTEXANIMATIONTYPE
			{
						VAT_NONE = 0,
						VAT_MORPH = 1,
						VAT_POSE = 2
			
			}

			/// <summary>
			/// 顶点动画轨迹类
			/// 管理顶点动画轨迹
			/// </summary>
			public class VertexAnimationTrack : EarthView.World.Graphic.AnimationTrack
			{
				public enum TARGETMODE
				{
								TM_SOFTWARE,
								TM_HARDWARE
				
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="animType">顶点变换动画类型</param>
				/// <returns></returns>
				public VertexAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, EarthView.World.Graphic.VERTEXANIMATIONTYPE animType) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valueanimType = new BasePtr(animType);
					list.Add("animType", valueanimType.PtrVal);
					Create("CVertexAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.VertexAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="animType">顶点变换动画类型</param>
				/// <param name="targetData">顶点数据对象</param>
				/// <param name="target">动画类型(软/硬)</param>
				/// <returns></returns>
				public VertexAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, EarthView.World.Graphic.VERTEXANIMATIONTYPE animType, EarthView.World.Graphic.VertexData ref_targetData, EarthView.World.Graphic.VertexAnimationTrack.TARGETMODE target) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valueanimType = new BasePtr(animType);
					list.Add("animType", valueanimType.PtrVal);
					BasePtr valueref_targetData = new BasePtr(ref_targetData);
					list.Add("ref_targetData", valueref_targetData.PtrVal);
					BasePtr valuetarget = new BasePtr(target);
					list.Add("target", valuetarget.PtrVal);
					Create("CVertexAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.VertexAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				/// <param name="parent">动画对象</param>
				/// <param name="handle">数字动画标识</param>
				/// <param name="animType">顶点变换动画类型</param>
				/// <param name="targetData">顶点数据对象</param>
				/// <returns></returns>
				public VertexAnimationTrack(EarthView.World.Graphic.Animation ref_parent, ushort handle, EarthView.World.Graphic.VERTEXANIMATIONTYPE animType, EarthView.World.Graphic.VertexData ref_targetData) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuehandle = new BasePtr(handle);
					list.Add("handle", valuehandle.PtrVal);
					BasePtr valueanimType = new BasePtr(animType);
					list.Add("animType", valueanimType.PtrVal);
					BasePtr valueref_targetData = new BasePtr(ref_targetData);
					list.Add("ref_targetData", valueref_targetData.PtrVal);
					Create("CVertexAnimationTrackProxy", list);
					if (!"EarthView.World.Graphic.VertexAnimationTrack".Equals(((Object)this).GetType().ToString()))
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
				private static extern int EarthView_World_Graphic_CVertexAnimationTrack_getAnimationType_VertexAnimationType(IntPtr pNativeObject);

				/// <summary>
				/// 获得顶点动画类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点动画类型</returns>
				public EarthView.World.Graphic.VERTEXANIMATIONTYPE GetAnimationType()
				{
					int ret=EarthView_World_Graphic_CVertexAnimationTrack_getAnimationType_VertexAnimationType(this.NativeObject);
					
					return (EarthView.World.Graphic.VERTEXANIMATIONTYPE)ret;
					
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
				private static extern byte EarthView_World_Graphic_CVertexAnimationTrack_getVertexAnimationIncludesNormals_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得顶点动画是否包含法向量
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点动画类型</returns>
				public bool GetVertexAnimationIncludesNormals()
				{
					byte ret=EarthView_World_Graphic_CVertexAnimationTrack_getVertexAnimationIncludesNormals_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real(double timePos);

				protected createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real m_createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建变形动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>变形动画关键帧指针</returns>
				public virtual EarthView.World.Graphic.VertexMorphKeyFrame CreateVertexMorphKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexMorphKeyFrame csObj = new EarthView.World.Graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexMorphKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.VertexMorphKeyFrame csret=CreateVertexMorphKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建变形动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>变形动画关键帧指针</returns>
				public virtual EarthView.World.Graphic.VertexMorphKeyFrame CreateVertexMorphKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexMorphKeyFrame csObj = new EarthView.World.Graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexMorphKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real(double timePos);

				protected createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real m_createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建姿态动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>姿态动画关键帧指针</returns>
				public virtual EarthView.World.Graphic.VertexPoseKeyFrame CreateVertexPoseKeyFrame_NoVirtual(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_NoVirtual(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexPoseKeyFrame csObj = new EarthView.World.Graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexPoseKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Function(double timePos)
				{
					EarthView.World.Graphic.VertexPoseKeyFrame csret=CreateVertexPoseKeyFrame(timePos);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(IntPtr pNativeObject, double timePos);

				/// <summary>
				/// 创建姿态动画关键帧
				/// </summary>
				/// <param name="timePos">时间点</param>
				/// <returns>姿态动画关键帧指针</returns>
				public virtual EarthView.World.Graphic.VertexPoseKeyFrame CreateVertexPoseKeyFrame(double timePos)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(this.NativeObject, timePos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexPoseKeyFrame csObj = new EarthView.World.Graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexPoseKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public new void GetInterpolatedKeyFrame_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pNativeObject, IntPtr timeIndex, IntPtr kf);

				/// <summary>
				/// 关键帧插值
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="kf">插值结果</param>
				/// <returns></returns>
				public override void GetInterpolatedKeyFrame(EarthView.World.Graphic.TimeIndex timeIndex, EarthView.World.Graphic.KeyFrame kf)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, object.Equals(kf, null) ? IntPtr.Zero : kf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight, double scale);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <param name="scale">动画大小变换比例</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight, double scale)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, scale);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pNativeObject, IntPtr timeIndex, double weight);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">动画轨迹影响权重</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public new void Apply_NoVirtual(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(IntPtr pNativeObject, IntPtr timeIndex);

				/// <summary>
				/// 对特定的动画帧应用动画轨迹
				/// </summary>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public override void Apply(EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(this.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList(IntPtr data, IntPtr timeIndex, double weight, IntPtr poseList);

				protected applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_NoVirtual(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex, double weight, IntPtr poseList);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="poseList">姿态集合</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData_NoVirtual(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex, double weight, EarthView.World.Graphic.PoseList poseList)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_NoVirtual(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, object.Equals(poseList, null) ? IntPtr.Zero : poseList.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Function(IntPtr data, IntPtr timeIndex, double weight, IntPtr poseList)
				{
					EarthView.World.Graphic.VertexData csobj_data = new EarthView.World.Graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_data.BindNativeObject(data,"CVertexData");
					csobj_data.Delegate = true;
					IClassFactory csobj_dataClassFactory = GlobalClassFactoryMap.Get(csobj_data.GetCppInstanceTypeName());
					if (csobj_dataClassFactory != null)
					{
						csobj_data.Delegate = true;
						csobj_data = csobj_dataClassFactory.Create() as EarthView.World.Graphic.VertexData;
						csobj_data.BindNativeObject(data, "CVertexData");
						csobj_data.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					EarthView.World.Graphic.PoseList csobj_poseList = new EarthView.World.Graphic.PoseList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_poseList.BindNativeObject(poseList,"PoseList");
					csobj_poseList.Delegate = true;
					IClassFactory csobj_poseListClassFactory = GlobalClassFactoryMap.Get(csobj_poseList.GetCppInstanceTypeName());
					if (csobj_poseListClassFactory != null)
					{
						csobj_poseList.Delegate = true;
						csobj_poseList = csobj_poseListClassFactory.Create() as EarthView.World.Graphic.PoseList;
						csobj_poseList.BindNativeObject(poseList, "PoseList");
						csobj_poseList.Delegate = true;
					}
					
					ApplyToVertexData(csobj_data, csobj_timeIndex, weight, csobj_poseList);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex, double weight, IntPtr poseList);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <param name="poseList">姿态集合</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex, double weight, EarthView.World.Graphic.PoseList poseList)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight, object.Equals(poseList, null) ? IntPtr.Zero : poseList.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real(IntPtr data, IntPtr timeIndex, double weight);

				protected applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_NoVirtual(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData_NoVirtual(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_NoVirtual(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				protected  void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Function(IntPtr data, IntPtr timeIndex, double weight)
				{
					EarthView.World.Graphic.VertexData csobj_data = new EarthView.World.Graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_data.BindNativeObject(data,"CVertexData");
					csobj_data.Delegate = true;
					IClassFactory csobj_dataClassFactory = GlobalClassFactoryMap.Get(csobj_data.GetCppInstanceTypeName());
					if (csobj_dataClassFactory != null)
					{
						csobj_data.Delegate = true;
						csobj_data = csobj_dataClassFactory.Create() as EarthView.World.Graphic.VertexData;
						csobj_data.BindNativeObject(data, "CVertexData");
						csobj_data.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToVertexData(csobj_data, csobj_timeIndex, weight);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex, double weight);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <param name="weight">权重</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex, double weight)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject, weight);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyToVertexData_CallBack_void_CVertexData_CTimeIndex(IntPtr data, IntPtr timeIndex);

				protected applyToVertexData_CallBack_void_CVertexData_CTimeIndex m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_NoVirtual(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData_NoVirtual(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_NoVirtual(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Function(IntPtr data, IntPtr timeIndex)
				{
					EarthView.World.Graphic.VertexData csobj_data = new EarthView.World.Graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_data.BindNativeObject(data,"CVertexData");
					csobj_data.Delegate = true;
					IClassFactory csobj_dataClassFactory = GlobalClassFactoryMap.Get(csobj_data.GetCppInstanceTypeName());
					if (csobj_dataClassFactory != null)
					{
						csobj_data.Delegate = true;
						csobj_data = csobj_dataClassFactory.Create() as EarthView.World.Graphic.VertexData;
						csobj_data.BindNativeObject(data, "CVertexData");
						csobj_data.Delegate = true;
					}
					EarthView.World.Graphic.TimeIndex csobj_timeIndex = new EarthView.World.Graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_timeIndex.BindNativeObject(timeIndex,"CTimeIndex");
					csobj_timeIndex.Delegate = true;
					IClassFactory csobj_timeIndexClassFactory = GlobalClassFactoryMap.Get(csobj_timeIndex.GetCppInstanceTypeName());
					if (csobj_timeIndexClassFactory != null)
					{
						csobj_timeIndex.Delegate = true;
						csobj_timeIndex = csobj_timeIndexClassFactory.Create() as EarthView.World.Graphic.TimeIndex;
						csobj_timeIndex.BindNativeObject(timeIndex, "CTimeIndex");
						csobj_timeIndex.Delegate = true;
					}
					
					ApplyToVertexData(csobj_data, csobj_timeIndex);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(IntPtr pNativeObject, IntPtr data, IntPtr timeIndex);

				/// <summary>
				/// 动画轨迹应用到特定的顶点
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <param name="timeIndex">时间索引</param>
				/// <returns></returns>
				public virtual void ApplyToVertexData(EarthView.World.Graphic.VertexData data, EarthView.World.Graphic.TimeIndex timeIndex)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, object.Equals(timeIndex, null) ? IntPtr.Zero : timeIndex.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_getVertexMorphKeyFrame_CVertexMorphKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 获得顶点变形关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns>顶点变形关键帧</returns>
				public EarthView.World.Graphic.VertexMorphKeyFrame GetVertexMorphKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_getVertexMorphKeyFrame_CVertexMorphKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexMorphKeyFrame csObj = new EarthView.World.Graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexMorphKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexMorphKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_getVertexPoseKeyFrame_CVertexPoseKeyFrame_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 获得顶点姿态关键帧
				/// </summary>
				/// <param name="index">关键帧索引</param>
				/// <returns>顶点姿态关键帧</returns>
				public EarthView.World.Graphic.VertexPoseKeyFrame GetVertexPoseKeyFrame(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_getVertexPoseKeyFrame_CVertexPoseKeyFrame_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexPoseKeyFrame csObj = new EarthView.World.Graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexPoseKeyFrame;
						csObj.BindNativeObject(__ptr, "CVertexPoseKeyFrame");
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_setAssociatedVertexData_void_CVertexData(IntPtr pNativeObject, IntPtr ref_data);

				/// <summary>
				/// 设置顶点动画轨迹相关顶点数据
				/// </summary>
				/// <param name="data">顶点数据</param>
				/// <returns></returns>
				public void SetAssociatedVertexData(EarthView.World.Graphic.VertexData ref_data)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_setAssociatedVertexData_void_CVertexData(this.NativeObject, object.Equals(ref_data, null) ? IntPtr.Zero : ref_data.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_getAssociatedVertexData_CVertexData(IntPtr pNativeObject);

				/// <summary>
				/// 获得顶点动画轨迹相关顶点数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回顶点动画轨迹相关顶点数据</returns>
				public EarthView.World.Graphic.VertexData GetAssociatedVertexData()
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_getAssociatedVertexData_CVertexData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexData csObj = new EarthView.World.Graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexData;
						csObj.BindNativeObject(__ptr, "CVertexData");
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_setTargetMode_void_TargetMode(IntPtr pNativeObject, EarthView.World.Graphic.VertexAnimationTrack.TARGETMODE m);

				/// <summary>
				/// 设置定点动画类型
				/// </summary>
				/// <param name="m">定点动画类型</param>
				/// <returns></returns>
				public void SetTargetMode(EarthView.World.Graphic.VertexAnimationTrack.TARGETMODE m)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_setTargetMode_void_TargetMode(this.NativeObject, m);
					
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
				private static extern int EarthView_World_Graphic_CVertexAnimationTrack_getTargetMode_TargetMode(IntPtr pNativeObject);

				/// <summary>
				/// 获得定点动画类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回定点动画类型</returns>
				public EarthView.World.Graphic.VertexAnimationTrack.TARGETMODE GetTargetMode()
				{
					int ret=EarthView_World_Graphic_CVertexAnimationTrack_getTargetMode_TargetMode(this.NativeObject);
					
					return (EarthView.World.Graphic.VertexAnimationTrack.TARGETMODE)ret;
					
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
				private static extern byte EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public new bool HasNonZeroKeyFrames_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断动画轨迹是否含有效帧
				/// </summary>
				/// <param name=""></param>
				/// <returns>存在返回true，否则false</returns>
				public override bool HasNonZeroKeyFrames()
				{
					byte ret=EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void Optimise_NoVirtual()
				{
					EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(IntPtr pNativeObject);

				/// <summary>
				/// 通过删除相同关键帧优化动画轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void Optimise()
				{
					EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack__clone_CVertexAnimationTrack_CAnimation(IntPtr pNativeObject, IntPtr newParent);

				/// <summary>
				/// clone顶点动画轨迹
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public EarthView.World.Graphic.VertexAnimationTrack _clone(EarthView.World.Graphic.Animation newParent)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack__clone_CVertexAnimationTrack_CAnimation(this.NativeObject, object.Equals(newParent, null) ? IntPtr.Zero : newParent.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexAnimationTrack csObj = new EarthView.World.Graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexAnimationTrack");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexAnimationTrack;
						csObj.BindNativeObject(__ptr, "CVertexAnimationTrack");
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public new void _applyBaseKeyFrame_NoVirtual(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pNativeObject, IntPtr EVbase);

				/// <summary>
				/// 应用关键帧
				/// </summary>
				/// <param name="newParent">所属动画序列</param>
				/// <returns>数字动画轨迹指针</returns>
				public override void _applyBaseKeyFrame(EarthView.World.Graphic.KeyFrame EVbase)
				{
					EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, object.Equals(EVbase, null) ? IntPtr.Zero : EVbase.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected new EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
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
				private static extern IntPtr EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 创建关键帧执行实例
				/// </summary>
				/// <param name="time">动画时间</param>
				/// <returns>关键帧对象</returns>
				protected override EarthView.World.Graphic.KeyFrame CreateKeyFrameImpl(double time)
				{
					IntPtr __ptr = EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.KeyFrame csObj = new EarthView.World.Graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CKeyFrame");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.KeyFrame;
						csObj.BindNativeObject(__ptr, "CKeyFrame");
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
				private static extern void EarthView_World_Graphic_CVertexAnimationTrack_applyPoseToVertexData_void_CPose_CVertexData_Real(IntPtr pNativeObject, IntPtr pose, IntPtr data, double influence);

				/// <summary>
				/// 将姿态数据集合应用到顶点数据产生顶点姿态动画
				/// </summary>
				/// <param name="pose">姿态数据</param>
				/// <param name="data">顶点数据</param>
				/// <param name="influence">姿态影响系数</param>
				/// <returns></returns>
				protected void ApplyPoseToVertexData(EarthView.World.Graphic.Pose pose, EarthView.World.Graphic.VertexData data, double influence)
				{
					EarthView_World_Graphic_CVertexAnimationTrack_applyPoseToVertexData_void_CPose_CVertexData_Real(this.NativeObject, object.Equals(pose, null) ? IntPtr.Zero : pose.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, influence);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadVertexAnimationTrack = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CVertexAnimationTrack", new VertexAnimationTrackClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CVertexAnimationTrackProxy", new VertexAnimationTrackClassFactory());

				public VertexAnimationTrack(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(IntPtr pObject, createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(IntPtr pObject, createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(IntPtr pObject, applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(IntPtr pObject, applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(IntPtr pObject, applyToVertexData_CallBack_void_CVertexData_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16(IntPtr pObject, getNumKeyFrames_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFrame_CallBack_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(IntPtr pObject, getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real(IntPtr pObject, createKeyFrame_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16(IntPtr pObject, removeKeyFrame_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void(IntPtr pObject, removeAllKeyFrames_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(IntPtr pObject, getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(IntPtr pObject, apply_CallBack_void_CTimeIndex_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(IntPtr pObject, apply_CallBack_void_CTimeIndex pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void(IntPtr pObject, _keyFrameDataChanged_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(IntPtr pObject, hasNonZeroKeyFrames_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(IntPtr pObject, optimise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(IntPtr pObject, _collectKeyFrameTimes_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(IntPtr pObject, _buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(IntPtr pObject, _applyBaseKeyFrame_CallBack_void_CKeyFrame pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener(IntPtr pObject, setListener_CallBack_void_CAnimationTrackListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(IntPtr pObject, createKeyFrameImpl_CallBack_CKeyFrame_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack(IntPtr pObject, populateClone_CallBack_void_CAnimationTrack pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real = EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Function;
						GC.KeepAlive(m_createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(this.NativeObject, m_createVertexMorphKeyFrame_CallBack_CVertexMorphKeyFrame_Real);
						m_createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real = EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Function;
						GC.KeepAlive(m_createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(this.NativeObject, m_createVertexPoseKeyFrame_CallBack_CVertexPoseKeyFrame_Real);
						m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList = EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Function;
						GC.KeepAlive(m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(this.NativeObject, m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real_PoseList);
						m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real = EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Function;
						GC.KeepAlive(m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(this.NativeObject, m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex_Real);
						m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex = EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Function;
						GC.KeepAlive(m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(this.NativeObject, m_applyToVertexData_CallBack_void_CVertexData_CTimeIndex);
						m_getNumKeyFrames_CallBack_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Function;
						GC.KeepAlive(m_getNumKeyFrames_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16(this.NativeObject, m_getNumKeyFrames_CallBack_ev_uint16);
						m_getKeyFrame_CallBack_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFrame_CallBack_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16);
						m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Function;
						GC.KeepAlive(m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(this.NativeObject, m_getKeyFramesAtTime_CallBack_Real_CTimeIndex_CKeyFrame_CKeyFrame);
						m_createKeyFrame_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrame_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real(this.NativeObject, m_createKeyFrame_CallBack_CKeyFrame_Real);
						m_removeKeyFrame_CallBack_void_ev_uint16 = EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Function;
						GC.KeepAlive(m_removeKeyFrame_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16(this.NativeObject, m_removeKeyFrame_CallBack_void_ev_uint16);
						m_removeAllKeyFrames_CallBack_void = EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Function;
						GC.KeepAlive(m_removeAllKeyFrames_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void(this.NativeObject, m_removeAllKeyFrames_CallBack_void);
						m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame = EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Function;
						GC.KeepAlive(m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(this.NativeObject, m_getInterpolatedKeyFrame_CallBack_void_CTimeIndex_CKeyFrame);
						m_apply_CallBack_void_CTimeIndex_Real_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real_Real);
						m_apply_CallBack_void_CTimeIndex_Real = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(this.NativeObject, m_apply_CallBack_void_CTimeIndex_Real);
						m_apply_CallBack_void_CTimeIndex = EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Function;
						GC.KeepAlive(m_apply_CallBack_void_CTimeIndex);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(this.NativeObject, m_apply_CallBack_void_CTimeIndex);
						m__keyFrameDataChanged_CallBack_void = EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Function;
						GC.KeepAlive(m__keyFrameDataChanged_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void(this.NativeObject, m__keyFrameDataChanged_CallBack_void);
						m_hasNonZeroKeyFrames_CallBack_ev_bool = EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Function;
						GC.KeepAlive(m_hasNonZeroKeyFrames_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(this.NativeObject, m_hasNonZeroKeyFrames_CallBack_ev_bool);
						m_optimise_CallBack_void = EarthView_World_Graphic_CAnimationTrack_optimise_void_Function;
						GC.KeepAlive(m_optimise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(this.NativeObject, m_optimise_CallBack_void);
						m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(this.NativeObject, m__collectKeyFrameTimes_CallBack_void_KeyFrameTimes);
						m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes = EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Function;
						GC.KeepAlive(m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(this.NativeObject, m__buildKeyFrameIndexMap_CallBack_void_KeyFrameTimes);
						m__applyBaseKeyFrame_CallBack_void_CKeyFrame = EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Function;
						GC.KeepAlive(m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(this.NativeObject, m__applyBaseKeyFrame_CallBack_void_CKeyFrame);
						m_setListener_CallBack_void_CAnimationTrackListener = EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Function;
						GC.KeepAlive(m_setListener_CallBack_void_CAnimationTrackListener);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener(this.NativeObject, m_setListener_CallBack_void_CAnimationTrackListener);
						m_createKeyFrameImpl_CallBack_CKeyFrame_Real = EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Function;
						GC.KeepAlive(m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(this.NativeObject, m_createKeyFrameImpl_CallBack_CKeyFrame_Real);
						m_populateClone_CallBack_void_CAnimationTrack = EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Function;
						GC.KeepAlive(m_populateClone_CallBack_void_CAnimationTrack);
						EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack(this.NativeObject, m_populateClone_CallBack_void_CAnimationTrack);
					}
				}
				public override ushort GetNumKeyFrames()
				{
					return base.GetNumKeyFrames_NoVirtual();
				}
				public override EarthView.World.Graphic.KeyFrame GetKeyFrame(ushort index)
				{
					return base.GetKeyFrame_NoVirtual(index);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2, IntPtr firstKeyIndex)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2,firstKeyIndex);
				}
				public override double GetKeyFramesAtTime(EarthView.World.Graphic.TimeIndex timeIndex, ref EarthView.World.Graphic.KeyFrame[] keyFrame1, ref EarthView.World.Graphic.KeyFrame[] keyFrame2)
				{
					return base.GetKeyFramesAtTime_NoVirtual(timeIndex,ref keyFrame1,ref keyFrame2);
				}
				public override EarthView.World.Graphic.KeyFrame CreateKeyFrame(double timePos)
				{
					return base.CreateKeyFrame_NoVirtual(timePos);
				}
				public override void RemoveKeyFrame(ushort index)
				{
					base.RemoveKeyFrame_NoVirtual(index);
				}
				public override void RemoveAllKeyFrames()
				{
					base.RemoveAllKeyFrames_NoVirtual();
				}
				public override void _keyFrameDataChanged()
				{
					base._keyFrameDataChanged_NoVirtual();
				}
				public override void _collectKeyFrameTimes(ref EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._collectKeyFrameTimes_NoVirtual(ref keyFrameTimes);
				}
				public override void _buildKeyFrameIndexMap(EarthView.World.Graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
				{
					base._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
				}
				public override void SetListener(EarthView.World.Graphic.AnimationTrack.AnimationTrackListener ref_l)
				{
					base.SetListener_NoVirtual(ref_l);
				}
				protected override void PopulateClone(EarthView.World.Graphic.AnimationTrack clone)
				{
					base.PopulateClone_NoVirtual(clone);
				}
				public static VertexAnimationTrack FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					VertexAnimationTrack obj = baseObj as  VertexAnimationTrack;
					if (object.Equals(obj, null))
					{
						obj = new VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CVertexAnimationTrack");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class VertexAnimationTrackClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					VertexAnimationTrack emptyInstance = new VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
