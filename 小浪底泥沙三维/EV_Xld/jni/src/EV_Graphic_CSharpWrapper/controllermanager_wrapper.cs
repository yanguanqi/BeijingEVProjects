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
			/// 控制器管理类
			/// 对控制器的一些操作，包括控制器的创建、注册、更新等
			/// </summary>
			public class ControllerManager : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认的构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ControllerManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CControllerManager",  null);
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_getSingleton_CControllerManager();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Graphic.ControllerManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_getSingleton_CControllerManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ControllerManager csObj = new EarthView.World.Graphic.ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CControllerManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ControllerManager;
						csObj.BindNativeObject(__ptr, "CControllerManager");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_getSingletonPtr_CControllerManager();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Graphic.ControllerManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_getSingletonPtr_CControllerManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ControllerManager csObj = new EarthView.World.Graphic.ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CControllerManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ControllerManager;
						csObj.BindNativeObject(__ptr, "CControllerManager");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createController_CController_ControllerValueRealPtr_ControllerValueRealPtr_ControllerFunctionRealPtr(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr func);

				/// <summary>
				/// 用控制器的管理器来建立和注册控制器
				/// </summary>
				/// <param name="src">来源值</param>
				/// <param name="dest">目标值</param>
				/// <param name="func">功能作用</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateController(EarthView.World.Graphic.ControllerValueRealPtr src, EarthView.World.Graphic.ControllerValueRealPtr dest, EarthView.World.Graphic.ControllerFunctionRealPtr func)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createController_CController_ControllerValueRealPtr_ControllerValueRealPtr_ControllerFunctionRealPtr(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(func, null) ? IntPtr.Zero : func.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createFrameTimePassthroughController_CController_ControllerValueRealPtr(IntPtr pNativeObject, IntPtr dest);

				/// <summary>
				/// 建立一个时间帧的控制器
				/// </summary>
				/// <param name="dest">目标值</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateFrameTimePassthroughController(EarthView.World.Graphic.ControllerValueRealPtr dest)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createFrameTimePassthroughController_CController_ControllerValueRealPtr(this.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern void EarthView_World_Graphic_CControllerManager_clearControllers_void(IntPtr pNativeObject);

				/// <summary>
				/// 去除所有存在的控制器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ClearControllers()
				{
					EarthView_World_Graphic_CControllerManager_clearControllers_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CControllerManager_updateAllControllers_void(IntPtr pNativeObject);

				/// <summary>
				/// 更新所有注册的控制器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void UpdateAllControllers()
				{
					EarthView_World_Graphic_CControllerManager_updateAllControllers_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_getFrameTimeSource_ControllerValueRealPtr(IntPtr pNativeObject);

				/// <summary>
				/// 将最后一个时间帧作为控制值的来源
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回控制值</returns>
				public EarthView.World.Graphic.ControllerValueRealPtr GetFrameTimeSource()
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_getFrameTimeSource_ControllerValueRealPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ControllerValueRealPtr csObj = new EarthView.World.Graphic.ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ControllerValueRealPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ControllerValueRealPtr;
						csObj.BindNativeObject(__ptr, "ControllerValueRealPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_getPassthroughControllerFunction_ControllerFunctionRealPtr(IntPtr pNativeObject);

				/// <summary>
				/// 检索一个控制器的功能
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回控制功能的引用</returns>
				public EarthView.World.Graphic.ControllerFunctionRealPtr GetPassthroughControllerFunction()
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_getPassthroughControllerFunction_ControllerFunctionRealPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ControllerFunctionRealPtr csObj = new EarthView.World.Graphic.ControllerFunctionRealPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ControllerFunctionRealPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ControllerFunctionRealPtr;
						csObj.BindNativeObject(__ptr, "ControllerFunctionRealPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureAnimator_CController_CTextureUnitState_Real(IntPtr pNativeObject, IntPtr ref_layer, double sequenceTime);

				/// <summary>
				/// 建立一个滚动纹理的控制器
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="sequenceTime">时间帧</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureAnimator(EarthView.World.Graphic.TextureUnitState ref_layer, double sequenceTime)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureAnimator_CController_CTextureUnitState_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, sequenceTime);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureUVScroller_CController_CTextureUnitState_Real(IntPtr pNativeObject, IntPtr ref_layer, double speed);

				/// <summary>
				/// 建立一个滚动纹理的控制器，是建立在水平和竖直方向上的
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="speed">变动的速度</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureUVScroller(EarthView.World.Graphic.TextureUnitState ref_layer, double speed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureUVScroller_CController_CTextureUnitState_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, speed);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureUScroller_CController_CTextureUnitState_Real(IntPtr pNativeObject, IntPtr ref_layer, double uSpeed);

				/// <summary>
				/// 建立一个滚动纹理的控制器，是建立在水平面上的
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="uspeed">水平变动的速度</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureUScroller(EarthView.World.Graphic.TextureUnitState ref_layer, double uSpeed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureUScroller_CController_CTextureUnitState_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, uSpeed);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureVScroller_CController_CTextureUnitState_Real(IntPtr pNativeObject, IntPtr ref_layer, double vSpeed);

				/// <summary>
				/// 建立一个滚动纹理的控制器，是建立在垂直面上的
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="uspeed">垂直变动的速度</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureVScroller(EarthView.World.Graphic.TextureUnitState ref_layer, double vSpeed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureVScroller_CController_CTextureUnitState_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, vSpeed);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureRotater_CController_CTextureUnitState_Real(IntPtr pNativeObject, IntPtr ref_layer, double speed);

				/// <summary>
				/// 建立一个旋转纹理的控制器
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="speed">变动的速度</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureRotater(EarthView.World.Graphic.TextureUnitState ref_layer, double speed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureRotater_CController_CTextureUnitState_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, speed);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType(IntPtr pNativeObject, IntPtr ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType);

				/// <summary>
				/// 建立基于时间的灵活纹理变换
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="ttype">变换类型</param>
				/// <param name="waveType">变换波形类型</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureWaveTransformer(EarthView.World.Graphic.TextureUnitState ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, ttype, waveType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real(IntPtr pNativeObject, IntPtr ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase);

				/// <summary>
				/// 建立基于时间的灵活纹理变换
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="ttype">变换类型</param>
				/// <param name="waveType">变换波形类型</param>
				/// <param name="base">输出的基本值</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureWaveTransformer(EarthView.World.Graphic.TextureUnitState ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, ttype, waveType, EVbase);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real(IntPtr pNativeObject, IntPtr ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency);

				/// <summary>
				/// 建立基于时间的灵活纹理变换
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="ttype">变换类型</param>
				/// <param name="waveType">变换波形类型</param>
				/// <param name="base">输出的基本值</param>
				/// <param name="frequency">频数</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureWaveTransformer(EarthView.World.Graphic.TextureUnitState ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, ttype, waveType, EVbase, frequency);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real(IntPtr pNativeObject, IntPtr ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency, double phase);

				/// <summary>
				/// 建立基于时间的灵活纹理变换
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="ttype">变换类型</param>
				/// <param name="waveType">变换波形类型</param>
				/// <param name="base">输出的基本值</param>
				/// <param name="frequency">频数</param>
				/// <param name="phase">波形起始的偏移</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureWaveTransformer(EarthView.World.Graphic.TextureUnitState ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency, double phase)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, ttype, waveType, EVbase, frequency, phase);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real_Real(IntPtr pNativeObject, IntPtr ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency, double phase, double amplitude);

				/// <summary>
				/// 建立基于时间的灵活纹理变换
				/// </summary>
				/// <param name="layer">纹理层</param>
				/// <param name="ttype">变换类型</param>
				/// <param name="waveType">变换波形类型</param>
				/// <param name="base">输出的基本值</param>
				/// <param name="frequency">频数</param>
				/// <param name="phase">波形起始的偏移</param>
				/// <param name="amplitude">振幅</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateTextureWaveTransformer(EarthView.World.Graphic.TextureUnitState ref_layer, EarthView.World.Graphic.TextureUnitState.TEXTURETRANSFORMTYPE ttype, EarthView.World.Graphic.WAVEFORMTYPE waveType, double EVbase, double frequency, double phase, double amplitude)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createTextureWaveTransformer_CController_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real_Real(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject, ttype, waveType, EVbase, frequency, phase, amplitude);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t(IntPtr pNativeObject, IntPtr EVparams, ulong paramIndex);

				/// <summary>
				/// 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
				/// </summary>
				/// <param name="params">参数</param>
				/// <param name="paramIndex">需要更新的参数索引</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateGpuProgramTimerParam(EarthView.World.Graphic.GpuProgramParametersSharedPtr EVparams, ulong paramIndex)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t(this.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, paramIndex);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern IntPtr EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t_Real(IntPtr pNativeObject, IntPtr EVparams, ulong paramIndex, double timeFactor);

				/// <summary>
				/// 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
				/// </summary>
				/// <param name="params">参数</param>
				/// <param name="paramIndex">需要更新的参数索引</param>
				/// <param name="timeFactor">时间调整的长度</param>
				/// <returns>返回指向控制器的指针</returns>
				public EarthView.World.Graphic.Controller CreateGpuProgramTimerParam(EarthView.World.Graphic.GpuProgramParametersSharedPtr EVparams, ulong paramIndex, double timeFactor)
				{
					IntPtr __ptr = EarthView_World_Graphic_CControllerManager_createGpuProgramTimerParam_CController_GpuProgramParametersSharedPtr_ev_size_t_Real(this.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, paramIndex, timeFactor);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Controller csObj = new EarthView.World.Graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CController");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Controller;
						csObj.BindNativeObject(__ptr, "CController");
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
				private static extern void EarthView_World_Graphic_CControllerManager_destroyController_void_CController(IntPtr pNativeObject, IntPtr controller);

				/// <summary>
				/// 删除指定的控制器
				/// </summary>
				/// <param name="controller">指向需要删除的控制器的指针</param>
				/// <returns></returns>
				public void DestroyController(EarthView.World.Graphic.Controller controller)
				{
					EarthView_World_Graphic_CControllerManager_destroyController_void_CController(this.NativeObject, object.Equals(controller, null) ? IntPtr.Zero : controller.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CControllerManager_getTimeFactor_Real(IntPtr pNativeObject);

				/// <summary>
				/// 得到时间的相关速度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回速度</returns>
				public double GetTimeFactor()
				{
					double ret=EarthView_World_Graphic_CControllerManager_getTimeFactor_Real(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CControllerManager_setTimeFactor_void_Real(IntPtr pNativeObject, double tf);

				/// <summary>
				/// 设置速度来更新控制器的时间帧
				/// </summary>
				/// <param name="tf">速度（并不是真的时间速度，1.0是真实的时间）</param>
				/// <returns></returns>
				public void SetTimeFactor(double tf)
				{
					EarthView_World_Graphic_CControllerManager_setTimeFactor_void_Real(this.NativeObject, tf);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CControllerManager_getFrameDelay_Real(IntPtr pNativeObject);

				/// <summary>
				/// 得到帧之间的时间差
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回时间差</returns>
				public double GetFrameDelay()
				{
					double ret=EarthView_World_Graphic_CControllerManager_getFrameDelay_Real(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CControllerManager_setFrameDelay_void_Real(IntPtr pNativeObject, double fd);

				/// <summary>
				/// 设置帧的速率
				/// </summary>
				/// <param name="fd">速率（1.0f / 25.0f意思就是1秒钟播放25帧的动画）</param>
				/// <returns></returns>
				public void SetFrameDelay(double fd)
				{
					EarthView_World_Graphic_CControllerManager_setFrameDelay_void_Real(this.NativeObject, fd);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CControllerManager_getElapsedTime_Real(IntPtr pNativeObject);

				/// <summary>
				/// 得到已经过去的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回过去的时间</returns>
				public double GetElapsedTime()
				{
					double ret=EarthView_World_Graphic_CControllerManager_getElapsedTime_Real(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CControllerManager_setElapsedTime_void_Real(IntPtr pNativeObject, double elapsedTime);

				/// <summary>
				/// 设置已经过去的时间
				/// </summary>
				/// <param name="elapsedTime">已经过去的时间</param>
				/// <returns></returns>
				public void SetElapsedTime(double elapsedTime)
				{
					EarthView_World_Graphic_CControllerManager_setElapsedTime_void_Real(this.NativeObject, elapsedTime);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadControllerManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadControllerManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CControllerManager", new ControllerManagerClassFactory());

				public ControllerManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ControllerManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ControllerManager obj = baseObj as  ControllerManager;
					if (object.Equals(obj, null))
					{
						obj = new ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CControllerManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ControllerManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ControllerManager emptyInstance = new ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
