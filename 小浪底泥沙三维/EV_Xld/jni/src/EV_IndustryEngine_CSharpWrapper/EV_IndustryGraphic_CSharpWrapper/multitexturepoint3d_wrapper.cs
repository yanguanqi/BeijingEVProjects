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
			/// 多点对象
			/// </summary>
			public class MultiTexturePoint3d : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_pGlobeCtrl">三维控件</param>
				public MultiTexturePoint3d(string name, EarthView.World.Spatial3D.Controls.GlobeControl ref_pGlobeCtrl) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_pGlobeCtrl = new BasePtr(ref_pGlobeCtrl);
					list.Add("ref_pGlobeCtrl", valueref_pGlobeCtrl.PtrVal);
					Create("CMultiTexturePoint3d", list);
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_addPoint3d_void_EVString_CVector3_CDegree_EVString_float_bool_bool(IntPtr pNativeObject, string ptName, IntPtr worldPos, IntPtr heading, string iconPath, ref float size, ref bool faceToCamera, ref bool showAsPixel);

				/// <summary>
				/// 添加单点
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="worldPos">单点世界坐标</param>
				/// <param name="heading">偏北角（以局部坐标系下Z轴代表地球表面正北方向</param>
				/// <param name="iconPath">图标文件路径</param>
				/// <param name="size">单点像素大小</param>
				/// <param name="faceToCamera">是否始终朝向相机显示</param>
				/// <param name="showAsPixel">是否以像素模式显示，显示大小不跟随镜头发生变化</param>
				public void AddPoint3d(string ptName, EarthView.World.Spatial.Math.Vector3 worldPos, EarthView.World.Spatial.Math.Degree heading, string iconPath, float size, bool faceToCamera, bool showAsPixel)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_addPoint3d_void_EVString_CVector3_CDegree_EVString_float_bool_bool(this.NativeObject, ptName, object.Equals(worldPos, null) ? IntPtr.Zero : worldPos.NativeObject, object.Equals(heading, null) ? IntPtr.Zero : heading.NativeObject, iconPath, ref size, ref faceToCamera, ref showAsPixel);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removePoint3d_void_EVString(IntPtr pNativeObject, string ptName);

				/// <summary>
				/// 根据名称移除点
				/// </summary>
				/// <param name="ptName">单点名称</param>
				public void RemovePoint3d(string ptName)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removePoint3d_void_EVString(this.NativeObject, ptName);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setVisible_void_EVString_bool(IntPtr pNativeObject, string ptName, ref bool value);

				/// <summary>
				/// 根据名称设置可见性
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">可见性</param>
				public void SetVisible(string ptName, bool value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setVisible_void_EVString_bool(this.NativeObject, ptName, ref value);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getVisible_bool_EVString(IntPtr pNativeObject, string ptName);

				/// <summary>
				/// 根据名称获取可见性
				/// </summary>
				/// <param name="ptName">单点名称</param>
				public bool GetVisible(string ptName)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getVisible_bool_EVString(this.NativeObject, ptName);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setStatus_void_EVString_CVector3_CDegree(IntPtr pNativeObject, string ptName, IntPtr worldPos, IntPtr heading);

				/// <summary>
				/// 根据名称设置状态
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="worldPos">单点世界坐标</param>
				/// <param name="heading">单点偏北角</param>
				public void SetStatus(string ptName, EarthView.World.Spatial.Math.Vector3 worldPos, EarthView.World.Spatial.Math.Degree heading)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setStatus_void_EVString_CVector3_CDegree(this.NativeObject, ptName, object.Equals(worldPos, null) ? IntPtr.Zero : worldPos.NativeObject, object.Equals(heading, null) ? IntPtr.Zero : heading.NativeObject);
					
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前多点对象名称
				/// </summary>
				/// <returns>名称</returns>
				public string GetName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getPtIconPath_EVString_EVString(IntPtr pNativeObject, string ptName);

				/// <summary>
				/// 根据名称获取单点对象的图标文件路径
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>图标文件路径</returns>
				public string GetPtIconPath(string ptName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getPtIconPath_EVString_EVString(this.NativeObject, ptName);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_attachToScene_void(IntPtr pNativeObject);

				/// <summary>
				/// 将多点对象挂接到场景中，只需要挂接一次
				/// </summary>
				public void AttachToScene()
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_attachToScene_void(this.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removeAll_void(IntPtr pNativeObject);

				/// <summary>
				/// 移除所有单点对象
				/// </summary>
				public void RemoveAll()
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removeAll_void(this.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMaxVisibleDistance_void_EVString_Real(IntPtr pNativeObject, string ptName, ref double value);

				/// <summary>
				/// 根据名称设置单点对象的最大可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">最大可见距离</param>
				public void SetMaxVisibleDistance(string ptName, double value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMaxVisibleDistance_void_EVString_Real(this.NativeObject, ptName, ref value);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMinVisibleDistance_void_EVString_Real(IntPtr pNativeObject, string ptName, ref double value);

				/// <summary>
				/// 根据名称设置单点对象的最小可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">可最小见距离</param>
				public void SetMinVisibleDistance(string ptName, double value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMinVisibleDistance_void_EVString_Real(this.NativeObject, ptName, ref value);
					
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
				private static extern double EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMaxVisibleDistance_Real_EVString(IntPtr pNativeObject, string ptName);

				/// <summary>
				/// 根据名称获取单点对象的最大可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>最大可见距离</returns>
				public double GetMaxVisibleDistance(string ptName)
				{
					double ret=EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMaxVisibleDistance_Real_EVString(this.NativeObject, ptName);
					
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
				private static extern double EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMinVisibleDistance_Real_EVString(IntPtr pNativeObject, string ptName);

				/// <summary>
				/// 根据名称获取单点对象的最小可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>可最小见距离</returns>
				public double GetMinVisibleDistance(string ptName)
				{
					double ret=EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMinVisibleDistance_Real_EVString(this.NativeObject, ptName);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setSize_void_EVString_float(IntPtr pNativeObject, string ptName, ref float value);

				/// <summary>
				/// 根据名称设置单点对象的边长大小
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">边长大小</param>
				public void SetSize(string ptName, float value)
				{
					EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setSize_void_EVString_float(this.NativeObject, ptName, ref value);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadMultiTexturePoint3d = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d", new MultiTexturePoint3dClassFactory());

				public MultiTexturePoint3d(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static MultiTexturePoint3d FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MultiTexturePoint3d obj = baseObj as  MultiTexturePoint3d;
					if (object.Equals(obj, null))
					{
						obj = new MultiTexturePoint3d(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMultiTexturePoint3d");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MultiTexturePoint3dClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MultiTexturePoint3d emptyInstance = new MultiTexturePoint3d(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
