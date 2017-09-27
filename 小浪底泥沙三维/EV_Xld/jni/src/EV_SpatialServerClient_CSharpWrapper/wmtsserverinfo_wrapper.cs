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
		namespace Spatial
		{
			/// <summary>
			/// OGC WMTS 专题类
			/// </summary>
			public class Ogcwmtstheme : EarthView.World.Core.AllocatedObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getIdentifier_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取标识
				/// </summary>
				/// <returns>标识</returns>
				public string GetIdentifier()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getIdentifier_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSTheme_getTitleCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取标题数目
				/// </summary>
				/// <returns>标题数目</returns>
				public uint GetTitleCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSTheme_getTitleCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getTitle_EVString_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定标题
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定标题</returns>
				public string GetTitle(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getTitle_EVString_ev_uint32(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSTheme_getKeywordCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取关键词数目
				/// </summary>
				/// <returns>关键词数目</returns>
				public uint GetKeywordCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSTheme_getKeywordCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getKeyword_EVString_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定关键词
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定关键词</returns>
				public string GetKeyword(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getKeyword_EVString_ev_uint32(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSTheme_getAbstractCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取描述数目
				/// </summary>
				/// <returns>描述数目</returns>
				public uint GetAbstractCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSTheme_getAbstractCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getAbstract_EVString_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定描述
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>描述</returns>
				public string GetAbstract(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getAbstract_EVString_ev_uint32(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSTheme_getSubThemeCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取子Theme数目
				/// </summary>
				/// <returns>子Theme数目</returns>
				public uint GetSubThemeCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSTheme_getSubThemeCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getSubThemeRef_COGCWMTSTheme_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定子Theme引用
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定子Theme引用</returns>
				public EarthView.World.Spatial.Ogcwmtstheme GetSubThemeRef(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getSubThemeRef_COGCWMTSTheme_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtstheme csObj = new EarthView.World.Spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtstheme;
						csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSTheme_getRefLayerCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取所含图层数目
				/// </summary>
				/// <returns>所含图层数目</returns>
				public uint GetRefLayerCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSTheme_getRefLayerCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_getRefLayerName_EVString_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定所含图层名
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定图层名</returns>
				public string GetRefLayerName(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_getRefLayerName_EVString_ev_uint32(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSTheme_clone_COGCWMTSTheme(IntPtr pNativeObject);

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆结果对象指针</returns>
				public EarthView.World.Spatial.Ogcwmtstheme Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSTheme_clone_COGCWMTSTheme(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtstheme csObj = new EarthView.World.Spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtstheme;
						csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtstheme = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMTSTheme", new OgcwmtsthemeClassFactory());

				public Ogcwmtstheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ogcwmtstheme FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmtstheme obj = baseObj as  Ogcwmtstheme;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMTSTheme");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmtsthemeClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmtstheme emptyInstance = new Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// OGC WMTS专题集合类
			/// </summary>
			public class Ogcwmtsthemes : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Ogcwmtsthemes() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COGCWMTSThemes",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSThemes_clone_COGCWMTSThemes(IntPtr pNativeObject);

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆结果对象指针</returns>
				public EarthView.World.Spatial.Ogcwmtsthemes Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSThemes_clone_COGCWMTSThemes(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtsthemes csObj = new EarthView.World.Spatial.Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSThemes");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtsthemes;
						csObj.BindNativeObject(__ptr, "COGCWMTSThemes");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSThemes_getThemeRef_COGCWMTSTheme_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定索引的专题信息
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>克隆结果对象指针</returns>
				public EarthView.World.Spatial.Ogcwmtstheme GetThemeRef(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSThemes_getThemeRef_COGCWMTSTheme_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtstheme csObj = new EarthView.World.Spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtstheme;
						csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_COGCWMTSThemes_getThemeCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取专题个数
				/// </summary>
				/// <returns>专题个数</returns>
				public uint GetThemeCount()
				{
					uint ret=EarthView_World_Spatial_COGCWMTSThemes_getThemeCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsthemes = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMTSThemes", new OgcwmtsthemesClassFactory());

				public Ogcwmtsthemes(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ogcwmtsthemes FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmtsthemes obj = baseObj as  Ogcwmtsthemes;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMTSThemes");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmtsthemesClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmtsthemes emptyInstance = new Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// OGC WMTS服务信息类
			/// </summary>
			public class Wmtsserverinfo : EarthView.World.Spatial.ServerInfo
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取制定索引的元数据
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定元数据对象指针，外部释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatametainfo GetInfo_NoVirtual(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取制定索引的元数据
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定元数据对象指针，外部释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatametainfo GetInfo(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_NoVirtual(IntPtr pNativeObject, IntPtr info);

				/// <summary>
				/// 添加元数据
				/// </summary>
				/// <param name="info">元数据信息</param>
				/// <returns>数据集数目</returns>
				public new uint Add_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatametainfo info)
				{
					uint ret=EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_NoVirtual(this.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(IntPtr pNativeObject, IntPtr info);

				/// <summary>
				/// 添加元数据
				/// </summary>
				/// <param name="info">元数据信息</param>
				/// <returns>数据集数目</returns>
				public override uint Add(EarthView.World.Spatial.GeoDataset.Idatametainfo info)
				{
					uint ret=EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(this.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getUpdateSequence_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取更新序列标识
				/// </summary>
				/// <returns>更新序列标识</returns>
				public string GetUpdateSequence()
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getUpdateSequence_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_CWMTSServerInfo_getThemeCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取Theme数目
				/// </summary>
				/// <returns>Theme数目</returns>
				public uint GetThemeCount()
				{
					uint ret=EarthView_World_Spatial_CWMTSServerInfo_getThemeCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getThemeRef_COGCWMTSTheme_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定Theme引用
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定Theme引用</returns>
				public EarthView.World.Spatial.Ogcwmtstheme GetThemeRef(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getThemeRef_COGCWMTSTheme_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtstheme csObj = new EarthView.World.Spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtstheme;
						csObj.BindNativeObject(__ptr, "COGCWMTSTheme");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定图层信息
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定图层信息引用</returns>
				public EarthView.World.Spatial.Wmtslayerinfo GetLayerInfoRef(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmtslayerinfo csObj = new EarthView.World.Spatial.Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMTSLayerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmtslayerinfo;
						csObj.BindNativeObject(__ptr, "CWMTSLayerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_EVString(IntPtr pNativeObject, string layername);

				/// <summary>
				/// 获取指定图层信息
				/// </summary>
				/// <param name="layername">图层名称</param>
				/// <returns>指定图层信息引用</returns>
				public EarthView.World.Spatial.Wmtslayerinfo GetLayerInfoRef(string layername)
				{
					IntPtr __ptr = EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_EVString(this.NativeObject, layername);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmtslayerinfo csObj = new EarthView.World.Spatial.Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMTSLayerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmtslayerinfo;
						csObj.BindNativeObject(__ptr, "CWMTSLayerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadWmtsserverinfo = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CWMTSServerInfo", new WmtsserverinfoClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CWMTSServerInfoProxy", new WmtsserverinfoClassFactory());

				public Wmtsserverinfo(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32(IntPtr pObject, getCount_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(IntPtr pObject, getInfo_CallBack_IDataMetaInfo_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(IntPtr pObject, add_CallBack_ev_uint32_IDataMetaInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32(IntPtr pObject, remove_CallBack_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32(IntPtr pObject, clear_CallBack_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getCount_CallBack_ev_uint32 = EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Function;
						GC.KeepAlive(m_getCount_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32(this.NativeObject, m_getCount_CallBack_ev_uint32);
						m_getInfo_CallBack_IDataMetaInfo_ev_uint32 = EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Function;
						GC.KeepAlive(m_getInfo_CallBack_IDataMetaInfo_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(this.NativeObject, m_getInfo_CallBack_IDataMetaInfo_ev_uint32);
						m_add_CallBack_ev_uint32_IDataMetaInfo = EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Function;
						GC.KeepAlive(m_add_CallBack_ev_uint32_IDataMetaInfo);
						EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(this.NativeObject, m_add_CallBack_ev_uint32_IDataMetaInfo);
						m_remove_CallBack_ev_uint32_ev_uint32 = EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_remove_CallBack_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32(this.NativeObject, m_remove_CallBack_ev_uint32_ev_uint32);
						m_clear_CallBack_ev_uint32 = EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Function;
						GC.KeepAlive(m_clear_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32(this.NativeObject, m_clear_CallBack_ev_uint32);
					}
				}
				public override uint GetCount()
				{
					return base.GetCount_NoVirtual();
				}
				public override uint Remove(uint index)
				{
					return base.Remove_NoVirtual(index);
				}
				public override uint Clear()
				{
					return base.Clear_NoVirtual();
				}
				public static Wmtsserverinfo FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Wmtsserverinfo obj = baseObj as  Wmtsserverinfo;
					if (object.Equals(obj, null))
					{
						obj = new Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWMTSServerInfo");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WmtsserverinfoClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Wmtsserverinfo emptyInstance = new Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
