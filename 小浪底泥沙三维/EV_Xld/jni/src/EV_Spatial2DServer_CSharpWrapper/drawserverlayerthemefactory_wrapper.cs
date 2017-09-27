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
			namespace Display
			{
				/// <summary>
				/// WMS图层专题图基类
				/// </summary>
				public class DrawServerLayerThemeFactory : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_getKeys_CStringArray(IntPtr pNativeObject);

					/// <summary>
					/// 获取支持的专题图关键字
					/// </summary>
					/// <returns>关键字列表</returns>
					public EarthView.World.Core.StringArray GetKeys()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_getKeys_CStringArray(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.StringArray csObj = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.StringArray;
							csObj.BindNativeObject(__ptr, "CStringArray");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_isSupported_ev_bool_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 判断是否支持该关键字的专题图创建
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>支持返回true，不支持返回false</returns>
					public bool IsSupported(string key)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_isSupported_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr create_CallBack_CDrawServerLayerTheme_EVString(ref IntPtr key);

					protected create_CallBack_CDrawServerLayerTheme_EVString m_create_CallBack_CDrawServerLayerTheme_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_NoVirtual(IntPtr pNativeObject, string key);

					/// <summary>
					/// 通过关键字创建专题图
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>专题图对象指针</returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme Create_NoVirtual(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_NoVirtual(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Function(ref IntPtr key)
					{
						string strkey= Marshal.PtrToStringAnsi(key);
						ClassFactory.FreeString(ref key);
						
						EarthView.World.Spatial.Display.DrawServerLayerTheme csret=Create(strkey);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 通过关键字创建专题图
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>专题图对象指针</returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme Create(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream(IntPtr stream);

					protected createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream m_createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 通过数据流恢复专题图信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme CreateRenderFromStream_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Function(IntPtr stream)
					{
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						EarthView.World.Spatial.Display.DrawServerLayerTheme csret=CreateRenderFromStream(ref csobj_stream);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 通过数据流恢复专题图信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme CreateRenderFromStream(ref EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement(IntPtr element);

					protected createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement m_createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 通过xmlElement恢复专题图信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme CreateThemeFromXmlElement_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Function(IntPtr element)
					{
						EarthView.World.Core.XmlElement csobj_element = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_element.BindNativeObject(element,"CXmlElement");
						csobj_element.Delegate = true;
						IClassFactory csobj_elementClassFactory = GlobalClassFactoryMap.Get(csobj_element.GetCppInstanceTypeName());
						if (csobj_elementClassFactory != null)
						{
							csobj_element.Delegate = true;
							csobj_element = csobj_elementClassFactory.Create() as EarthView.World.Core.XmlElement;
							csobj_element.BindNativeObject(element, "CXmlElement");
							csobj_element.Delegate = true;
						}
						
						EarthView.World.Spatial.Display.DrawServerLayerTheme csret=CreateThemeFromXmlElement(ref csobj_element);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 通过xmlElement恢复专题图信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Display.DrawServerLayerTheme CreateThemeFromXmlElement(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerTheme csObj = new EarthView.World.Spatial.Display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerTheme;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_destroyRender_void_CDrawServerLayerTheme(IntPtr pNativeObject, IntPtr pRender);

					/// <summary>
					/// 销毁专题图
					/// </summary>
					/// <param name="pSymbol">专题图对象</param>
					/// <returns></returns>
					public void DestroyRender(EarthView.World.Spatial.Display.DrawServerLayerTheme pRender)
					{
						EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_destroyRender_void_CDrawServerLayerTheme(this.NativeObject, object.Equals(pRender, null) ? IntPtr.Zero : pRender.NativeObject);
						
					}

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public DrawServerLayerThemeFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawServerLayerThemeFactoryProxy", null);
						if (!"EarthView.World.Spatial.Display.DrawServerLayerThemeFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_initialize_void(IntPtr pNativeObject);

					public void Initialize()
					{
						EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_initialize_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_d.so");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp_d.so");

						#else 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer.so");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp.so");

						#else 
							private static bool bLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerThemeFactory = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory", new DrawServerLayerThemeFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryProxy", new DrawServerLayerThemeFactoryClassFactory());

					public DrawServerLayerThemeFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(IntPtr pObject, create_CallBack_CDrawServerLayerTheme_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(IntPtr pObject, createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(IntPtr pObject, createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_create_CallBack_CDrawServerLayerTheme_EVString = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Function;
							GC.KeepAlive(m_create_CallBack_CDrawServerLayerTheme_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(this.NativeObject, m_create_CallBack_CDrawServerLayerTheme_EVString);
							m_createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Function;
							GC.KeepAlive(m_createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(this.NativeObject, m_createRenderFromStream_CallBack_CDrawServerLayerTheme_CDataStream);
							m_createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Function;
							GC.KeepAlive(m_createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(this.NativeObject, m_createThemeFromXmlElement_CallBack_CDrawServerLayerTheme_CXmlElement);
						}
					}
					public static DrawServerLayerThemeFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawServerLayerThemeFactory obj = baseObj as  DrawServerLayerThemeFactory;
						if (object.Equals(obj, null))
						{
							obj = new DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawServerLayerThemeFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawServerLayerThemeFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawServerLayerThemeFactory emptyInstance = new DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class DrawServerLayerThemeFactoryRegistry : BaseObject
				{
					public DrawServerLayerThemeFactoryRegistry() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawServerLayerThemeFactoryRegistry",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_registryFactory_int_CDrawServerLayerThemeFactory(IntPtr pNativeObject, IntPtr factory);

					public int RegistryFactory(EarthView.World.Spatial.Display.DrawServerLayerThemeFactory factory)
					{
						int ret=EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_registryFactory_int_CDrawServerLayerThemeFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_getFactory_CDrawServerLayerThemeFactory_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Spatial.Display.DrawServerLayerThemeFactory GetFactory(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_getFactory_CDrawServerLayerThemeFactory_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawServerLayerThemeFactory csObj = new EarthView.World.Spatial.Display.DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawServerLayerThemeFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawServerLayerThemeFactory;
							csObj.BindNativeObject(__ptr, "CDrawServerLayerThemeFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_d.so");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp_d.so");

						#else 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer.so");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp.so");

						#else 
							private static bool bLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry", new DrawServerLayerThemeFactoryRegistryClassFactory());

					public DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DrawServerLayerThemeFactoryRegistry FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawServerLayerThemeFactoryRegistry obj = baseObj as  DrawServerLayerThemeFactoryRegistry;
						if (object.Equals(obj, null))
						{
							obj = new DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawServerLayerThemeFactoryRegistry");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawServerLayerThemeFactoryRegistryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawServerLayerThemeFactoryRegistry emptyInstance = new DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
