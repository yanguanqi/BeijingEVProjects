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
			/// 线特征管理类，用于管理与渲染不同风格的线特征对象
			/// </summary>
			public class PolylineFeatureManager : EarthView.IndustryEngine.IndustryGraphic.BaseBandingObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_pSceneManager">场景管理对象</param>
				public PolylineFeatureManager(string name, EarthView.World.Graphic.SceneManager ref_pSceneManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_pSceneManager = new BasePtr(ref_pSceneManager);
					list.Add("ref_pSceneManager", valueref_pSceneManager.PtrVal);
					Create("CPolylineFeatureManagerProxy", list);
					if (!"EarthView.IndustryEngine.IndustryGraphic.PolylineFeatureManager".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeature_CPolylineFeature_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>线特征对象</returns>
				public EarthView.IndustryEngine.IndustryGraphic.PolylineFeature GetPolylineFeature(int polylineFeatureUniqueID)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeature_CPolylineFeature_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.IndustryGraphic.PolylineFeature csObj = new EarthView.IndustryEngine.IndustryGraphic.PolylineFeature(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPolylineFeature");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.PolylineFeature;
						csObj.BindNativeObject(__ptr, "CPolylineFeature");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPolylineFeature_void_CPolylineFeature_ev_bool(IntPtr pNativeObject, IntPtr ref_polylineFeature, ref bool needUpdate);

				/// <summary>
				/// 添加线特征对象
				/// </summary>
				/// <param name="ref_polylineFeature">线特征对象(与线特征管理对象的生命周期保持一致)</param>
				/// <param name="needUpdate">是否需要刷新</param>
				public void AddPolylineFeature(EarthView.IndustryEngine.IndustryGraphic.PolylineFeature ref_polylineFeature, bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPolylineFeature_void_CPolylineFeature_ev_bool(this.NativeObject, object.Equals(ref_polylineFeature, null) ? IntPtr.Zero : ref_polylineFeature.NativeObject, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_CPolylineFeature_ev_bool(IntPtr pNativeObject, IntPtr polylineFeature, ref bool needUpdate);

				/// <summary>
				/// 移除线特征对象
				/// </summary>
				/// <param name="polylineFeature">线特征对象</param>
				/// <param name="needUpdate">是否需要刷新</param>
				public void RemovePolylineFeature(EarthView.IndustryEngine.IndustryGraphic.PolylineFeature polylineFeature, bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_CPolylineFeature_ev_bool(this.NativeObject, object.Equals(polylineFeature, null) ? IntPtr.Zero : polylineFeature.NativeObject, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeaturePoints_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool needUpdate);

				/// <summary>
				/// 移除线特征对象中所有的点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="needUpdate">是否需要刷新</param>
				public void RemovePolylineFeaturePoints(int polylineFeatureUniqueID, bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeaturePoints_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool needUpdate);

				/// <summary>
				/// 移除线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="needUpdate">是否需要刷新</param>
				public void RemovePolylineFeature(int polylineFeatureUniqueID, bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_removePolylineFeature_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref needUpdate);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_contain_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 判断是否包含唯一标示的线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否包含线特征对象</returns>
				public bool Contain(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_contain_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool(ref int polylineFeatureUniqueID, ref byte value);

				protected setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool m_setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool;

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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool value);

				/// <summary>
				/// 设置唯一标示的线特征对象的显示状态
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否可见</param>
				public virtual void SetPolylineFeatureVisible_NoVirtual(int polylineFeatureUniqueID, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID, ref value);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Function(ref int polylineFeatureUniqueID, ref byte value)
				{
					bool valueBool = Convert.ToBoolean(value);
					
					SetPolylineFeatureVisible(polylineFeatureUniqueID, valueBool);
					
					value = Convert.ToByte(valueBool);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool value);

				/// <summary>
				/// 设置唯一标示的线特征对象的显示状态
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否可见</param>
				public virtual void SetPolylineFeatureVisible(int polylineFeatureUniqueID, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref value);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureVisible_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的显示状态
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示状态</returns>
				public bool GetPolylineFeatureVisible(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureVisible_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setNeedClearUselessData_CallBack_void_ev_int32_ev_bool(ref int polylineFeatureUniqueID, ref byte value);

				protected setNeedClearUselessData_CallBack_void_ev_int32_ev_bool m_setNeedClearUselessData_CallBack_void_ev_int32_ev_bool;

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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool value);

				/// <summary>
				/// 设置唯一标示的线特征对象是否清除冗余点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否清除冗余点</param>
				public virtual void SetNeedClearUselessData_NoVirtual(int polylineFeatureUniqueID, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID, ref value);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Function(ref int polylineFeatureUniqueID, ref byte value)
				{
					bool valueBool = Convert.ToBoolean(value);
					
					SetNeedClearUselessData(polylineFeatureUniqueID, valueBool);
					
					value = Convert.ToByte(valueBool);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool value);

				/// <summary>
				/// 设置唯一标示的线特征对象是否清除冗余点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否清除冗余点</param>
				public virtual void SetNeedClearUselessData(int polylineFeatureUniqueID, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref value);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedClearUselessData_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的的是否清除冗余点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否清除冗余点</returns>
				public bool GetNeedClearUselessData(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedClearUselessData_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDescription_void_ev_int32_EVString(IntPtr pNativeObject, ref int polylineFeatureUniqueID, string description);

				/// <summary>
				/// 设置唯一标示的线特征对象的描述信息
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="description">描述信息</param>
				public void SetDescription(int polylineFeatureUniqueID, string description)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDescription_void_ev_int32_EVString(this.NativeObject, ref polylineFeatureUniqueID, description);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

				/// <summary>
				/// 统一设置线特征对象的显示状态
				/// </summary>
				/// <param name="value">是否可见</param>
				public void SetUniformVisible(bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformVisible_void_ev_bool(this.NativeObject, ref value);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformPolylineFeatureSymbol_void_ISymbol_EVDisplayMode(IntPtr pNativeObject, IntPtr ref_uniformSymbol, ref EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode);

				/// <summary>
				/// 统一设置相应显示模式的线特征对象的显示风格
				/// </summary>
				/// <param name="ref_uniformSymbol">显示风格(与线特征管理对象的生命周期保持一致)</param>
				/// <param name="displayMode">显示模式</param>
				public void SetUniformPolylineFeatureSymbol(EarthView.World.Spatial.Display.Isymbol ref_uniformSymbol, EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformPolylineFeatureSymbol_void_ISymbol_EVDisplayMode(this.NativeObject, object.Equals(ref_uniformSymbol, null) ? IntPtr.Zero : ref_uniformSymbol.NativeObject, ref displayMode);
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformPolylineFeatureSymbol_ISymbol_EVDisplayMode(IntPtr pNativeObject, ref EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode);

				/// <summary>
				/// 获取线特征对象的统一显示风格
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				public EarthView.World.Spatial.Display.Isymbol GetUniformPolylineFeatureSymbol(EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformPolylineFeatureSymbol_ISymbol_EVDisplayMode(this.NativeObject, ref displayMode);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPoint_void_ev_int32_CCoordinate_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr point, ref bool needUpdate);

				/// <summary>
				/// 为唯一标示的线特征对象添加点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="point">点坐标</param>
				/// <param name="needUpdate">是否需要更新</param>
				public void AddPoint(int polylineFeatureUniqueID, EarthView.World.Spatial.Geometry.Coordinate point, bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_addPoint_void_ev_int32_CCoordinate_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureSymbol_void_ev_int32_ISymbol(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr polylineFeatureSymbol);

				/// <summary>
				/// 设置唯一标示的线特征对象的显示风格
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="polylineFeatureSymbol">显示风格(内部进行clone)</param>
				public void SetPolylineFeatureSymbol(int polylineFeatureUniqueID, EarthView.World.Spatial.Display.Isymbol polylineFeatureSymbol)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureSymbol_void_ev_int32_ISymbol(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(polylineFeatureSymbol, null) ? IntPtr.Zero : polylineFeatureSymbol.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setIsPolylineFeatureHighLine_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool value);

				/// <summary>
				/// 设置唯一标示的线特征对象的是否以视高线风格显示
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否为视高线</param>
				public void SetIsPolylineFeatureHighLine(int polylineFeatureUniqueID, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setIsPolylineFeatureHighLine_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref value);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getIsPolylineFeatureHighLine_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的是否以视高线风格显示
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否为视高线</returns>
				public bool GetIsPolylineFeatureHighLine(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getIsPolylineFeatureHighLine_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayStrategyForPointMode_void_ev_int32(IntPtr pNativeObject, ref int strategyValue);

				/// <summary>
				/// 设置线特征对象以点模式显示(非图片方式显示的点)时的显示策略
				/// </summary>
				/// <param name="strategyValue">策略值</param>
				public void SetDisplayStrategyForPointMode(int strategyValue)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayStrategyForPointMode_void_ev_int32(this.NativeObject, ref strategyValue);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayStrategyForPointMode_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取线特征对象以点模式显示(非图片方式显示的点)时的显示策略
				/// </summary>
				/// <returns>策略值</returns>
				public int GetDisplayStrategyForPointMode()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayStrategyForPointMode_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineColorInfo_void_ev_int32_CRgbColor_CRgbColor(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr staticHighLineColor, IntPtr dynamicHighLineColor);

				/// <summary>
				/// 设置唯一标示的线特征对象的视高线显示颜色
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				public void SetHighLineColorInfo(int polylineFeatureUniqueID, EarthView.World.Spatial.Display.RgbColor staticHighLineColor, EarthView.World.Spatial.Display.RgbColor dynamicHighLineColor)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineColorInfo_void_ev_int32_CRgbColor_CRgbColor(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(staticHighLineColor, null) ? IntPtr.Zero : staticHighLineColor.NativeObject, object.Equals(dynamicHighLineColor, null) ? IntPtr.Zero : dynamicHighLineColor.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineDistance_void_ev_int32_ev_real64(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref double highLineDistance);

				/// <summary>
				/// 设置唯一标示的线特征对象的视高线间距
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="highLineDistance">间距</param>
				public void SetHighLineDistance(int polylineFeatureUniqueID, double highLineDistance)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setHighLineDistance_void_ev_int32_ev_real64(this.NativeObject, ref polylineFeatureUniqueID, ref highLineDistance);
					
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
				private static extern double EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getHighLineDistance_Real_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的视高线间距
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>视高线间距</returns>
				public double GetHighLineDistance(int polylineFeatureUniqueID)
				{
					double ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getHighLineDistance_Real_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return ret;
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureSymbol_ISymbol_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的显示风格
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示风格</returns>
				public EarthView.World.Spatial.Display.Isymbol GetPolylineFeatureSymbol(int polylineFeatureUniqueID)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureSymbol_ISymbol_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayMode_void_EVDisplayMode_ISymbol(IntPtr pNativeObject, ref EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode, IntPtr uniformSymbol);

				/// <summary>
				/// 统一设置显示模式
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				/// <param name="uniformSymbol">与显示模式对应的风格(内部进行clone)</param>
				public void SetUniformDisplayMode(EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode, EarthView.World.Spatial.Display.Isymbol uniformSymbol)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayMode_void_EVDisplayMode_ISymbol(this.NativeObject, ref displayMode, object.Equals(uniformSymbol, null) ? IntPtr.Zero : uniformSymbol.NativeObject);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayMode_EVDisplayMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取统一的显示模式
				/// </summary>
				/// <returns>显示模式</returns>
				public EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE GetUniformDisplayMode()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayMode_EVDisplayMode(this.NativeObject);
					
					return (EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE)ret;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayMode_void_ev_int32_EVDisplayMode(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode);

				/// <summary>
				/// 设置唯一标示的线特征对象的显示模式
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="displayMode">显示模式</param>
				public void SetDisplayMode(int polylineFeatureUniqueID, EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayMode_void_ev_int32_EVDisplayMode(this.NativeObject, ref polylineFeatureUniqueID, ref displayMode);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayMode_EVDisplayMode_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的显示模式
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示模式</returns>
				public EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE GetDisplayMode(int polylineFeatureUniqueID)
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayMode_EVDisplayMode_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return (EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE)ret;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setISpatialReference_void_ev_int32_ISpatialReference(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr ref_iSpatialReference);

				/// <summary>
				/// 设置唯一标示的线特征对象的空间参考
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="ref_iSpatialReference">空间参考(与线特征管理对象的生命周期保持一致)</param>
				public void SetISpatialReference(int polylineFeatureUniqueID, EarthView.World.Spatial.Geometry.Ispatialreference ref_iSpatialReference)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setISpatialReference_void_ev_int32_ISpatialReference(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(ref_iSpatialReference, null) ? IntPtr.Zero : ref_iSpatialReference.NativeObject);
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getISpatialReference_ISpatialReference_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的空间参考
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>空间参考</returns>
				public EarthView.World.Spatial.Geometry.Ispatialreference GetISpatialReference(int polylineFeatureUniqueID)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getISpatialReference_ISpatialReference_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformISpatialReference_void_ISpatialReference(IntPtr pNativeObject, IntPtr ref_uniformSpatialReference);

				/// <summary>
				/// 统一设置空间参考
				/// </summary>
				/// <param name="ref_uniformSpatialReference">空间参考(与线特征管理对象的生命周期保持一致)</param>
				public void SetUniformISpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference ref_uniformSpatialReference)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformISpatialReference_void_ISpatialReference(this.NativeObject, object.Equals(ref_uniformSpatialReference, null) ? IntPtr.Zero : ref_uniformSpatialReference.NativeObject);
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformISpatialReference_ISpatialReference(IntPtr pNativeObject);

				/// <summary>
				/// 获取统一的空间参考
				/// </summary>
				/// <returns>空间参考</returns>
				public EarthView.World.Spatial.Geometry.Ispatialreference GetUniformISpatialReference()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformISpatialReference_ISpatialReference(this.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayPointNum_void_ev_int32_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref int displayPointNum);

				/// <summary>
				///设置唯一标示的线特征对象的点显示数目
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="displayPointNum">显示数目</param>
				public void SetDisplayPointNum(int polylineFeatureUniqueID, int displayPointNum)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setDisplayPointNum_void_ev_int32_ev_int32(this.NativeObject, ref polylineFeatureUniqueID, ref displayPointNum);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayPointNum_ev_int32_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///获取唯一标示的线特征对象的显示数目
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>线特征对象的显示数目</returns>
				public int GetDisplayPointNum(int polylineFeatureUniqueID)
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getDisplayPointNum_ev_int32_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return ret;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayPointNum_void_ev_int32(IntPtr pNativeObject, ref int displayPointNum);

				/// <summary>
				///统一设置点显示数目
				/// </summary>
				/// <param name="displayPointNum">显示数目</param>
				public void SetUniformDisplayPointNum(int displayPointNum)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUniformDisplayPointNum_void_ev_int32(this.NativeObject, ref displayPointNum);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayPointNum_ev_int32(IntPtr pNativeObject);

				/// <summary>
				///获取统一的点显示数目
				/// </summary>
				/// <returns>点显示数目</returns>
				public int GetUniformDisplayPointNum()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUniformDisplayPointNum_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureCount_ev_int32(IntPtr pNativeObject);

				/// <summary>
				///获取当前线特征对象的数目
				/// </summary>
				/// <returns>当前线特征对象的数目</returns>
				public int GetPolylineFeatureCount()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getPolylineFeatureCount_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setSegmentRenderParameter_void_ev_int32(IntPtr pNativeObject, ref int perSegmentVertexCount);

				/// <summary>
				///设置分段渲染参数，启用分段才有效
				/// </summary>
				/// <param name="perSegmentVertexCount">每个片段顶点个数(大于等于20)</param>
				public void SetSegmentRenderParameter(int perSegmentVertexCount)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setSegmentRenderParameter_void_ev_int32(this.NativeObject, ref perSegmentVertexCount);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getUseWallGradualColor_CallBack_ev_bool_ev_int32(ref int polylineFeatureUniqueID);

				protected getUseWallGradualColor_CallBack_ev_bool_ev_int32 m_getUseWallGradualColor_CallBack_ev_bool_ev_int32;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///获取当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否使用渐变颜色</returns>
				public virtual bool GetUseWallGradualColor_NoVirtual(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Function(ref int polylineFeatureUniqueID)
				{
					bool csret=GetUseWallGradualColor(polylineFeatureUniqueID);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///获取当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否使用渐变颜色</returns>
				public virtual bool GetUseWallGradualColor(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setUseWallGradualColor_CallBack_void_ev_int32_ev_bool(ref int polylineFeatureUniqueID, ref byte useWallGradualColor);

				protected setUseWallGradualColor_CallBack_void_ev_int32_ev_bool m_setUseWallGradualColor_CallBack_void_ev_int32_ev_bool;

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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool useWallGradualColor);

				/// <summary>
				///设置当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="useWallGradualColor">否使用渐变颜色</param>
				public virtual void SetUseWallGradualColor_NoVirtual(int polylineFeatureUniqueID, bool useWallGradualColor)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID, ref useWallGradualColor);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Function(ref int polylineFeatureUniqueID, ref byte useWallGradualColor)
				{
					bool useWallGradualColorBool = Convert.ToBoolean(useWallGradualColor);
					
					SetUseWallGradualColor(polylineFeatureUniqueID, useWallGradualColorBool);
					
					useWallGradualColor = Convert.ToByte(useWallGradualColorBool);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(IntPtr pNativeObject, ref int polylineFeatureUniqueID, ref bool useWallGradualColor);

				/// <summary>
				///设置当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="useWallGradualColor">否使用渐变颜色</param>
				public virtual void SetUseWallGradualColor(int polylineFeatureUniqueID, bool useWallGradualColor)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(this.NativeObject, ref polylineFeatureUniqueID, ref useWallGradualColor);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getWallGradualColor_CallBack_CRgbColor_ev_int32(ref int polylineFeatureUniqueID);

				protected getWallGradualColor_CallBack_CRgbColor_ev_int32 m_getWallGradualColor_CallBack_CRgbColor_ev_int32;

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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///获取当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>渐变颜色</returns>
				public virtual EarthView.World.Spatial.Display.RgbColor GetWallGradualColor_NoVirtual(int polylineFeatureUniqueID)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Display.RgbColor csObj = new EarthView.World.Spatial.Display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRgbColor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.RgbColor;
						csObj.BindNativeObject(__ptr, "CRgbColor");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Function(ref int polylineFeatureUniqueID)
				{
					EarthView.World.Spatial.Display.RgbColor csret=GetWallGradualColor(polylineFeatureUniqueID);
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///获取当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>渐变颜色</returns>
				public virtual EarthView.World.Spatial.Display.RgbColor GetWallGradualColor(int polylineFeatureUniqueID)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Display.RgbColor csObj = new EarthView.World.Spatial.Display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRgbColor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.RgbColor;
						csObj.BindNativeObject(__ptr, "CRgbColor");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setWallGradualColor_CallBack_void_ev_int32_CRgbColor(ref int polylineFeatureUniqueID, IntPtr pWallGradualColor);

				protected setWallGradualColor_CallBack_void_ev_int32_CRgbColor m_setWallGradualColor_CallBack_void_ev_int32_CRgbColor;

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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr pWallGradualColor);

				/// <summary>
				///设置当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="pWallGradualColor">渐变颜色</param>
				public virtual void SetWallGradualColor_NoVirtual(int polylineFeatureUniqueID, EarthView.World.Spatial.Display.RgbColor pWallGradualColor)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(pWallGradualColor, null) ? IntPtr.Zero : pWallGradualColor.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Function(ref int polylineFeatureUniqueID, IntPtr pWallGradualColor)
				{
					EarthView.World.Spatial.Display.RgbColor csobj_pWallGradualColor = new EarthView.World.Spatial.Display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pWallGradualColor.BindNativeObject(pWallGradualColor,"CRgbColor");
					csobj_pWallGradualColor.Delegate = true;
					IClassFactory csobj_pWallGradualColorClassFactory = GlobalClassFactoryMap.Get(csobj_pWallGradualColor.GetCppInstanceTypeName());
					if (csobj_pWallGradualColorClassFactory != null)
					{
						csobj_pWallGradualColor.Delegate = true;
						csobj_pWallGradualColor = csobj_pWallGradualColorClassFactory.Create() as EarthView.World.Spatial.Display.RgbColor;
						csobj_pWallGradualColor.BindNativeObject(pWallGradualColor, "CRgbColor");
						csobj_pWallGradualColor.Delegate = true;
					}
					
					SetWallGradualColor(polylineFeatureUniqueID, csobj_pWallGradualColor);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(IntPtr pNativeObject, ref int polylineFeatureUniqueID, IntPtr pWallGradualColor);

				/// <summary>
				///设置当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="pWallGradualColor">渐变颜色</param>
				public virtual void SetWallGradualColor(int polylineFeatureUniqueID, EarthView.World.Spatial.Display.RgbColor pWallGradualColor)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(this.NativeObject, ref polylineFeatureUniqueID, object.Equals(pWallGradualColor, null) ? IntPtr.Zero : pWallGradualColor.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte canReleaseResource_CallBack_ev_bool();

				protected canReleaseResource_CallBack_ev_bool m_canReleaseResource_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///是否能够释放所有线特征对象资源
				/// </summary>
				public virtual bool CanReleaseResource_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Function()
				{
					bool csret=CanReleaseResource();
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///是否能够释放所有线特征对象资源
				/// </summary>
				public virtual bool CanReleaseResource()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte canReleaseResource_CallBack_ev_bool_ev_int32(ref int polylineFeatureUniqueID);

				protected canReleaseResource_CallBack_ev_bool_ev_int32 m_canReleaseResource_CallBack_ev_bool_ev_int32;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_NoVirtual(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///是否能够释放唯一标识的线特征对象资源
				/// </summary>
				public virtual bool CanReleaseResource_NoVirtual(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_NoVirtual(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Function(ref int polylineFeatureUniqueID)
				{
					bool csret=CanReleaseResource(polylineFeatureUniqueID);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(IntPtr pNativeObject, ref int polylineFeatureUniqueID);

				/// <summary>
				///是否能够释放唯一标识的线特征对象资源
				/// </summary>
				public virtual bool CanReleaseResource(int polylineFeatureUniqueID)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(this.NativeObject, ref polylineFeatureUniqueID);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要更新
				/// </summary>
				/// <param name="needUpdate">更新状态</param>
				public new void SetNeedUpdate_NoVirtual(bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool_NoVirtual(this.NativeObject, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要更新
				/// </summary>
				/// <param name="needUpdate">更新状态</param>
				public override void SetNeedUpdate(bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(this.NativeObject, ref needUpdate);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///更新
				/// </summary>
				public new void Update_NoVirtual()
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(IntPtr pNativeObject);

				/// <summary>
				///更新
				/// </summary>
				public override void Update()
				{
					EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadPolylineFeatureManager = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager", new PolylineFeatureManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManagerProxy", new PolylineFeatureManagerClassFactory());

				public PolylineFeatureManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(IntPtr pObject, setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(IntPtr pObject, setNeedClearUselessData_CallBack_void_ev_int32_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(IntPtr pObject, getUseWallGradualColor_CallBack_ev_bool_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(IntPtr pObject, setUseWallGradualColor_CallBack_void_ev_int32_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(IntPtr pObject, getWallGradualColor_CallBack_CRgbColor_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(IntPtr pObject, setWallGradualColor_CallBack_void_ev_int32_CRgbColor pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(IntPtr pObject, canReleaseResource_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(IntPtr pObject, canReleaseResource_CallBack_ev_bool_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool(IntPtr pObject, getCanSwapBuffer_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string(IntPtr pObject, setName_CallBack_void_EarthView_World_Core_ev_string pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string(IntPtr pObject, getName_CallBack_EarthView_World_Core_ev_string pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(IntPtr pObject, setNeedUpdate_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool(IntPtr pObject, getNeedUpdate_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode(IntPtr pObject, getNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(IntPtr pObject, update_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool_Function;
						GC.KeepAlive(m_setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setPolylineFeatureVisible_void_ev_int32_ev_bool(this.NativeObject, m_setPolylineFeatureVisible_CallBack_void_ev_int32_ev_bool);
						m_setNeedClearUselessData_CallBack_void_ev_int32_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool_Function;
						GC.KeepAlive(m_setNeedClearUselessData_CallBack_void_ev_int32_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedClearUselessData_void_ev_int32_ev_bool(this.NativeObject, m_setNeedClearUselessData_CallBack_void_ev_int32_ev_bool);
						m_getUseWallGradualColor_CallBack_ev_bool_ev_int32 = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32_Function;
						GC.KeepAlive(m_getUseWallGradualColor_CallBack_ev_bool_ev_int32);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getUseWallGradualColor_ev_bool_ev_int32(this.NativeObject, m_getUseWallGradualColor_CallBack_ev_bool_ev_int32);
						m_setUseWallGradualColor_CallBack_void_ev_int32_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool_Function;
						GC.KeepAlive(m_setUseWallGradualColor_CallBack_void_ev_int32_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setUseWallGradualColor_void_ev_int32_ev_bool(this.NativeObject, m_setUseWallGradualColor_CallBack_void_ev_int32_ev_bool);
						m_getWallGradualColor_CallBack_CRgbColor_ev_int32 = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32_Function;
						GC.KeepAlive(m_getWallGradualColor_CallBack_CRgbColor_ev_int32);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getWallGradualColor_CRgbColor_ev_int32(this.NativeObject, m_getWallGradualColor_CallBack_CRgbColor_ev_int32);
						m_setWallGradualColor_CallBack_void_ev_int32_CRgbColor = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor_Function;
						GC.KeepAlive(m_setWallGradualColor_CallBack_void_ev_int32_CRgbColor);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setWallGradualColor_void_ev_int32_CRgbColor(this.NativeObject, m_setWallGradualColor_CallBack_void_ev_int32_CRgbColor);
						m_canReleaseResource_CallBack_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_Function;
						GC.KeepAlive(m_canReleaseResource_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool(this.NativeObject, m_canReleaseResource_CallBack_ev_bool);
						m_canReleaseResource_CallBack_ev_bool_ev_int32 = EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32_Function;
						GC.KeepAlive(m_canReleaseResource_CallBack_ev_bool_ev_int32);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_canReleaseResource_ev_bool_ev_int32(this.NativeObject, m_canReleaseResource_CallBack_ev_bool_ev_int32);
						m_getCanSwapBuffer_CallBack_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Function;
						GC.KeepAlive(m_getCanSwapBuffer_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getCanSwapBuffer_ev_bool(this.NativeObject, m_getCanSwapBuffer_CallBack_ev_bool);
						m_setName_CallBack_void_EarthView_World_Core_ev_string = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Function;
						GC.KeepAlive(m_setName_CallBack_void_EarthView_World_Core_ev_string);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setName_void_EarthView_World_Core_ev_string(this.NativeObject, m_setName_CallBack_void_EarthView_World_Core_ev_string);
						m_getName_CallBack_EarthView_World_Core_ev_string = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Function;
						GC.KeepAlive(m_getName_CallBack_EarthView_World_Core_ev_string);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getName_EarthView_World_Core_ev_string(this.NativeObject, m_getName_CallBack_EarthView_World_Core_ev_string);
						m_setNeedUpdate_CallBack_void_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Function;
						GC.KeepAlive(m_setNeedUpdate_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_setNeedUpdate_void_ev_bool(this.NativeObject, m_setNeedUpdate_CallBack_void_ev_bool);
						m_getNeedUpdate_CallBack_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Function;
						GC.KeepAlive(m_getNeedUpdate_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNeedUpdate_ev_bool(this.NativeObject, m_getNeedUpdate_CallBack_ev_bool);
						m_getNode_CallBack_CNode = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Function;
						GC.KeepAlive(m_getNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_getNode_CNode(this.NativeObject, m_getNode_CallBack_CNode);
						m_update_CallBack_void = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Function;
						GC.KeepAlive(m_update_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CPolylineFeatureManager_update_void(this.NativeObject, m_update_CallBack_void);
					}
				}
				public override bool GetCanSwapBuffer()
				{
					return base.GetCanSwapBuffer_NoVirtual();
				}
				public override void SetName(string name)
				{
					base.SetName_NoVirtual(name);
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override bool GetNeedUpdate()
				{
					return base.GetNeedUpdate_NoVirtual();
				}
				public override EarthView.World.Graphic.Node GetNode()
				{
					return base.GetNode_NoVirtual();
				}
				public static PolylineFeatureManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PolylineFeatureManager obj = baseObj as  PolylineFeatureManager;
					if (object.Equals(obj, null))
					{
						obj = new PolylineFeatureManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPolylineFeatureManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PolylineFeatureManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PolylineFeatureManager emptyInstance = new PolylineFeatureManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
