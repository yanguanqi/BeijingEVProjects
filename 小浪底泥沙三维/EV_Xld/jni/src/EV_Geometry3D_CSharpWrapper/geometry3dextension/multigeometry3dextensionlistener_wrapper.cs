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
			namespace Geometry
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 二维图形扩展自定义符号的监听类
			/// 监听二维图形扩展自定义符号
			/// </summary>
			public class MultiGeometry3DExtensionListener : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public MultiGeometry3DExtensionListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMultiGeometry3DExtensionListenerProxy", null);
					if (!"EarthView.World.Geometry3D.MultiGeometry3DExtensionListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte userExtension_CallBack_ev_bool_CMultiGeometry3DExtension(IntPtr extension);

				protected userExtension_CallBack_ev_bool_CMultiGeometry3DExtension m_userExtension_CallBack_ev_bool_CMultiGeometry3DExtension;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_NoVirtual(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 系统构建前询问是否完全由用户构造对象
				/// 当返回true时，系统不再构建该对象，由监听者构建并改写extension对象；false，交由系统构建。
				/// </summary>
				/// <param name="extension">extension对象</param>
				/// <returns>用户是否进行了构造</returns>
				public virtual bool UserExtension_NoVirtual(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					byte ret=EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_NoVirtual(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Function(IntPtr extension)
				{
					EarthView.World.Geometry3D.MultiGeometry3DExtension csobj_extension = new EarthView.World.Geometry3D.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_extension.BindNativeObject(extension,"CMultiGeometry3DExtension");
					csobj_extension.Delegate = true;
					IClassFactory csobj_extensionClassFactory = GlobalClassFactoryMap.Get(csobj_extension.GetCppInstanceTypeName());
					if (csobj_extensionClassFactory != null)
					{
						csobj_extension.Delegate = true;
						csobj_extension = csobj_extensionClassFactory.Create() as EarthView.World.Geometry3D.MultiGeometry3DExtension;
						csobj_extension.BindNativeObject(extension, "CMultiGeometry3DExtension");
						csobj_extension.Delegate = true;
					}
					
					bool csret=UserExtension(csobj_extension);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 系统构建前询问是否完全由用户构造对象
				/// 当返回true时，系统不再构建该对象，由监听者构建并改写extension对象；false，交由系统构建。
				/// </summary>
				/// <param name="extension">extension对象</param>
				/// <returns>用户是否进行了构造</returns>
				public virtual bool UserExtension(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					byte ret=EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension(IntPtr extension);

				protected onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension m_onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_NoVirtual(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 当符号不支持时，通知监听者构建
				/// </summary>
				/// <param name="extension"></param>
				/// <returns>构建是否成功</returns>
				public virtual bool OnSymbolNotSupported_NoVirtual(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					byte ret=EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_NoVirtual(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Function(IntPtr extension)
				{
					EarthView.World.Geometry3D.MultiGeometry3DExtension csobj_extension = new EarthView.World.Geometry3D.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_extension.BindNativeObject(extension,"CMultiGeometry3DExtension");
					csobj_extension.Delegate = true;
					IClassFactory csobj_extensionClassFactory = GlobalClassFactoryMap.Get(csobj_extension.GetCppInstanceTypeName());
					if (csobj_extensionClassFactory != null)
					{
						csobj_extension.Delegate = true;
						csobj_extension = csobj_extensionClassFactory.Create() as EarthView.World.Geometry3D.MultiGeometry3DExtension;
						csobj_extension.BindNativeObject(extension, "CMultiGeometry3DExtension");
						csobj_extension.Delegate = true;
					}
					
					bool csret=OnSymbolNotSupported(csobj_extension);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 当符号不支持时，通知监听者构建
				/// </summary>
				/// <param name="extension"></param>
				/// <returns>构建是否成功</returns>
				public virtual bool OnSymbolNotSupported(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					byte ret=EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol(IntPtr pGeometry, IntPtr pSymbol);

				protected perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol m_perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_NoVirtual(IntPtr pNativeObject, IntPtr pGeometry, IntPtr pSymbol);

				/// <summary>
				/// 每个Geometry构造开始时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				public virtual void PerGeometryExtensionBegun_NoVirtual(EarthView.World.Spatial.Geometry.Igeometry pGeometry, EarthView.World.Spatial.Display.Isymbol pSymbol)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_NoVirtual(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
					
				}

				protected  void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Function(IntPtr pGeometry, IntPtr pSymbol)
				{
					EarthView.World.Spatial.Geometry.Igeometry csobj_pGeometry = new EarthView.World.Spatial.Geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pGeometry.BindNativeObject(pGeometry,"IGeometry");
					csobj_pGeometry.Delegate = true;
					IClassFactory csobj_pGeometryClassFactory = GlobalClassFactoryMap.Get(csobj_pGeometry.GetCppInstanceTypeName());
					if (csobj_pGeometryClassFactory != null)
					{
						csobj_pGeometry.Delegate = true;
						csobj_pGeometry = csobj_pGeometryClassFactory.Create() as EarthView.World.Spatial.Geometry.Igeometry;
						csobj_pGeometry.BindNativeObject(pGeometry, "IGeometry");
						csobj_pGeometry.Delegate = true;
					}
					EarthView.World.Spatial.Display.Isymbol csobj_pSymbol = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pSymbol.BindNativeObject(pSymbol,"ISymbol");
					csobj_pSymbol.Delegate = true;
					IClassFactory csobj_pSymbolClassFactory = GlobalClassFactoryMap.Get(csobj_pSymbol.GetCppInstanceTypeName());
					if (csobj_pSymbolClassFactory != null)
					{
						csobj_pSymbol.Delegate = true;
						csobj_pSymbol = csobj_pSymbolClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
						csobj_pSymbol.BindNativeObject(pSymbol, "ISymbol");
						csobj_pSymbol.Delegate = true;
					}
					
					PerGeometryExtensionBegun(csobj_pGeometry, csobj_pSymbol);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(IntPtr pNativeObject, IntPtr pGeometry, IntPtr pSymbol);

				/// <summary>
				/// 每个Geometry构造开始时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				public virtual void PerGeometryExtensionBegun(EarthView.World.Spatial.Geometry.Igeometry pGeometry, EarthView.World.Spatial.Display.Isymbol pSymbol)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void perGeometryExtensionFinished_CallBack_void_IGeometry(IntPtr pGeometry);

				protected perGeometryExtensionFinished_CallBack_void_IGeometry m_perGeometryExtensionFinished_CallBack_void_IGeometry;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_NoVirtual(IntPtr pNativeObject, IntPtr pGeometry);

				/// <summary>
				/// 每个Geometry构造完成时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				public virtual void PerGeometryExtensionFinished_NoVirtual(EarthView.World.Spatial.Geometry.Igeometry pGeometry)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_NoVirtual(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject);
					
				}

				protected  void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Function(IntPtr pGeometry)
				{
					EarthView.World.Spatial.Geometry.Igeometry csobj_pGeometry = new EarthView.World.Spatial.Geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pGeometry.BindNativeObject(pGeometry,"IGeometry");
					csobj_pGeometry.Delegate = true;
					IClassFactory csobj_pGeometryClassFactory = GlobalClassFactoryMap.Get(csobj_pGeometry.GetCppInstanceTypeName());
					if (csobj_pGeometryClassFactory != null)
					{
						csobj_pGeometry.Delegate = true;
						csobj_pGeometry = csobj_pGeometryClassFactory.Create() as EarthView.World.Spatial.Geometry.Igeometry;
						csobj_pGeometry.BindNativeObject(pGeometry, "IGeometry");
						csobj_pGeometry.Delegate = true;
					}
					
					PerGeometryExtensionFinished(csobj_pGeometry);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(IntPtr pNativeObject, IntPtr pGeometry);

				/// <summary>
				/// 每个Geometry构造完成时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				public virtual void PerGeometryExtensionFinished(EarthView.World.Spatial.Geometry.Igeometry pGeometry)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void preRender_CallBack_void_CMultiGeometry3DExtension(IntPtr extension);

				protected preRender_CallBack_void_CMultiGeometry3DExtension m_preRender_CallBack_void_CMultiGeometry3DExtension;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_NoVirtual(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 渲染前调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				public virtual void PreRender_NoVirtual(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_NoVirtual(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
				}

				protected  void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Function(IntPtr extension)
				{
					EarthView.World.Geometry3D.MultiGeometry3DExtension csobj_extension = new EarthView.World.Geometry3D.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_extension.BindNativeObject(extension,"CMultiGeometry3DExtension");
					csobj_extension.Delegate = true;
					IClassFactory csobj_extensionClassFactory = GlobalClassFactoryMap.Get(csobj_extension.GetCppInstanceTypeName());
					if (csobj_extensionClassFactory != null)
					{
						csobj_extension.Delegate = true;
						csobj_extension = csobj_extensionClassFactory.Create() as EarthView.World.Geometry3D.MultiGeometry3DExtension;
						csobj_extension.BindNativeObject(extension, "CMultiGeometry3DExtension");
						csobj_extension.Delegate = true;
					}
					
					PreRender(csobj_extension);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 渲染前调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				public virtual void PreRender(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postRender_CallBack_void_CMultiGeometry3DExtension(IntPtr extension);

				protected postRender_CallBack_void_CMultiGeometry3DExtension m_postRender_CallBack_void_CMultiGeometry3DExtension;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_NoVirtual(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 渲染后调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				public virtual void PostRender_NoVirtual(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_NoVirtual(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
				}

				protected  void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Function(IntPtr extension)
				{
					EarthView.World.Geometry3D.MultiGeometry3DExtension csobj_extension = new EarthView.World.Geometry3D.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_extension.BindNativeObject(extension,"CMultiGeometry3DExtension");
					csobj_extension.Delegate = true;
					IClassFactory csobj_extensionClassFactory = GlobalClassFactoryMap.Get(csobj_extension.GetCppInstanceTypeName());
					if (csobj_extensionClassFactory != null)
					{
						csobj_extension.Delegate = true;
						csobj_extension = csobj_extensionClassFactory.Create() as EarthView.World.Geometry3D.MultiGeometry3DExtension;
						csobj_extension.BindNativeObject(extension, "CMultiGeometry3DExtension");
						csobj_extension.Delegate = true;
					}
					
					PostRender(csobj_extension);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(IntPtr pNativeObject, IntPtr extension);

				/// <summary>
				/// 渲染后调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				public virtual void PostRender(EarthView.World.Geometry3D.MultiGeometry3DExtension extension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(this.NativeObject, object.Equals(extension, null) ? IntPtr.Zero : extension.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadMultiGeometry3DExtensionListener = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener", new MultiGeometry3DExtensionListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionListenerProxy", new MultiGeometry3DExtensionListenerClassFactory());

				public MultiGeometry3DExtensionListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(IntPtr pObject, userExtension_CallBack_ev_bool_CMultiGeometry3DExtension pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(IntPtr pObject, onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(IntPtr pObject, perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(IntPtr pObject, perGeometryExtensionFinished_CallBack_void_IGeometry pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(IntPtr pObject, preRender_CallBack_void_CMultiGeometry3DExtension pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(IntPtr pObject, postRender_CallBack_void_CMultiGeometry3DExtension pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_userExtension_CallBack_ev_bool_CMultiGeometry3DExtension = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Function;
						GC.KeepAlive(m_userExtension_CallBack_ev_bool_CMultiGeometry3DExtension);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(this.NativeObject, m_userExtension_CallBack_ev_bool_CMultiGeometry3DExtension);
						m_onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Function;
						GC.KeepAlive(m_onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(this.NativeObject, m_onSymbolNotSupported_CallBack_ev_bool_CMultiGeometry3DExtension);
						m_perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Function;
						GC.KeepAlive(m_perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(this.NativeObject, m_perGeometryExtensionBegun_CallBack_void_IGeometry_ISymbol);
						m_perGeometryExtensionFinished_CallBack_void_IGeometry = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Function;
						GC.KeepAlive(m_perGeometryExtensionFinished_CallBack_void_IGeometry);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(this.NativeObject, m_perGeometryExtensionFinished_CallBack_void_IGeometry);
						m_preRender_CallBack_void_CMultiGeometry3DExtension = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Function;
						GC.KeepAlive(m_preRender_CallBack_void_CMultiGeometry3DExtension);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(this.NativeObject, m_preRender_CallBack_void_CMultiGeometry3DExtension);
						m_postRender_CallBack_void_CMultiGeometry3DExtension = EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Function;
						GC.KeepAlive(m_postRender_CallBack_void_CMultiGeometry3DExtension);
						EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(this.NativeObject, m_postRender_CallBack_void_CMultiGeometry3DExtension);
					}
				}
				public static MultiGeometry3DExtensionListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MultiGeometry3DExtensionListener obj = baseObj as  MultiGeometry3DExtensionListener;
					if (object.Equals(obj, null))
					{
						obj = new MultiGeometry3DExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMultiGeometry3DExtensionListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MultiGeometry3DExtensionListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MultiGeometry3DExtensionListener emptyInstance = new MultiGeometry3DExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
