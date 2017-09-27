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
		namespace Spatial3D
		{
			/// <summary>
			///节点动画类(以经纬度作为控制点)
			/// </summary>
			public class GlobeNodeTrackAnimation : EarthView.World.Spatial3D.TrackAnimation
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <returns></returns>
				public GlobeNodeTrackAnimation(string name, EarthView.World.Graphic.SceneManager ref_sceneManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_sceneManager = new BasePtr(ref_sceneManager);
					list.Add("ref_sceneManager", valueref_sceneManager.PtrVal);
					Create("CGlobeNodeTrackAnimationProxy", list);
					if (!"EarthView.World.Spatial3D.GlobeNodeTrackAnimation".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_NoVirtual(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 创建动画
				/// </summary>
				/// <param name="ref_node">动画作用的节点。</param>
				/// <returns></returns>
				public new void CreateAnimation_NoVirtual(EarthView.World.Graphic.SceneNode ref_node)
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_NoVirtual(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(IntPtr pNativeObject, IntPtr ref_node);

				/// <summary>
				/// 创建动画
				/// </summary>
				/// <param name="ref_node">动画作用的节点。</param>
				/// <returns></returns>
				public override void CreateAnimation(EarthView.World.Graphic.SceneNode ref_node)
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 销毁动画
				/// </summary>
				/// <returns></returns>
				public new void DestoryAnimation_NoVirtual()
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 销毁动画
				/// </summary>
				/// <returns></returns>
				public override void DestoryAnimation()
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_setNodeUpAxis_void_EVString(IntPtr pNativeObject, string upAxis);

				/// <summary>
				/// 设置模型的上方向
				/// </summary>
				/// <param name="upAxis">上方向的名字，x轴为XAxis ,y轴为YAxis,z轴为ZAxis</param>
				/// <returns></returns>
				public void SetNodeUpAxis(string upAxis)
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_setNodeUpAxis_void_EVString(this.NativeObject, upAxis);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getNodeUpAxis_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 返回模型的上方向
				/// </summary>
				/// <returns></returns>
				public string GetNodeUpAxis()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getNodeUpAxis_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getPosition_CVector3(IntPtr pNativeObject);

				///void setNodeRightAxis(_in const EarthView::World::Spatial::Math::CVector3& rightAxis);
				//// <summary>
				//// 获取位置
				//// </summary>
				//// <returns></returns>
				public EarthView.World.Spatial.Math.Vector3 GetPosition()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getPosition_CVector3(this.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getHeading_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取偏航角
				/// </summary>
				/// <returns></returns>
				public double GetHeading()
				{
					double ret=EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_getHeading_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_insertGlobePoint_void_ev_real64_CGlobeControlPoint(IntPtr pNativeObject, double time, IntPtr globeControlPoint);

				/// <summary>
				/// 增加控制点
				/// </summary>
				/// <param name="time">时间</param>
				/// <param name="globeControlPoint">控制点</param>
				/// <returns></returns>
				public void InsertGlobePoint(double time, EarthView.World.Spatial3D.GlobeControlPoint globeControlPoint)
				{
					EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_insertGlobePoint_void_ev_real64_CGlobeControlPoint(this.NativeObject, time, object.Equals(globeControlPoint, null) ? IntPtr.Zero : globeControlPoint.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadGlobeNodeTrackAnimation = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeNodeTrackAnimation", new GlobeNodeTrackAnimationClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeNodeTrackAnimationProxy", new GlobeNodeTrackAnimationClassFactory());

				public GlobeNodeTrackAnimation(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(IntPtr pObject, createAnimation_CallBack_void_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(IntPtr pObject, destoryAnimation_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createAnimation_CallBack_void_CSceneNode = EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Function;
						GC.KeepAlive(m_createAnimation_CallBack_void_CSceneNode);
						EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(this.NativeObject, m_createAnimation_CallBack_void_CSceneNode);
						m_destoryAnimation_CallBack_void = EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Function;
						GC.KeepAlive(m_destoryAnimation_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_destoryAnimation_void(this.NativeObject, m_destoryAnimation_CallBack_void);
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
					}
				}
				public override bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameStarted_NoVirtual(ref evt);
				}
				public override bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameRenderingQueued_NoVirtual(ref evt);
				}
				public override bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameEnded_NoVirtual(ref evt);
				}
				public static GlobeNodeTrackAnimation FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GlobeNodeTrackAnimation obj = baseObj as  GlobeNodeTrackAnimation;
					if (object.Equals(obj, null))
					{
						obj = new GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGlobeNodeTrackAnimation");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GlobeNodeTrackAnimationClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GlobeNodeTrackAnimation emptyInstance = new GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			///节点动画类的智能指针
			/// </summary>
			public class GlobeNodeTrackAnimationPtr : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public GlobeNodeTrackAnimationPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGlobeNodeTrackAnimationPtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public GlobeNodeTrackAnimationPtr(EarthView.World.Spatial3D.GlobeNodeTrackAnimation rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuerep = new BasePtr(rep);
					list.Add("rep", valuerep.PtrVal);
					if(!object.Equals(rep, null))
					{
					rep.NoFree = true;
					}
					Create("CGlobeNodeTrackAnimationPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public GlobeNodeTrackAnimationPtr(EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetp = new BasePtr(tp);
					list.Add("tp", valuetp.PtrVal);
					Create("CGlobeNodeTrackAnimationPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_get_CGlobeNodeTrackAnimation(IntPtr pNativeObject);

				public EarthView.World.Spatial3D.GlobeNodeTrackAnimation Get()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_get_CGlobeNodeTrackAnimation(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeNodeTrackAnimation csObj = new EarthView.World.Spatial3D.GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeNodeTrackAnimation");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeNodeTrackAnimation;
						csObj.BindNativeObject(__ptr, "CGlobeNodeTrackAnimation");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_OperatorAssign_CGlobeNodeTrackAnimationPtr_CGlobeNodeTrackAnimationPtr(IntPtr pNativeObject, IntPtr r);

				public EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr OperatorAssign(EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr r)
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CGlobeNodeTrackAnimationPtr_OperatorAssign_CGlobeNodeTrackAnimationPtr_CGlobeNodeTrackAnimationPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
					
					EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr csObj = new EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeNodeTrackAnimationPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeNodeTrackAnimationPtr;
						csObj.BindNativeObject(__ptr, "CGlobeNodeTrackAnimationPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadGlobeNodeTrackAnimationPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr", new GlobeNodeTrackAnimationPtrClassFactory());

				public GlobeNodeTrackAnimationPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static GlobeNodeTrackAnimationPtr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GlobeNodeTrackAnimationPtr obj = baseObj as  GlobeNodeTrackAnimationPtr;
					if (object.Equals(obj, null))
					{
						obj = new GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGlobeNodeTrackAnimationPtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GlobeNodeTrackAnimationPtrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GlobeNodeTrackAnimationPtr emptyInstance = new GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
