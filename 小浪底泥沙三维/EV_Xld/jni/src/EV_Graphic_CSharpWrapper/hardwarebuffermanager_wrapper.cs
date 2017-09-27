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
			/// 硬件缓存许可类
			/// 定义内存中缓存许可的相关操作
			/// </summary>
			public class HardwareBufferLicensee : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public HardwareBufferLicensee() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHardwareBufferLicenseeProxy", null);
					if (!"EarthView.World.Graphic.HardwareBufferLicensee".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void licenseExpired_CallBack_void_CHardwareBuffer(IntPtr buffer);

				protected licenseExpired_CallBack_void_CHardwareBuffer m_licenseExpired_CallBack_void_CHardwareBuffer;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_NoVirtual(IntPtr pNativeObject, IntPtr buffer);

				///virtual void licenseExpired(EarthView::World::Graphic::CHardwareBuffer* buffer) = 0;
				/// <summary>
				/// 许可期限
				/// </summary>
				/// <param name="buffer">缓存</param>
				/// <returns></returns>
				public virtual void LicenseExpired_NoVirtual(EarthView.World.Graphic.HardwareBuffer buffer)
				{
					EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_NoVirtual(this.NativeObject, object.Equals(buffer, null) ? IntPtr.Zero : buffer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Function(IntPtr buffer)
				{
					EarthView.World.Graphic.HardwareBuffer csobj_buffer = new EarthView.World.Graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_buffer.BindNativeObject(buffer,"CHardwareBuffer");
					csobj_buffer.Delegate = true;
					IClassFactory csobj_bufferClassFactory = GlobalClassFactoryMap.Get(csobj_buffer.GetCppInstanceTypeName());
					if (csobj_bufferClassFactory != null)
					{
						csobj_buffer.Delegate = true;
						csobj_buffer = csobj_bufferClassFactory.Create() as EarthView.World.Graphic.HardwareBuffer;
						csobj_buffer.BindNativeObject(buffer, "CHardwareBuffer");
						csobj_buffer.Delegate = true;
					}
					
					LicenseExpired(csobj_buffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(IntPtr pNativeObject, IntPtr buffer);

				///virtual void licenseExpired(EarthView::World::Graphic::CHardwareBuffer* buffer) = 0;
				/// <summary>
				/// 许可期限
				/// </summary>
				/// <param name="buffer">缓存</param>
				/// <returns></returns>
				public virtual void LicenseExpired(EarthView.World.Graphic.HardwareBuffer buffer)
				{
					EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(this.NativeObject, object.Equals(buffer, null) ? IntPtr.Zero : buffer.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferLicensee = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferLicensee", new HardwareBufferLicenseeClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferLicenseeProxy", new HardwareBufferLicenseeClassFactory());

				public HardwareBufferLicensee(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(IntPtr pObject, licenseExpired_CallBack_void_CHardwareBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_licenseExpired_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_licenseExpired_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(this.NativeObject, m_licenseExpired_CallBack_void_CHardwareBuffer);
					}
				}
				public static HardwareBufferLicensee FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareBufferLicensee obj = baseObj as  HardwareBufferLicensee;
					if (object.Equals(obj, null))
					{
						obj = new HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareBufferLicensee");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareBufferLicenseeClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareBufferLicensee emptyInstance = new HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 记录短暂混合缓存用途结构类
			/// 定义这些缓冲器用途结构的相关操作
			/// </summary>
			public class TempBlendedBufferInfo : EarthView.World.Graphic.HardwareBufferLicensee
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public TempBlendedBufferInfo() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTempBlendedBufferInfoProxy", null);
					if (!"EarthView.World.Graphic.TempBlendedBufferInfo".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_extractFrom_void_CVertexData(IntPtr pNativeObject, IntPtr sourceData);

				//// Utility method, extract info from the given EarthView::World::Graphic::CVertexData
				/// <summary>
				/// 从已给顶点数据中获取有效方法和提取信息
				/// </summary>
				/// <param name="sourceData">资源数据</param>
				/// <returns></returns>
				public void ExtractFrom(EarthView.World.Graphic.VertexData sourceData)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_extractFrom_void_CVertexData(this.NativeObject, object.Equals(sourceData, null) ? IntPtr.Zero : sourceData.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool_ev_bool(IntPtr pNativeObject, byte positions, byte normals);

				//// Utility method, checks out temporary copies of src into dest
				///void checkoutTempCopies(ev_bool positions = true, ev_bool normals = true);
				/// <summary>
				/// 检验临时副本
				/// </summary>
				/// <param name="positions">位置是否正确</param>
				/// <param name="normals">是否正常</param>
				/// <returns></returns>
				public void CheckoutTempCopies(bool positions, bool normals)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool_ev_bool(this.NativeObject, Convert.ToByte(positions), Convert.ToByte(normals));
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool(IntPtr pNativeObject, byte positions);

				/// <summary>
				/// 检验临时副本
				/// </summary>
				/// <param name="positions">位置是否正确</param>
				/// <returns></returns>
				public void CheckoutTempCopies(bool positions)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool(this.NativeObject, Convert.ToByte(positions));
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void(IntPtr pNativeObject);

				/// <summary>
				/// 检验临时副本
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void CheckoutTempCopies()
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_bindTempCopies_void_CVertexData_ev_bool(IntPtr pNativeObject, IntPtr targetData, byte suppressHardwareUpload);

				//// Utility method, binds dest copies into a given CVertexData struct
				/// <summary>
				/// 绑定临时复制情况
				/// </summary>
				/// <param name="targetData">顶点目标数据</param>
				/// <param name="suppressHardwareUpload">是否禁止缓存上传</param>
				/// <returns></returns>
				public void BindTempCopies(EarthView.World.Graphic.VertexData targetData, bool suppressHardwareUpload)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_bindTempCopies_void_CVertexData_ev_bool(this.NativeObject, object.Equals(targetData, null) ? IntPtr.Zero : targetData.NativeObject, Convert.ToByte(suppressHardwareUpload));
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_NoVirtual(IntPtr pNativeObject, IntPtr buffer);

				/// <summary>
				/// 许可期限
				/// </summary>
				/// <param name="buffer">缓存</param>
				/// <returns></returns>
				public new void LicenseExpired_NoVirtual(EarthView.World.Graphic.HardwareBuffer buffer)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_NoVirtual(this.NativeObject, object.Equals(buffer, null) ? IntPtr.Zero : buffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(IntPtr pNativeObject, IntPtr buffer);

				/// <summary>
				/// 许可期限
				/// </summary>
				/// <param name="buffer">缓存</param>
				/// <returns></returns>
				public override void LicenseExpired(EarthView.World.Graphic.HardwareBuffer buffer)
				{
					EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(this.NativeObject, object.Equals(buffer, null) ? IntPtr.Zero : buffer.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool_ev_bool(IntPtr pNativeObject, byte positions, byte normals);

				///ev_bool buffersCheckedOut(ev_bool positions = true, ev_bool normals = true) const;
				/// <summary>
				/// 是否缓存检验
				/// </summary>
				/// <param name="positions">位置是否正确</param>
				/// <param name="normals">是否正常</param>
				/// <returns>检验返回true，否则返回false</returns>
				public bool BuffersCheckedOut(bool positions, bool normals)
				{
					byte ret=EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool_ev_bool(this.NativeObject, Convert.ToByte(positions), Convert.ToByte(normals));
					
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
				private static extern byte EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool(IntPtr pNativeObject, byte positions);

				/// <summary>
				/// 是否缓存检验
				/// </summary>
				/// <param name="positions">位置是否正确</param>
				/// <returns>检验返回true，否则返回false</returns>
				public bool BuffersCheckedOut(bool positions)
				{
					byte ret=EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool(this.NativeObject, Convert.ToByte(positions));
					
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
				private static extern byte EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否缓存检验
				/// </summary>
				/// <param name=""></param>
				/// <returns>检验返回true，否则返回false</returns>
				public bool BuffersCheckedOut()
				{
					byte ret=EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTempBlendedBufferInfo = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTempBlendedBufferInfo", new TempBlendedBufferInfoClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTempBlendedBufferInfoProxy", new TempBlendedBufferInfoClassFactory());

				public TempBlendedBufferInfo(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(IntPtr pObject, licenseExpired_CallBack_void_CHardwareBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_licenseExpired_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_licenseExpired_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(this.NativeObject, m_licenseExpired_CallBack_void_CHardwareBuffer);
					}
				}
				public static TempBlendedBufferInfo FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TempBlendedBufferInfo obj = baseObj as  TempBlendedBufferInfo;
					if (object.Equals(obj, null))
					{
						obj = new TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTempBlendedBufferInfo");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TempBlendedBufferInfoClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TempBlendedBufferInfo emptyInstance = new TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 硬件缓存管理基类
			/// 定义相关操作
			/// </summary>
			public class HardwareBufferManagerBase : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyAllDeclarations_CallBack_void();

				protected destroyAllDeclarations_CallBack_void m_destroyAllDeclarations_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_NoVirtual(IntPtr pNativeObject);

				//// Internal method for destroys all vertex declarations
				/// <summary>
				/// 销毁所有的声明
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void DestroyAllDeclarations_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Function()
				{
					DestroyAllDeclarations();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(IntPtr pNativeObject);

				//// Internal method for destroys all vertex declarations
				/// <summary>
				/// 销毁所有的声明
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void DestroyAllDeclarations()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyAllBindings_CallBack_void();

				protected destroyAllBindings_CallBack_void m_destroyAllBindings_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_NoVirtual(IntPtr pNativeObject);

				//// Internal method for destroys all vertex buffer bindings
				/// <summary>
				/// 销毁所有的绑定
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void DestroyAllBindings_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Function()
				{
					DestroyAllBindings();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(IntPtr pNativeObject);

				//// Internal method for destroys all vertex buffer bindings
				/// <summary>
				/// 销毁所有的绑定
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void DestroyAllBindings()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexDeclarationImpl_CallBack_CVertexDeclaration();

				protected createVertexDeclarationImpl_CallBack_CVertexDeclaration m_createVertexDeclarationImpl_CallBack_CVertexDeclaration;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_NoVirtual(IntPtr pNativeObject);

				//// Internal method for creates a new vertex declaration, may be overridden by certain rendering APIs
				/// <summary>
				/// 创建一个新的顶点声明内在方法
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明</returns>
				protected virtual EarthView.World.Graphic.VertexDeclaration CreateVertexDeclarationImpl_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Function()
				{
					EarthView.World.Graphic.VertexDeclaration csret=CreateVertexDeclarationImpl();
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(IntPtr pNativeObject);

				//// Internal method for creates a new vertex declaration, may be overridden by certain rendering APIs
				/// <summary>
				/// 创建一个新的顶点声明内在方法
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明</returns>
				protected virtual EarthView.World.Graphic.VertexDeclaration CreateVertexDeclarationImpl()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration(IntPtr decl);

				protected destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_NoVirtual(IntPtr pNativeObject, IntPtr decl);

				//// Internal method for destroys a vertex declaration, may be overridden by certain rendering APIs
				/// <summary>
				/// 销毁一个新的顶点声明内在方法
				/// </summary>
				/// <param name="decl">顶点声明</param>
				/// <returns></returns>
				protected virtual void DestroyVertexDeclarationImpl_NoVirtual(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_NoVirtual(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Function(IntPtr decl)
				{
					EarthView.World.Graphic.VertexDeclaration csobj_decl = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_decl.BindNativeObject(decl,"CVertexDeclaration");
					csobj_decl.Delegate = true;
					IClassFactory csobj_declClassFactory = GlobalClassFactoryMap.Get(csobj_decl.GetCppInstanceTypeName());
					if (csobj_declClassFactory != null)
					{
						csobj_decl.Delegate = true;
						csobj_decl = csobj_declClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csobj_decl.BindNativeObject(decl, "CVertexDeclaration");
						csobj_decl.Delegate = true;
					}
					
					DestroyVertexDeclarationImpl(csobj_decl);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(IntPtr pNativeObject, IntPtr decl);

				//// Internal method for destroys a vertex declaration, may be overridden by certain rendering APIs
				/// <summary>
				/// 销毁一个新的顶点声明内在方法
				/// </summary>
				/// <param name="decl">顶点声明</param>
				/// <returns></returns>
				protected virtual void DestroyVertexDeclarationImpl(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexBufferBindingImpl_CallBack_CVertexBufferBinding();

				protected createVertexBufferBindingImpl_CallBack_CVertexBufferBinding m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject);

				//// Internal method for creates a new EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
				/// <summary>
				/// 创建顶点缓存绑定内在方法
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点缓存绑定</returns>
				protected virtual EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBindingImpl_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Function()
				{
					EarthView.World.Graphic.VertexBufferBinding csret=CreateVertexBufferBindingImpl();
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(IntPtr pNativeObject);

				//// Internal method for creates a new EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
				/// <summary>
				/// 创建顶点缓存绑定内在方法
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点缓存绑定</returns>
				protected virtual EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBindingImpl()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding(IntPtr binding);

				protected destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject, IntPtr binding);

				//// Internal method for destroys a EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
				/// <summary>
				/// 销毁顶点缓存绑定内在方法
				/// </summary>
				/// <param name="binding">顶点缓存绑定</param>
				/// <returns></returns>
				protected virtual void DestroyVertexBufferBindingImpl_NoVirtual(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_NoVirtual(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Function(IntPtr binding)
				{
					EarthView.World.Graphic.VertexBufferBinding csobj_binding = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_binding.BindNativeObject(binding,"CVertexBufferBinding");
					csobj_binding.Delegate = true;
					IClassFactory csobj_bindingClassFactory = GlobalClassFactoryMap.Get(csobj_binding.GetCppInstanceTypeName());
					if (csobj_bindingClassFactory != null)
					{
						csobj_binding.Delegate = true;
						csobj_binding = csobj_bindingClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csobj_binding.BindNativeObject(binding, "CVertexBufferBinding");
						csobj_binding.Delegate = true;
					}
					
					DestroyVertexBufferBindingImpl(csobj_binding);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(IntPtr pNativeObject, IntPtr binding);

				//// Internal method for destroys a EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
				/// <summary>
				/// 销毁顶点缓存绑定内在方法
				/// </summary>
				/// <param name="binding">顶点缓存绑定</param>
				/// <returns></returns>
				protected virtual void DestroyVertexBufferBindingImpl(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
				}

				public enum BUFFERLICENSETYPE
				{
								BLT_MANUAL_RELEASE,
								BLT_AUTOMATIC_RELEASE
				
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer);

				protected makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建一个新缓存作为一个资源的复制
				/// </summary>
				/// <param name="source">资源</param>
				/// <param name="usage">缓存用法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				protected virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr MakeBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_NoVirtual(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Function(IntPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_source = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_source.BindNativeObject(source,"CHardwareVertexBufferSharedPtr");
					csobj_source.Delegate = true;
					IClassFactory csobj_sourceClassFactory = GlobalClassFactoryMap.Get(csobj_source.GetCppInstanceTypeName());
					if (csobj_sourceClassFactory != null)
					{
						csobj_source.Delegate = true;
						csobj_source = csobj_sourceClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_source.BindNativeObject(source, "CHardwareVertexBufferSharedPtr");
						csobj_source.Delegate = true;
					}
					
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csret=MakeBufferCopy(csobj_source, usage, useShadowBuffer);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建一个新缓存作为一个资源的复制
				/// </summary>
				/// <param name="source">资源</param>
				/// <param name="usage">缓存用法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				protected virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr MakeBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public HardwareBufferManagerBase() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHardwareBufferManagerBaseProxy", null);
					if (!"EarthView.World.Graphic.HardwareBufferManagerBase".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer);

				protected createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Function(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csret=CreateVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				protected createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Function(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csret=CreateVertexBuffer(vertexSize, numVerts, usage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer);

				protected createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件索引缓存
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>索引缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Function(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csret=CreateIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件索引缓存
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>索引缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				protected createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件索引缓存
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓冲器使用方法</param>
				/// <returns>索引缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Function(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csret=CreateIndexBuffer(itype, numIndexes, usage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件索引缓存
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓冲器使用方法</param>
				/// <returns>索引缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr();

				protected createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建渲染到顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染到顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Function()
				{
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csret=CreateRenderToVertexBuffer();
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pNativeObject);

				/// <summary>
				/// 创建渲染到顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染到顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexDeclaration_CallBack_CVertexDeclaration();

				protected createVertexDeclaration_CallBack_CVertexDeclaration m_createVertexDeclaration_CallBack_CVertexDeclaration;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建硬件顶点声明
				/// </summary>
				/// <param =""></param>
				/// <returns>顶点声明</returns>
				public virtual EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Function()
				{
					EarthView.World.Graphic.VertexDeclaration csret=CreateVertexDeclaration();
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(IntPtr pNativeObject);

				/// <summary>
				/// 创建硬件顶点声明
				/// </summary>
				/// <param =""></param>
				/// <returns>顶点声明</returns>
				public virtual EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyVertexDeclaration_CallBack_void_CVertexDeclaration(IntPtr decl);

				protected destroyVertexDeclaration_CallBack_void_CVertexDeclaration m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(IntPtr pNativeObject, IntPtr decl);

				/// <summary>
				/// 销毁硬件顶点声明
				/// </summary>
				/// <param ="decl">顶点声明</param>
				/// <returns></returns>
				public virtual void DestroyVertexDeclaration_NoVirtual(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Function(IntPtr decl)
				{
					EarthView.World.Graphic.VertexDeclaration csobj_decl = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_decl.BindNativeObject(decl,"CVertexDeclaration");
					csobj_decl.Delegate = true;
					IClassFactory csobj_declClassFactory = GlobalClassFactoryMap.Get(csobj_decl.GetCppInstanceTypeName());
					if (csobj_declClassFactory != null)
					{
						csobj_decl.Delegate = true;
						csobj_decl = csobj_declClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csobj_decl.BindNativeObject(decl, "CVertexDeclaration");
						csobj_decl.Delegate = true;
					}
					
					DestroyVertexDeclaration(csobj_decl);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pNativeObject, IntPtr decl);

				/// <summary>
				/// 销毁硬件顶点声明
				/// </summary>
				/// <param ="decl">顶点声明</param>
				/// <returns></returns>
				public virtual void DestroyVertexDeclaration(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createVertexBufferBinding_CallBack_CVertexBufferBinding();

				protected createVertexBufferBinding_CallBack_CVertexBufferBinding m_createVertexBufferBinding_CallBack_CVertexBufferBinding;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建硬件顶点缓存绑定
				/// </summary>
				/// <param =""></param>
				/// <returns>顶点缓存绑定</returns>
				public virtual EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Function()
				{
					EarthView.World.Graphic.VertexBufferBinding csret=CreateVertexBufferBinding();
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(IntPtr pNativeObject);

				/// <summary>
				/// 创建硬件顶点缓存绑定
				/// </summary>
				/// <param =""></param>
				/// <returns>顶点缓存绑定</returns>
				public virtual EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding(IntPtr binding);

				protected destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject, IntPtr binding);

				/// <summary>
				/// 销毁硬件顶点缓存绑定
				/// </summary>
				/// <param ="binding">顶点缓存绑定</param>
				/// <returns></returns>
				public virtual void DestroyVertexBufferBinding_NoVirtual(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Function(IntPtr binding)
				{
					EarthView.World.Graphic.VertexBufferBinding csobj_binding = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_binding.BindNativeObject(binding,"CVertexBufferBinding");
					csobj_binding.Delegate = true;
					IClassFactory csobj_bindingClassFactory = GlobalClassFactoryMap.Get(csobj_binding.GetCppInstanceTypeName());
					if (csobj_bindingClassFactory != null)
					{
						csobj_binding.Delegate = true;
						csobj_binding = csobj_bindingClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csobj_binding.BindNativeObject(binding, "CVertexBufferBinding");
						csobj_binding.Delegate = true;
					}
					
					DestroyVertexBufferBinding(csobj_binding);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pNativeObject, IntPtr binding);

				/// <summary>
				/// 销毁硬件顶点缓存绑定
				/// </summary>
				/// <param ="binding">顶点缓存绑定</param>
				/// <returns></returns>
				public virtual void DestroyVertexBufferBinding(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr sourceBuffer, IntPtr copy);

				protected registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, IntPtr copy);

				/// <summary>
				/// 注册顶点缓存作为副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="copy">复制对象</param>
				/// <returns></returns>
				public virtual void RegisterVertexBufferSourceAndCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, object.Equals(copy, null) ? IntPtr.Zero : copy.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Function(IntPtr sourceBuffer, IntPtr copy)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_sourceBuffer = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sourceBuffer.BindNativeObject(sourceBuffer,"CHardwareVertexBufferSharedPtr");
					csobj_sourceBuffer.Delegate = true;
					IClassFactory csobj_sourceBufferClassFactory = GlobalClassFactoryMap.Get(csobj_sourceBuffer.GetCppInstanceTypeName());
					if (csobj_sourceBufferClassFactory != null)
					{
						csobj_sourceBuffer.Delegate = true;
						csobj_sourceBuffer = csobj_sourceBufferClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_sourceBuffer.BindNativeObject(sourceBuffer, "CHardwareVertexBufferSharedPtr");
						csobj_sourceBuffer.Delegate = true;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_copy = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_copy.BindNativeObject(copy,"CHardwareVertexBufferSharedPtr");
					csobj_copy.Delegate = true;
					IClassFactory csobj_copyClassFactory = GlobalClassFactoryMap.Get(csobj_copy.GetCppInstanceTypeName());
					if (csobj_copyClassFactory != null)
					{
						csobj_copy.Delegate = true;
						csobj_copy = csobj_copyClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_copy.BindNativeObject(copy, "CHardwareVertexBufferSharedPtr");
						csobj_copy.Delegate = true;
					}
					
					RegisterVertexBufferSourceAndCopy(csobj_sourceBuffer, csobj_copy);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr sourceBuffer, IntPtr copy);

				/// <summary>
				/// 注册顶点缓存作为副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="copy">复制对象</param>
				/// <returns></returns>
				public virtual void RegisterVertexBufferSourceAndCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, object.Equals(copy, null) ? IntPtr.Zero : copy.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, bool copyData);

				protected allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, byte copyData);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <param ="copyData">是否有副本数据</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject, Convert.ToByte(copyData));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Function(IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, bool copyData)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_sourceBuffer = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sourceBuffer.BindNativeObject(sourceBuffer,"CHardwareVertexBufferSharedPtr");
					csobj_sourceBuffer.Delegate = true;
					IClassFactory csobj_sourceBufferClassFactory = GlobalClassFactoryMap.Get(csobj_sourceBuffer.GetCppInstanceTypeName());
					if (csobj_sourceBufferClassFactory != null)
					{
						csobj_sourceBuffer.Delegate = true;
						csobj_sourceBuffer = csobj_sourceBufferClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_sourceBuffer.BindNativeObject(sourceBuffer, "CHardwareVertexBufferSharedPtr");
						csobj_sourceBuffer.Delegate = true;
					}
					EarthView.World.Graphic.HardwareBufferLicensee csobj_licensee = new EarthView.World.Graphic.HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_licensee.BindNativeObject(licensee,"CHardwareBufferLicensee");
					csobj_licensee.Delegate = true;
					IClassFactory csobj_licenseeClassFactory = GlobalClassFactoryMap.Get(csobj_licensee.GetCppInstanceTypeName());
					if (csobj_licenseeClassFactory != null)
					{
						csobj_licensee.Delegate = true;
						csobj_licensee = csobj_licenseeClassFactory.Create() as EarthView.World.Graphic.HardwareBufferLicensee;
						csobj_licensee.BindNativeObject(licensee, "CHardwareBufferLicensee");
						csobj_licensee.Delegate = true;
					}
					
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csret=AllocateVertexBufferCopy(csobj_sourceBuffer, licenseType, csobj_licensee, copyData);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, byte copyData);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <param ="copyData">是否有副本数据</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject, Convert.ToByte(copyData));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee);

				protected allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Function(IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_sourceBuffer = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sourceBuffer.BindNativeObject(sourceBuffer,"CHardwareVertexBufferSharedPtr");
					csobj_sourceBuffer.Delegate = true;
					IClassFactory csobj_sourceBufferClassFactory = GlobalClassFactoryMap.Get(csobj_sourceBuffer.GetCppInstanceTypeName());
					if (csobj_sourceBufferClassFactory != null)
					{
						csobj_sourceBuffer.Delegate = true;
						csobj_sourceBuffer = csobj_sourceBufferClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_sourceBuffer.BindNativeObject(sourceBuffer, "CHardwareVertexBufferSharedPtr");
						csobj_sourceBuffer.Delegate = true;
					}
					EarthView.World.Graphic.HardwareBufferLicensee csobj_licensee = new EarthView.World.Graphic.HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_licensee.BindNativeObject(licensee,"CHardwareBufferLicensee");
					csobj_licensee.Delegate = true;
					IClassFactory csobj_licenseeClassFactory = GlobalClassFactoryMap.Get(csobj_licensee.GetCppInstanceTypeName());
					if (csobj_licenseeClassFactory != null)
					{
						csobj_licensee.Delegate = true;
						csobj_licensee = csobj_licenseeClassFactory.Create() as EarthView.World.Graphic.HardwareBufferLicensee;
						csobj_licensee.BindNativeObject(licensee, "CHardwareBufferLicensee");
						csobj_licensee.Delegate = true;
					}
					
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csret=AllocateVertexBufferCopy(csobj_sourceBuffer, licenseType, csobj_licensee);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <returns>顶点缓存的共享信息</returns>
				public virtual EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr(IntPtr bufferCopy);

				protected releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr bufferCopy);

				/// <summary>
				/// 释放顶点缓存副本
				/// </summary>
				/// <param ="bufferCopy">缓存副本</param>
				/// <returns></returns>
				public virtual void ReleaseVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function(IntPtr bufferCopy)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_bufferCopy = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_bufferCopy.BindNativeObject(bufferCopy,"CHardwareVertexBufferSharedPtr");
					csobj_bufferCopy.Delegate = true;
					IClassFactory csobj_bufferCopyClassFactory = GlobalClassFactoryMap.Get(csobj_bufferCopy.GetCppInstanceTypeName());
					if (csobj_bufferCopyClassFactory != null)
					{
						csobj_bufferCopy.Delegate = true;
						csobj_bufferCopy = csobj_bufferCopyClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_bufferCopy.BindNativeObject(bufferCopy, "CHardwareVertexBufferSharedPtr");
						csobj_bufferCopy.Delegate = true;
					}
					
					ReleaseVertexBufferCopy(csobj_bufferCopy);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr bufferCopy);

				/// <summary>
				/// 释放顶点缓存副本
				/// </summary>
				/// <param ="bufferCopy">缓存副本</param>
				/// <returns></returns>
				public virtual void ReleaseVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr(IntPtr bufferCopy);

				protected touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr bufferCopy);

				public virtual void TouchVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function(IntPtr bufferCopy)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_bufferCopy = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_bufferCopy.BindNativeObject(bufferCopy,"CHardwareVertexBufferSharedPtr");
					csobj_bufferCopy.Delegate = true;
					IClassFactory csobj_bufferCopyClassFactory = GlobalClassFactoryMap.Get(csobj_bufferCopy.GetCppInstanceTypeName());
					if (csobj_bufferCopyClassFactory != null)
					{
						csobj_bufferCopy.Delegate = true;
						csobj_bufferCopy = csobj_bufferCopyClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_bufferCopy.BindNativeObject(bufferCopy, "CHardwareVertexBufferSharedPtr");
						csobj_bufferCopy.Delegate = true;
					}
					
					TouchVertexBufferCopy(csobj_bufferCopy);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr bufferCopy);

				public virtual void TouchVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _freeUnusedBufferCopies_CallBack_void();

				protected _freeUnusedBufferCopies_CallBack_void m__freeUnusedBufferCopies_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 释放未使用的缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public virtual void _freeUnusedBufferCopies_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Function()
				{
					_freeUnusedBufferCopies();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(IntPtr pNativeObject);

				/// <summary>
				/// 释放未使用的缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public virtual void _freeUnusedBufferCopies()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _releaseBufferCopies_CallBack_void_ev_bool(bool forceFreeUnused);

				protected _releaseBufferCopies_CallBack_void_ev_bool m__releaseBufferCopies_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte forceFreeUnused);

				///virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false);
				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
				/// <returns></returns>
				public virtual void _releaseBufferCopies_NoVirtual(bool forceFreeUnused)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(forceFreeUnused));
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Function(bool forceFreeUnused)
				{
					_releaseBufferCopies(forceFreeUnused);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(IntPtr pNativeObject, byte forceFreeUnused);

				///virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false);
				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
				/// <returns></returns>
				public virtual void _releaseBufferCopies(bool forceFreeUnused)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(this.NativeObject, Convert.ToByte(forceFreeUnused));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _releaseBufferCopies_CallBack_void();

				protected _releaseBufferCopies_CallBack_void m__releaseBufferCopies_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public virtual void _releaseBufferCopies_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Function()
				{
					_releaseBufferCopies();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(IntPtr pNativeObject);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public virtual void _releaseBufferCopies()
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr(IntPtr sourceBuffer);

				protected _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <returns></returns>
				public virtual void _forceReleaseBufferCopies_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Function(IntPtr sourceBuffer)
				{
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csobj_sourceBuffer = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sourceBuffer.BindNativeObject(sourceBuffer,"CHardwareVertexBufferSharedPtr");
					csobj_sourceBuffer.Delegate = true;
					IClassFactory csobj_sourceBufferClassFactory = GlobalClassFactoryMap.Get(csobj_sourceBuffer.GetCppInstanceTypeName());
					if (csobj_sourceBufferClassFactory != null)
					{
						csobj_sourceBuffer.Delegate = true;
						csobj_sourceBuffer = csobj_sourceBufferClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csobj_sourceBuffer.BindNativeObject(sourceBuffer, "CHardwareVertexBufferSharedPtr");
						csobj_sourceBuffer.Delegate = true;
					}
					
					_forceReleaseBufferCopies(csobj_sourceBuffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <returns></returns>
				public virtual void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer(IntPtr sourceBuffer);

				protected _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存（顶点缓存）</param>
				/// <returns></returns>
				public virtual void _forceReleaseBufferCopies_NoVirtual(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Function(IntPtr sourceBuffer)
				{
					EarthView.World.Graphic.HardwareVertexBuffer csobj_sourceBuffer = new EarthView.World.Graphic.HardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sourceBuffer.BindNativeObject(sourceBuffer,"CHardwareVertexBuffer");
					csobj_sourceBuffer.Delegate = true;
					IClassFactory csobj_sourceBufferClassFactory = GlobalClassFactoryMap.Get(csobj_sourceBuffer.GetCppInstanceTypeName());
					if (csobj_sourceBufferClassFactory != null)
					{
						csobj_sourceBuffer.Delegate = true;
						csobj_sourceBuffer = csobj_sourceBufferClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBuffer;
						csobj_sourceBuffer.BindNativeObject(sourceBuffer, "CHardwareVertexBuffer");
						csobj_sourceBuffer.Delegate = true;
					}
					
					_forceReleaseBufferCopies(csobj_sourceBuffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存（顶点缓存）</param>
				/// <returns></returns>
				public virtual void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(IntPtr pNativeObject, IntPtr buf);

				//// Notification that a hardware vertex buffer has been destroyed
				/// <summary>
				/// 通知定点缓存销毁
				/// </summary>
				/// <param ="buf">硬件顶点缓存（顶点缓存）</param>
				/// <returns></returns>
				public void _notifyVertexBufferDestroyed(EarthView.World.Graphic.HardwareVertexBuffer buf)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(this.NativeObject, object.Equals(buf, null) ? IntPtr.Zero : buf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManagerBase__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(IntPtr pNativeObject, IntPtr buf);

				//// Notification that a hardware index buffer has been destroyed
				/// <summary>
				/// 通知索引缓存销毁
				/// </summary>
				/// <param ="buf">硬件索引缓存</param>
				/// <returns></returns>
				public void _notifyIndexBufferDestroyed(EarthView.World.Graphic.HardwareIndexBuffer buf)
				{
					EarthView_World_Graphic_CHardwareBufferManagerBase__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(this.NativeObject, object.Equals(buf, null) ? IntPtr.Zero : buf.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferManagerBase", new HardwareBufferManagerBaseClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferManagerBaseProxy", new HardwareBufferManagerBaseClassFactory());

				public HardwareBufferManagerBase(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(IntPtr pObject, destroyAllDeclarations_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(IntPtr pObject, destroyAllBindings_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(IntPtr pObject, createVertexDeclarationImpl_CallBack_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(IntPtr pObject, createVertexBufferBindingImpl_CallBack_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr pObject, makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pObject, createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(IntPtr pObject, createVertexDeclaration_CallBack_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclaration_CallBack_void_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(IntPtr pObject, createVertexBufferBinding_CallBack_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pObject, registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(IntPtr pObject, _freeUnusedBufferCopies_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(IntPtr pObject, _releaseBufferCopies_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(IntPtr pObject, _releaseBufferCopies_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_destroyAllDeclarations_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Function;
						GC.KeepAlive(m_destroyAllDeclarations_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(this.NativeObject, m_destroyAllDeclarations_CallBack_void);
						m_destroyAllBindings_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Function;
						GC.KeepAlive(m_destroyAllBindings_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(this.NativeObject, m_destroyAllBindings_CallBack_void);
						m_createVertexDeclarationImpl_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(this.NativeObject, m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Function;
						GC.KeepAlive(m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.NativeObject, m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject, m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						m_createVertexDeclaration_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclaration_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(this.NativeObject, m_createVertexDeclaration_CallBack_CVertexDeclaration);
						m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBinding_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__freeUnusedBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Function;
						GC.KeepAlive(m__freeUnusedBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(this.NativeObject, m__freeUnusedBufferCopies_CallBack_void);
						m__releaseBufferCopies_CallBack_void_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(this.NativeObject, m__releaseBufferCopies_CallBack_void_ev_bool);
						m__releaseBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(this.NativeObject, m__releaseBufferCopies_CallBack_void);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
					}
				}
				public static HardwareBufferManagerBase FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareBufferManagerBase obj = baseObj as  HardwareBufferManagerBase;
					if (object.Equals(obj, null))
					{
						obj = new HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareBufferManagerBase");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareBufferManagerBaseClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareBufferManagerBase emptyInstance = new HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class HardwareBufferManager : EarthView.World.Graphic.HardwareBufferManagerBase
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="imp">硬件缓存管理基础</param>
				/// <returns></returns>
				public HardwareBufferManager(EarthView.World.Graphic.HardwareBufferManagerBase ref_imp) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_imp = new BasePtr(ref_imp);
					list.Add("ref_imp", valueref_imp.PtrVal);
					Create("CHardwareBufferManagerProxy", list);
					if (!"EarthView.World.Graphic.HardwareBufferManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>硬件顶点缓存共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>硬件顶点缓存共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns>硬件顶点缓存共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns>硬件顶点缓存共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建索引6缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>硬件索引缓存共享信息</returns>
				public new EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建索引6缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>硬件索引缓存共享信息</returns>
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns>硬件索引缓存共享信息</returns>
				public new EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建顶点缓存
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns>硬件索引缓存共享信息</returns>
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建渲染到顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染到顶点缓存共享信息</returns>
				public new EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pNativeObject);

				/// <summary>
				/// 创建渲染到顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染到顶点缓存共享信息</returns>
				public override EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建顶点声明
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明信息</returns>
				public new EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(IntPtr pNativeObject);

				/// <summary>
				/// 创建顶点声明
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明信息</returns>
				public override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexDeclaration csObj = new EarthView.World.Graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexDeclaration");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexDeclaration;
						csObj.BindNativeObject(__ptr, "CVertexDeclaration");
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(IntPtr pNativeObject, IntPtr decl);

				/// <summary>
				/// 销毁顶点声明
				/// </summary>
				/// <param name="decl">顶点声明</param>
				/// <returns></returns>
				public new void DestroyVertexDeclaration_NoVirtual(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pNativeObject, IntPtr decl);

				/// <summary>
				/// 销毁顶点声明
				/// </summary>
				/// <param name="decl">顶点声明</param>
				/// <returns></returns>
				public override void DestroyVertexDeclaration(EarthView.World.Graphic.VertexDeclaration decl)
				{
					EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, object.Equals(decl, null) ? IntPtr.Zero : decl.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建顶点缓存绑定
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明绑定信息</returns>
				public new EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(IntPtr pNativeObject);

				/// <summary>
				/// 创建顶点缓存绑定
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点声明绑定信息</returns>
				public override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.VertexBufferBinding csObj = new EarthView.World.Graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.VertexBufferBinding;
						csObj.BindNativeObject(__ptr, "CVertexBufferBinding");
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(IntPtr pNativeObject, IntPtr binding);

				/// <summary>
				/// 销毁顶点缓存绑定
				/// </summary>
				/// <param name="binding">顶点缓存绑定信息</param>
				/// <returns></returns>
				public new void DestroyVertexBufferBinding_NoVirtual(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pNativeObject, IntPtr binding);

				/// <summary>
				/// 销毁顶点缓存绑定
				/// </summary>
				/// <param name="binding">顶点缓存绑定信息</param>
				/// <returns></returns>
				public override void DestroyVertexBufferBinding(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, object.Equals(binding, null) ? IntPtr.Zero : binding.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, IntPtr copy);

				/// <summary>
				/// 注册顶点缓存资源和副本
				/// </summary>
				/// <param name="sourceBuffer">资源缓存</param>
				/// <param name="copy">副本</param>
				/// <returns></returns>
				public new void RegisterVertexBufferSourceAndCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, object.Equals(copy, null) ? IntPtr.Zero : copy.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr sourceBuffer, IntPtr copy);

				/// <summary>
				/// 注册顶点缓存资源和副本
				/// </summary>
				/// <param name="sourceBuffer">资源缓存</param>
				/// <param name="copy">副本</param>
				/// <returns></returns>
				public override void RegisterVertexBufferSourceAndCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, object.Equals(copy, null) ? IntPtr.Zero : copy.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, byte copyData);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <param ="copyData">是否有副本数据</param>
				/// <returns>顶点缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject, Convert.ToByte(copyData));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee, byte copyData);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <param ="copyData">是否有副本数据</param>
				/// <returns>顶点缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject, Convert.ToByte(copyData));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <returns>顶点缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pNativeObject, IntPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, IntPtr licensee);

				/// <summary>
				/// 分配顶点缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <param ="licenseType">缓存许可类型</param>
				/// <param ="licensee">硬件缓存许可</param>
				/// <returns>顶点缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject, licenseType, object.Equals(licensee, null) ? IntPtr.Zero : licensee.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr bufferCopy);

				/// <summary>
				/// 释放顶点缓存副本
				/// </summary>
				/// <param ="bufferCopy">缓存副本</param>
				/// <returns></returns>
				public new void ReleaseVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr bufferCopy);

				/// <summary>
				/// 释放顶点缓存副本
				/// </summary>
				/// <param ="bufferCopy">缓存副本</param>
				/// <returns></returns>
				public override void ReleaseVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr bufferCopy);

				public new void TouchVertexBufferCopy_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr bufferCopy);

				public override void TouchVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(bufferCopy, null) ? IntPtr.Zero : bufferCopy.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 释放未使用的缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public new void _freeUnusedBufferCopies_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(IntPtr pNativeObject);

				/// <summary>
				/// 释放未使用的缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public override void _freeUnusedBufferCopies()
				{
					EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte forceFreeUnused);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
				/// <returns></returns>
				public new void _releaseBufferCopies_NoVirtual(bool forceFreeUnused)
				{
					EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(forceFreeUnused));
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(IntPtr pNativeObject, byte forceFreeUnused);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
				/// <returns></returns>
				public override void _releaseBufferCopies(bool forceFreeUnused)
				{
					EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(this.NativeObject, Convert.ToByte(forceFreeUnused));
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public new void _releaseBufferCopies_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(IntPtr pNativeObject);

				/// <summary>
				/// 释放缓存副本
				/// </summary>
				/// <param =""></param>
				/// <returns></returns>
				public override void _releaseBufferCopies()
				{
					EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <returns></returns>
				public new void _forceReleaseBufferCopies_NoVirtual(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存</param>
				/// <returns></returns>
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存(顶点缓存)</param>
				/// <returns></returns>
				public new void _forceReleaseBufferCopies_NoVirtual(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pNativeObject, IntPtr sourceBuffer);

				/// <summary>
				/// 强制释放缓存副本
				/// </summary>
				/// <param ="sourceBuffer">资源缓存(顶点缓存)</param>
				/// <returns></returns>
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, object.Equals(sourceBuffer, null) ? IntPtr.Zero : sourceBuffer.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(IntPtr pNativeObject, IntPtr buf);

				/// <summary>
				/// 通知定点缓存销毁
				/// </summary>
				/// <param ="buf">硬件顶点缓存（顶点缓存）</param>
				/// <returns></returns>
				public void _notifyVertexBufferDestroyed(EarthView.World.Graphic.HardwareVertexBuffer buf)
				{
					EarthView_World_Graphic_CHardwareBufferManager__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(this.NativeObject, object.Equals(buf, null) ? IntPtr.Zero : buf.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBufferManager__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(IntPtr pNativeObject, IntPtr buf);

				/// <summary>
				/// 通知索引缓存销毁
				/// </summary>
				/// <param ="buf">硬件索引缓存</param>
				/// <returns></returns>
				public void _notifyIndexBufferDestroyed(EarthView.World.Graphic.HardwareIndexBuffer buf)
				{
					EarthView_World_Graphic_CHardwareBufferManager__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(this.NativeObject, object.Equals(buf, null) ? IntPtr.Zero : buf.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_getSingleton_CHardwareBufferManager();

				/// <summary>
				/// 单例（引用）
				/// </summary>
				/// <param =""></param>
				/// <returns>硬件缓存管理信息</returns>
				public static EarthView.World.Graphic.HardwareBufferManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_getSingleton_CHardwareBufferManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareBufferManager csObj = new EarthView.World.Graphic.HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareBufferManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareBufferManager;
						csObj.BindNativeObject(__ptr, "CHardwareBufferManager");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBufferManager_getSingletonPtr_CHardwareBufferManager();

				/// <summary>
				/// 单例（指针）
				/// </summary>
				/// <param =""></param>
				/// <returns>硬件缓存管理信息</returns>
				public static EarthView.World.Graphic.HardwareBufferManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBufferManager_getSingletonPtr_CHardwareBufferManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareBufferManager csObj = new EarthView.World.Graphic.HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareBufferManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareBufferManager;
						csObj.BindNativeObject(__ptr, "CHardwareBufferManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareBufferManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferManager", new HardwareBufferManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferManagerProxy", new HardwareBufferManagerClassFactory());

				public HardwareBufferManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void(IntPtr pObject, destroyAllDeclarations_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void(IntPtr pObject, destroyAllBindings_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(IntPtr pObject, createVertexDeclarationImpl_CallBack_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(IntPtr pObject, createVertexBufferBindingImpl_CallBack_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr pObject, makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pObject, createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(IntPtr pObject, createVertexDeclaration_CallBack_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclaration_CallBack_void_CVertexDeclaration pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(IntPtr pObject, createVertexBufferBinding_CallBack_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pObject, registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(IntPtr pObject, _freeUnusedBufferCopies_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(IntPtr pObject, _releaseBufferCopies_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(IntPtr pObject, _releaseBufferCopies_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_destroyAllDeclarations_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Function;
						GC.KeepAlive(m_destroyAllDeclarations_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void(this.NativeObject, m_destroyAllDeclarations_CallBack_void);
						m_destroyAllBindings_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Function;
						GC.KeepAlive(m_destroyAllBindings_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void(this.NativeObject, m_destroyAllBindings_CallBack_void);
						m_createVertexDeclarationImpl_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(this.NativeObject, m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Function;
						GC.KeepAlive(m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.NativeObject, m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject, m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						m_createVertexDeclaration_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclaration_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(this.NativeObject, m_createVertexDeclaration_CallBack_CVertexDeclaration);
						m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBinding_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__freeUnusedBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Function;
						GC.KeepAlive(m__freeUnusedBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(this.NativeObject, m__freeUnusedBufferCopies_CallBack_void);
						m__releaseBufferCopies_CallBack_void_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(this.NativeObject, m__releaseBufferCopies_CallBack_void_ev_bool);
						m__releaseBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(this.NativeObject, m__releaseBufferCopies_CallBack_void);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
					}
				}
				protected override void DestroyAllDeclarations()
				{
					base.DestroyAllDeclarations_NoVirtual();
				}
				protected override void DestroyAllBindings()
				{
					base.DestroyAllBindings_NoVirtual();
				}
				protected override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclarationImpl()
				{
					return base.CreateVertexDeclarationImpl_NoVirtual();
				}
				protected override void DestroyVertexDeclarationImpl(EarthView.World.Graphic.VertexDeclaration decl)
				{
					base.DestroyVertexDeclarationImpl_NoVirtual(decl);
				}
				protected override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBindingImpl()
				{
					return base.CreateVertexBufferBindingImpl_NoVirtual();
				}
				protected override void DestroyVertexBufferBindingImpl(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					base.DestroyVertexBufferBindingImpl_NoVirtual(binding);
				}
				protected override EarthView.World.Graphic.HardwareVertexBufferSharedPtr MakeBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					return base.MakeBufferCopy_NoVirtual(source,usage,useShadowBuffer);
				}
				public static HardwareBufferManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareBufferManager obj = baseObj as  HardwareBufferManager;
					if (object.Equals(obj, null))
					{
						obj = new HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareBufferManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareBufferManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareBufferManager emptyInstance = new HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
