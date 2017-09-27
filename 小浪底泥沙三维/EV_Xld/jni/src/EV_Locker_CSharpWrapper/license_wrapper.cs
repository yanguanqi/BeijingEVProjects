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
		namespace License
		{
			/// <summary>
			/// 许可结果枚举
			/// <summary>
			public enum EVLICENSERESULT
			{
						LR_INIT_SUCCESS = 0,
						LR_INIT_FAIL = 1,
						LR_INIT_HAS_MODULE = 2,
						LR_UNINIT_SUCCESS = 3,
						LR_UNINIT_FAIL = 4,
						LR_UNINIT_NOT_MODULE = 5
			
			}

			/// <summary>
			/// 许可状态类型
			/// <summary>
			public enum EVLICENSESTATUSTYPE
			{
						LS_NOT_MODULE = 0,
						LS_VALID = 1,
						LS_INVALID = 2,
						LS_EXPIRED = 3,
						LS_NOT_LICENSE = 4,
						LS_NOT_KEY = 5
			
			}

			/// <summary>
			/// 许可模块
			/// <summary>
			public enum EVLICENSEMODULE
			{
						LM_UNKNOWN = 0,
						LM_EV_GLOBECLIENT_RUNTIME = 1,
						LM_EV_GLOBE_SDK_RUNTIME = LM_EV_GLOBECLIENT_RUNTIME,
						LM_EV_GLOBECLIENT_DEVELOPE = 2,
						LM_EV_GLOBE_SDK_DEVELOPE = LM_EV_GLOBECLIENT_DEVELOPE,
						LM_EV_GLOBE_DESKTOP = 3,
						LM_EV_SERVER = 100,
						LM_EV_WEBPLUGIN = 110,
						LM_EV_CREATOR = 200,
						LM_EV_CUSTOM = 1000
			
			}

			/// <summary>
			/// 许可对象
			/// <summary>
			public class License : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// <summary>
				public License() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLicense",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_License_CLicense_initialize_EVLicenseResult_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 注册模块许可
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>许可结果枚举</returns>
				public EarthView.World.License.EVLICENSERESULT Initialize(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					int ret=EarthView_World_License_CLicense_initialize_EVLicenseResult_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					return (EarthView.World.License.EVLICENSERESULT)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_License_CLicense_uninitialize_EVLicenseResult_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 反注册模块许可
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>许可结果枚举</returns>
				public EarthView.World.License.EVLICENSERESULT Uninitialize(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					int ret=EarthView_World_License_CLicense_uninitialize_EVLicenseResult_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					return (EarthView.World.License.EVLICENSERESULT)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_License_CLicense_getModuleStatus_EVLicenseStatusType_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 获取模块初始化状态
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>模块状态</returns>
				public EarthView.World.License.EVLICENSESTATUSTYPE GetModuleStatus(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					int ret=EarthView_World_License_CLicense_getModuleStatus_EVLicenseStatusType_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					return (EarthView.World.License.EVLICENSESTATUSTYPE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_License_CLicense_getExpiredDate_EVString_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 获取模块过期时间
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>过期时间字符串</returns>
				public string GetExpiredDate(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					IntPtr __ptr = EarthView_World_License_CLicense_getExpiredDate_EVString_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_License_CLicense_isOffical_ev_bool_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 是否正式版
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>正式版，true；试用版，false</returns>
				public bool IsOffical(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					byte ret=EarthView_World_License_CLicense_isOffical_ev_bool_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_License_CLicense_getModuleError_EVString_EVLicenseModule_EVString(IntPtr pNativeObject, EarthView.World.License.EVLICENSEMODULE module, string value);

				/// <summary>
				/// 获取模块错误信息
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>最后一次错误描述</returns>
				public string GetModuleError(EarthView.World.License.EVLICENSEMODULE module, string value)
				{
					IntPtr __ptr = EarthView_World_License_CLicense_getModuleError_EVString_EVLicenseModule_EVString(this.NativeObject, module, value);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker_d.dll");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker_d.so");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp_d.so");

					#else 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker_d.dll");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker.dll");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp.dll");

					#elif Linux 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker.so");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp.so");

					#else 
						private static bool bLoadLicense = LoadDll.Load("EV_Locker.dll");
						private static bool csbLoadLicense = LoadDll.Load("EV_Locker_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::License::CLicense", new LicenseClassFactory());

				public License(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static License FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					License obj = baseObj as  License;
					if (object.Equals(obj, null))
					{
						obj = new License(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLicense");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LicenseClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					License emptyInstance = new License(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			///  网络许可对象
			/// <summary>
			public class WebLicense : EarthView.World.Core.AllocatedObject
			{
				public WebLicense() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CWebLicense",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Locker_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_License_CWebLicense_getModuleStatus_EVLicenseStatusType_EVString_EVString_EVString(IntPtr pNativeObject, string ip, string port, string module);

				public EarthView.World.License.EVLICENSESTATUSTYPE GetModuleStatus(string ip, string port, string module)
				{
					int ret=EarthView_World_License_CWebLicense_getModuleStatus_EVLicenseStatusType_EVString_EVString_EVString(this.NativeObject, ip, port, module);
					
					return (EarthView.World.License.EVLICENSESTATUSTYPE)ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker_d.dll");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker_d.so");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp_d.so");

					#else 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker_d.dll");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker.dll");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp.dll");

					#elif Linux 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker.so");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp.so");

					#else 
						private static bool bLoadWebLicense = LoadDll.Load("EV_Locker.dll");
						private static bool csbLoadWebLicense = LoadDll.Load("EV_Locker_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::License::CWebLicense", new WebLicenseClassFactory());

				public WebLicense(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static WebLicense FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					WebLicense obj = baseObj as  WebLicense;
					if (object.Equals(obj, null))
					{
						obj = new WebLicense(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWebLicense");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WebLicenseClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					WebLicense emptyInstance = new WebLicense(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
