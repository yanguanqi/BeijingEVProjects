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
			namespace Spatial3D
			{
				/// <summary>
				/// 环境基类
				/// </summary>
				public class Iatmosphere : EarthView.World.Graphic.SceneManager.SceneManagerListener
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

					protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					///　设置名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public virtual void SetName_NoVirtual(string name)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_NoVirtual(this.NativeObject, name);
						
					}

					protected  void EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						SetName(strname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					///　设置名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public virtual void SetName(string name)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(this.NativeObject, name);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void fromXmlElement_CallBack_void_CXmlElement(IntPtr element);

					protected fromXmlElement_CallBack_void_CXmlElement m_fromXmlElement_CallBack_void_CXmlElement;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml元素读取
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					public virtual void FromXmlElement_NoVirtual(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Function(IntPtr element)
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
						
						FromXmlElement(csobj_element);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml元素读取
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					public virtual void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr toXmlElement_CallBack_CXmlElement_CXmlElement(IntPtr element);

					protected toXmlElement_CallBack_CXmlElement_CXmlElement m_toXmlElement_CallBack_CXmlElement_CXmlElement;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					///　序列化xml元素
					/// </summary>
					/// <returns></returns>
					public virtual EarthView.World.Core.XmlElement ToXmlElement_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Function(IntPtr element)
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
						
						EarthView.World.Core.XmlElement csret=ToXmlElement(ref csobj_element);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					///　序列化xml元素
					/// </summary>
					/// <returns></returns>
					public virtual EarthView.World.Core.XmlElement ToXmlElement(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void fromXML_CallBack_void_CXmlElement(IntPtr element);

					protected fromXML_CallBack_void_CXmlElement m_fromXML_CallBack_void_CXmlElement;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					///　序列化xml文本
					/// </summary>
					/// <returns></returns>
					public virtual void FromXML_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Function(IntPtr element)
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
						
						FromXML(ref csobj_element);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					///　序列化xml文本
					/// </summary>
					/// <returns></returns>
					public virtual void FromXML(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string toXML_CallBack_EVString();

					protected toXML_CallBack_EVString m_toXML_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///　存储为xml文本
					/// </summary>
					/// <returns></returns>
					public virtual string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Function()
					{
						string csret=ToXML();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					///　存储为xml文本
					/// </summary>
					/// <returns></returns>
					public virtual string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadIatmosphere = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadIatmosphere = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphere", new IatmosphereClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereProxy", new IatmosphereClassFactory());

					public Iatmosphere(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(IntPtr pObject, fromXmlElement_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(IntPtr pObject, fromXML_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t(IntPtr pObject, shadowTexturesUpdated_CallBack_void_ev_size_t pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(IntPtr pObject, shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(IntPtr pObject, shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(IntPtr pObject, sortLightsAffectingFrustum_CallBack_ev_bool_LightList pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager(IntPtr pObject, sceneManagerDestroyed_CallBack_void_CSceneManager pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_fromXmlElement_CallBack_void_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXmlElement_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(this.NativeObject, m_fromXmlElement_CallBack_void_CXmlElement);
							m_toXmlElement_CallBack_CXmlElement_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Function;
							GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement_CXmlElement);
							m_fromXML_CallBack_void_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXML_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(this.NativeObject, m_fromXML_CallBack_void_CXmlElement);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Function;
							GC.KeepAlive(m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Function;
							GC.KeepAlive(m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
							GC.KeepAlive(m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
							GC.KeepAlive(m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							m_shadowTexturesUpdated_CallBack_void_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Function;
							GC.KeepAlive(m_shadowTexturesUpdated_CallBack_void_ev_size_t);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t(this.NativeObject, m_shadowTexturesUpdated_CallBack_void_ev_size_t);
							m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Function;
							GC.KeepAlive(m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(this.NativeObject, m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
							m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Function;
							GC.KeepAlive(m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(this.NativeObject, m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
							m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Function;
							GC.KeepAlive(m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(this.NativeObject, m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
							m_sceneManagerDestroyed_CallBack_void_CSceneManager = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Function;
							GC.KeepAlive(m_sceneManagerDestroyed_CallBack_void_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager(this.NativeObject, m_sceneManagerDestroyed_CallBack_void_CSceneManager);
						}
					}
					public override void PreUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
					{
						base.PreUpdateSceneGraph_NoVirtual(source,camera);
					}
					public override void PostUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
					{
						base.PostUpdateSceneGraph_NoVirtual(source,camera);
					}
					public override void PreFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
					{
						base.PreFindVisibleObjects_NoVirtual(source,irs,v);
					}
					public override void PostFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
					{
						base.PostFindVisibleObjects_NoVirtual(source,irs,v);
					}
					public override void ShadowTexturesUpdated(ulong numberOfShadowTextures)
					{
						base.ShadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
					}
					public override void ShadowTextureCasterPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera camera, ulong iteration)
					{
						base.ShadowTextureCasterPreViewProj_NoVirtual(light,camera,iteration);
					}
					public override void ShadowTextureReceiverPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Frustum frustum)
					{
						base.ShadowTextureReceiverPreViewProj_NoVirtual(light,frustum);
					}
					public override bool SortLightsAffectingFrustum(ref EarthView.World.Graphic.LightList lightList)
					{
						return base.SortLightsAffectingFrustum_NoVirtual(ref lightList);
					}
					public override void SceneManagerDestroyed(EarthView.World.Graphic.SceneManager source)
					{
						base.SceneManagerDestroyed_NoVirtual(source);
					}
					public static Iatmosphere FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iatmosphere obj = baseObj as  Iatmosphere;
						if (object.Equals(obj, null))
						{
							obj = new Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IAtmosphere");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IatmosphereClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iatmosphere emptyInstance = new Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				///　环境工厂类
				/// </summary>
				public class Iatmospherefactory : EarthView.World.Core.AllocatedObject
				{
					public Iatmospherefactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IAtmosphereFactoryProxy", null);
						if (!"EarthView.World.Spatial.Spatial3D.Iatmospherefactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_IAtmosphere_CSceneManager(IntPtr pScene);

					protected createInstance_CallBack_IAtmosphere_CSceneManager m_createInstance_CallBack_IAtmosphere_CSceneManager;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(this.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Function(IntPtr pScene)
					{
						EarthView.World.Graphic.SceneManager csobj_pScene = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pScene.BindNativeObject(pScene,"CSceneManager");
						csobj_pScene.Delegate = true;
						IClassFactory csobj_pSceneClassFactory = GlobalClassFactoryMap.Get(csobj_pScene.GetCppInstanceTypeName());
						if (csobj_pSceneClassFactory != null)
						{
							csobj_pScene.Delegate = true;
							csobj_pScene = csobj_pSceneClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_pScene.BindNativeObject(pScene, "CSceneManager");
							csobj_pScene.Delegate = true;
						}
						
						EarthView.World.Spatial.Spatial3D.Iatmosphere csret=CreateInstance(csobj_pScene);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(IntPtr pNativeObject, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(this.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_IAtmosphere_EVString_CSceneManager(ref IntPtr strXml, IntPtr pScene);

					protected createInstance_CallBack_IAtmosphere_EVString_CSceneManager m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(IntPtr pNativeObject, string strXml, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(string strXml, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(this.NativeObject, strXml, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Function(ref IntPtr strXml, IntPtr pScene)
					{
						string strstrXml= Marshal.PtrToStringAnsi(strXml);
						ClassFactory.FreeString(ref strXml);
						EarthView.World.Graphic.SceneManager csobj_pScene = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pScene.BindNativeObject(pScene,"CSceneManager");
						csobj_pScene.Delegate = true;
						IClassFactory csobj_pSceneClassFactory = GlobalClassFactoryMap.Get(csobj_pScene.GetCppInstanceTypeName());
						if (csobj_pSceneClassFactory != null)
						{
							csobj_pScene.Delegate = true;
							csobj_pScene = csobj_pSceneClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_pScene.BindNativeObject(pScene, "CSceneManager");
							csobj_pScene.Delegate = true;
						}
						
						EarthView.World.Spatial.Spatial3D.Iatmosphere csret=CreateInstance(strstrXml,csobj_pScene);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(IntPtr pNativeObject, string strXml, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(string strXml, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(this.NativeObject, strXml, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager(IntPtr element, IntPtr pScene);

					protected createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr element, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(ref EarthView.World.Core.XmlElement element, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Function(IntPtr element, IntPtr pScene)
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
						EarthView.World.Graphic.SceneManager csobj_pScene = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pScene.BindNativeObject(pScene,"CSceneManager");
						csobj_pScene.Delegate = true;
						IClassFactory csobj_pSceneClassFactory = GlobalClassFactoryMap.Get(csobj_pScene.GetCppInstanceTypeName());
						if (csobj_pSceneClassFactory != null)
						{
							csobj_pScene.Delegate = true;
							csobj_pScene = csobj_pSceneClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_pScene.BindNativeObject(pScene, "CSceneManager");
							csobj_pScene.Delegate = true;
						}
						
						EarthView.World.Spatial.Spatial3D.Iatmosphere csret=CreateInstance(ref csobj_element, csobj_pScene);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(IntPtr pNativeObject, IntPtr element, IntPtr pScene);

					public virtual EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(ref EarthView.World.Core.XmlElement element, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destroyInstance_CallBack_void_IAtmosphere(IntPtr environment);

					protected destroyInstance_CallBack_void_IAtmosphere m_destroyInstance_CallBack_void_IAtmosphere;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(IntPtr pNativeObject, IntPtr environment);

					public virtual void DestroyInstance_NoVirtual(EarthView.World.Spatial.Spatial3D.Iatmosphere environment)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(this.NativeObject, object.Equals(environment, null) ? IntPtr.Zero : environment.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Function(IntPtr environment)
					{
						EarthView.World.Spatial.Spatial3D.Iatmosphere csobj_environment = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_environment.BindNativeObject(environment,"IAtmosphere");
						csobj_environment.Delegate = true;
						IClassFactory csobj_environmentClassFactory = GlobalClassFactoryMap.Get(csobj_environment.GetCppInstanceTypeName());
						if (csobj_environmentClassFactory != null)
						{
							csobj_environment.Delegate = true;
							csobj_environment = csobj_environmentClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csobj_environment.BindNativeObject(environment, "IAtmosphere");
							csobj_environment.Delegate = true;
						}
						
						DestroyInstance(csobj_environment);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(IntPtr pNativeObject, IntPtr environment);

					public virtual void DestroyInstance(EarthView.World.Spatial.Spatial3D.Iatmosphere environment)
					{
						EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(this.NativeObject, object.Equals(environment, null) ? IntPtr.Zero : environment.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadIatmospherefactory = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadIatmospherefactory = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactory", new IatmospherefactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactoryProxy", new IatmospherefactoryClassFactory());

					public Iatmospherefactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_EVString_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(IntPtr pObject, destroyInstance_CallBack_void_IAtmosphere pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createInstance_CallBack_IAtmosphere_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_CSceneManager);
							m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager);
							m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager);
							m_destroyInstance_CallBack_void_IAtmosphere = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_IAtmosphere);
							EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(this.NativeObject, m_destroyInstance_CallBack_void_IAtmosphere);
						}
					}
					public static Iatmospherefactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iatmospherefactory obj = baseObj as  Iatmospherefactory;
						if (object.Equals(obj, null))
						{
							obj = new Iatmospherefactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IAtmosphereFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IatmospherefactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iatmospherefactory emptyInstance = new Iatmospherefactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
