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
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标管理器
			/// </summary>
			public class DynamicModelObjectManager : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 动态目标集合
				/// </summary>
				public class DynamicModelObjectMap : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 动态目标哈希表构造函数
					/// </summary>
					public DynamicModelObjectMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDynamicModelObjectMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_push_ev_bool_EVString_CDynamicModelObject(IntPtr pNativeObject, string key, ref IntPtr val);

					/// <summary>
					/// 压入指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <param name="val">值对象</param>
					/// <returns>是否成功</returns>
					public bool Push(string key, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject val)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_push_ev_bool_EVString_CDynamicModelObject(this.NativeObject, key, ref val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 获取是否存在指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>是否存在指定键值对象</returns>
					public bool Exist(string key)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_exist_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_get_CDynamicModelObject_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject Get(string key)
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_get_CDynamicModelObject_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
							csObj.BindNativeObject(__ptr, "CDynamicModelObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_erase_void_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 移除指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					public void Erase(string key)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_erase_void_EVString(this.NativeObject, key);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回对象个数
					/// </summary>
					/// <returns>对象个数</returns>
					public ulong Size()
					{
						ulong ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有对象
					/// </summary>
					public void Clear()
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取集合是否为空
					/// </summary>
					/// <returns>是否为空</returns>
					public bool Empty()
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap", new DynamicModelObjectMapClassFactory());

					public DynamicModelObjectMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DynamicModelObjectMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicModelObjectMap obj = baseObj as  DynamicModelObjectMap;
						if (object.Equals(obj, null))
						{
							obj = new DynamicModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObjectMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicModelObjectMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicModelObjectMap emptyInstance = new DynamicModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标键值对
				/// </summary>
				public class DynamicModelObjectIteratorPair : EarthView.World.Core.AllocatedObject
				{
					private string firstField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first( IntPtr pObject, string value );

					public 					string First
					{
						get
						{
							IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							firstField = value;
							Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first( this.NativeObject,value );
						}
					}

					private EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject secondField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second( IntPtr pObject, IntPtr value );

					public 					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject Second
					{
						get
						{
							IntPtr __ptr = Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(secondField, null)){
								secondField.NativeObject = __ptr;
								return secondField;
							}
							EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDynamicModelObject");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
								csObj.BindNativeObject(__ptr, "CDynamicModelObject");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							secondField = value;
							Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					/// <summary>
					/// 动态目标键值对构造函数
					/// </summary>
					public DynamicModelObjectIteratorPair() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDynamicModelObjectIteratorPair",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectIteratorPair = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair", new DynamicModelObjectIteratorPairClassFactory());

					public DynamicModelObjectIteratorPair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DynamicModelObjectIteratorPair FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicModelObjectIteratorPair obj = baseObj as  DynamicModelObjectIteratorPair;
						if (object.Equals(obj, null))
						{
							obj = new DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObjectIteratorPair");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicModelObjectIteratorPairClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicModelObjectIteratorPair emptyInstance = new DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标遍历对象
				/// </summary>
				public class DynamicModelObjectIterator : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 动态目标遍历对象构造函数
					/// </summary>
					/// <param name="lst">构造参数</param>
					public DynamicModelObjectIterator(ref EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("CDynamicModelObjectIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 动态目标遍历对象构造函数
					/// </summary>
					/// <param name="other">构造参数</param>
					public DynamicModelObjectIterator(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("CDynamicModelObjectIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否存在下一个元素
					/// </summary>
					/// <param name="lst">构造参数</param>
					/// <returns>true为存在，false为不存在</returns>
					public bool HasMoreElements()
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_hasMoreElements_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_moveNext_void(IntPtr pNativeObject);

					/// <summary>
					/// 移动到下一个元素
					/// </summary>
					/// <param name="lst">构造参数</param>
					public void MoveNext()
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_moveNext_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 获取下一个元素键值
					/// </summary>
					/// <returns>下一个元素键值</returns>
					public ushort NextKey()
					{
						ushort ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextKey_ev_uint16(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValue_CDynamicModelObject(IntPtr pNativeObject);

					/// <summary>
					/// 获取下一个元素
					/// </summary>
					/// <returns>下一个元素</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject NextValue()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValue_CDynamicModelObject(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
							csObj.BindNativeObject(__ptr, "CDynamicModelObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr[] EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValuePtr_CDynamicModelObject(IntPtr pNativeObject);

					/// <summary>
					/// 获取下一个元素智能指针
					/// </summary>
					/// <returns>下一个元素智能指针</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValuePtr_CDynamicModelObject(this.NativeObject);
						
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject[] csObjs=new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CDynamicModelObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
							csObj.BindNativeObject(ret[i], "CDynamicModelObject");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_next_CDynamicModelObject(IntPtr pNativeObject);

					/// <summary>
					/// 获取下一个元素
					/// </summary>
					/// <returns>下一个元素</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject Next()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_next_CDynamicModelObject(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
							csObj.BindNativeObject(__ptr, "CDynamicModelObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getBegin_CDynamicModelObjectIteratorPair(IntPtr pNativeObject);

					/// <summary>
					/// 获取起始对象键值对
					/// </summary>
					/// <returns>起始对象键值对</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair GetBegin()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getBegin_CDynamicModelObjectIteratorPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair;
							csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getEnd_CDynamicModelObjectIteratorPair(IntPtr pNativeObject);

					/// <summary>
					/// 获取终止对象键值对
					/// </summary>
					/// <returns>终止对象键值对</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair GetEnd()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getEnd_CDynamicModelObjectIteratorPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair;
							csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getCurrent_CDynamicModelObjectIteratorPair(IntPtr pNativeObject);

					/// <summary>
					/// 获取当前对象键值对
					/// </summary>
					/// <returns>当前对象键值对</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair GetCurrent()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getCurrent_CDynamicModelObjectIteratorPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPair;
							csObj.BindNativeObject(__ptr, "CDynamicModelObjectIteratorPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicModelObjectIterator = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator", new DynamicModelObjectIteratorClassFactory());

					public DynamicModelObjectIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DynamicModelObjectIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicModelObjectIterator obj = baseObj as  DynamicModelObjectIterator;
						if (object.Equals(obj, null))
						{
							obj = new DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObjectIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicModelObjectIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicModelObjectIterator emptyInstance = new DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标管理器构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_globeControl">三维场景核心控件</param>
				public DynamicModelObjectManager(string name, EarthView.World.Graphic.SceneManager ref_sceneManager, EarthView.World.Spatial3D.Controls.GlobeControl ref_globeControl) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_sceneManager = new BasePtr(ref_sceneManager);
					list.Add("ref_sceneManager", valueref_sceneManager.PtrVal);
					BasePtr valueref_globeControl = new BasePtr(ref_globeControl);
					list.Add("ref_globeControl", valueref_globeControl.PtrVal);
					Create("CDynamicModelObjectManagerProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType, byte immediateRefresh);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType, bool immediateRefresh)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, meshName, modelType, Convert.ToByte(immediateRefresh));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool_ev_bool(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType, byte immediateRefresh, byte onLineModeEnable);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType, bool immediateRefresh, bool onLineModeEnable)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool_ev_bool(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, meshName, modelType, Convert.ToByte(immediateRefresh), Convert.ToByte(onLineModeEnable));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, string meshName, EarthView.World.Spatial3D.MODELTYPE modelType)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, meshName, modelType);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, ref uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, ref meshIndex, modelType);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool_ev_bool(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, ref uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType, byte immediateRefresh, byte onLineModeEnable);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType, bool immediateRefresh, bool onLineModeEnable)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool_ev_bool(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, ref meshIndex, modelType, Convert.ToByte(immediateRefresh), Convert.ToByte(onLineModeEnable));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool(IntPtr pNativeObject, IntPtr ref_modelDataSource, string name, ref uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType, byte immediateRefresh);

				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				public bool AddDynamicModelObject(EarthView.World.Spatial.GeoDataset.Idatasource ref_modelDataSource, string name, uint meshIndex, EarthView.World.Spatial3D.MODELTYPE modelType, bool immediateRefresh)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool(this.NativeObject, object.Equals(ref_modelDataSource, null) ? IntPtr.Zero : ref_modelDataSource.NativeObject, name, ref meshIndex, modelType, Convert.ToByte(immediateRefresh));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector(IntPtr pNativeObject, IntPtr ref_modelObject, string name, IntPtr subEntityIndex);

				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <returns>是否添加成功</returns>
				public bool AddSubEntityDynamicModelObject(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject ref_modelObject, string name, EarthView.World.Core.IntVector subEntityIndex)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector(this.NativeObject, object.Equals(ref_modelObject, null) ? IntPtr.Zero : ref_modelObject.NativeObject, name, object.Equals(subEntityIndex, null) ? IntPtr.Zero : subEntityIndex.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool(IntPtr pNativeObject, IntPtr ref_modelObject, string name, IntPtr subEntityIndex, byte immediateRefresh);

				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				public bool AddSubEntityDynamicModelObject(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject ref_modelObject, string name, EarthView.World.Core.IntVector subEntityIndex, bool immediateRefresh)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool(this.NativeObject, object.Equals(ref_modelObject, null) ? IntPtr.Zero : ref_modelObject.NativeObject, name, object.Equals(subEntityIndex, null) ? IntPtr.Zero : subEntityIndex.NativeObject, Convert.ToByte(immediateRefresh));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool_ev_bool(IntPtr pNativeObject, IntPtr ref_modelObject, string name, IntPtr subEntityIndex, byte immediateRefresh, byte onLineModeEnable);

				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				public bool AddSubEntityDynamicModelObject(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject ref_modelObject, string name, EarthView.World.Core.IntVector subEntityIndex, bool immediateRefresh, bool onLineModeEnable)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool_ev_bool(this.NativeObject, object.Equals(ref_modelObject, null) ? IntPtr.Zero : ref_modelObject.NativeObject, name, object.Equals(subEntityIndex, null) ? IntPtr.Zero : subEntityIndex.NativeObject, Convert.ToByte(immediateRefresh), Convert.ToByte(onLineModeEnable));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelObject_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 移除动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>是否移除成功</returns>
				public bool RemoveDynamicModelObject(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelObject_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObject_CDynamicModelObject_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>动态目标对象</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject GetDynamicModelObject(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObject_CDynamicModelObject_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicModelObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_existDynamicModelObject_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 是否存在动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>是否存在动态目标对象</returns>
				public bool ExistDynamicModelObject(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_existDynamicModelObject_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectEnabledToGetHeading_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool isEnable);

				/// <summary>
				/// 设置指定名称的动目标是否获取动目标朝向
				/// </summary>
				/// <param name="value">是否获取模型朝向</param>
				public void SetDynamicModelObjectEnabledToGetHeading(string name, bool isEnable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectEnabledToGetHeading_void_EVString_ev_bool(this.NativeObject, name, ref isEnable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectEnabledToGetHeading_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称的动目标是否获取动目标朝向
				/// </summary>
				/// <returns>是否获取模型朝向</returns>
				public bool GetDynamicModelObjectEnabledToGetHeading(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectEnabledToGetHeading_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelManagerListener_void_CDynamicModelManagerListener(IntPtr pNativeObject, IntPtr ref_listener);

				/// <summary>
				/// 设置自定义动态目标场景监听对象
				/// </summary>
				/// <param name="ref_listener">自定义动态目标场景监听对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetDynamicModelManagerListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelManagerListener ref_listener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelManagerListener_void_CDynamicModelManagerListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelManagerListener_void(IntPtr pNativeObject);

				/// <summary>
				/// 移除自定义动态目标场景监听对象
				/// </summary>
				public void RemoveDynamicModelManagerListener()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelManagerListener_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoints_void_EVString_CGlobeControlPointSet(IntPtr pNativeObject, string name, IntPtr controlPoints);

				/// <summary>
				/// 向指定名称动态目标对象添加一组轨迹动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoints">一组轨迹动画控制点</param>
				public void AddDynamicModelGlobeTrackPoints(string name, ref EarthView.IndustryEngine.DynamicModelLibrary.GlobeControlPointSet controlPoints)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoints_void_EVString_CGlobeControlPointSet(this.NativeObject, name, object.Equals(controlPoints, null) ? IntPtr.Zero : controlPoints.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeNodeTrackPoints_void_EVString_CGlobeControlPointMap(IntPtr pNativeObject, string name, IntPtr controlPoints);

				/// <summary>
				/// 添加一组特定关键帧时间的轨迹动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoints">一组控制点</param>
				public void AddDynamicModelGlobeNodeTrackPoints(string name, ref EarthView.World.Spatial3D.GlobeControlPointMap controlPoints)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeNodeTrackPoints_void_EVString_CGlobeControlPointMap(this.NativeObject, name, object.Equals(controlPoints, null) ? IntPtr.Zero : controlPoints.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelGlobeNodeTrackPoints_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 清除指定名称动态目标对象的所有轨迹动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void ClearAllDynamicModelGlobeNodeTrackPoints(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelGlobeNodeTrackPoints_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParamSet(IntPtr pNativeObject, string name, IntPtr cameraanimations);

				/// <summary>
				/// 向指定名称动态目标对象添加一组相机动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="cameraanimations">一组相机动画控制点</param>
				public void AddDynamicModelCameraTrackPoints(string name, ref EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParamSet cameraanimations)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParamSet(this.NativeObject, name, object.Equals(cameraanimations, null) ? IntPtr.Zero : cameraanimations.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoint_void_EVString_CGlobeControlPoint(IntPtr pNativeObject, string name, IntPtr controlPoint);

				/// <summary>
				/// 向指定名称动态目标对象追加一个轨迹动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoint">轨迹动画控制点</param>
				public void AddDynamicModelGlobeTrackPoint(string name, EarthView.World.Spatial3D.GlobeControlPoint controlPoint)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoint_void_EVString_CGlobeControlPoint(this.NativeObject, name, object.Equals(controlPoint, null) ? IntPtr.Zero : controlPoint.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParam(IntPtr pNativeObject, string name, IntPtr cameraanimation);

				/// <summary>
				/// 向指定名称动态目标对象追加一个相机动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="cameraanimation">相机动画控制点</param>
				public void AddDynamicModelCameraTrackPoints(string name, EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParam cameraanimation)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParam(this.NativeObject, name, object.Equals(cameraanimation, null) ? IntPtr.Zero : cameraanimation.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelCameraNodeTrackPoints_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 清除指定名称动态目标对象的所有相机动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void ClearAllDynamicModelCameraNodeTrackPoints(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelCameraNodeTrackPoints_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailVisible_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool visible);

				/// <summary>
				/// 设置指定名称动态目标对象的航迹可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">航迹是否可见</param>
				public void SetTrackTrailVisible(string name, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailVisible_void_EVString_ev_bool(this.NativeObject, name, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的航迹可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹是否可见</returns>
				public bool GetTrackTrailVisible(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailVisible_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayPointNum_void_EVString_ev_int32(IntPtr pNativeObject, string name, ref int number);

				/// <summary>
				/// 设置指定名称动态目标对象的航迹点显示数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="number">航迹点显示数目</param>
				public void SetTrackTrailDisplayPointNum(string name, int number)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayPointNum_void_EVString_ev_int32(this.NativeObject, name, ref number);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayPointNum_ev_int32_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的航迹点显示数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹点显示数目</returns>
				public int GetTrackTrailDisplayPointNum(string name)
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayPointNum_ev_int32_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSymbol_void_EVString_ISymbol(IntPtr pNativeObject, string name, IntPtr trackTrailSymbol);

				/// <summary>
				/// 设置指定名称动态目标对象的航迹显示风格
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="trackTrailSymbol">显示风格</param>
				public void SetTrackTrailSymbol(string name, EarthView.World.Spatial.Display.Isymbol trackTrailSymbol)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSymbol_void_EVString_ISymbol(this.NativeObject, name, object.Equals(trackTrailSymbol, null) ? IntPtr.Zero : trackTrailSymbol.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsTrackTrailHighLine_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool isHighLine);

				/// <summary>
				/// 设置指定名称动态目标对象的航迹是否显示为视高线
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="isHighLine">是否显示为视高线</param>
				public void SetIsTrackTrailHighLine(string name, bool isHighLine)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsTrackTrailHighLine_void_EVString_ev_bool(this.NativeObject, name, ref isHighLine);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsTrackTrailHighLine_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的航迹是否显示为视高线
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否显示为视高线</returns>
				public bool GetIsTrackTrailHighLine(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsTrackTrailHighLine_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineColorInfo_void_EVString_CRgbColor_CRgbColor(IntPtr pNativeObject, string name, IntPtr staticHighLineColor, IntPtr dynamicHighLineColor);

				/// <summary>
				/// 设置指定名称动态目标对象的视高线显示颜色
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				public void SetHighLineColorInfo(string name, EarthView.World.Spatial.Display.RgbColor staticHighLineColor, EarthView.World.Spatial.Display.RgbColor dynamicHighLineColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineColorInfo_void_EVString_CRgbColor_CRgbColor(this.NativeObject, name, object.Equals(staticHighLineColor, null) ? IntPtr.Zero : staticHighLineColor.NativeObject, object.Equals(dynamicHighLineColor, null) ? IntPtr.Zero : dynamicHighLineColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineDistance_void_EVString_ev_real64(IntPtr pNativeObject, string name, ref double highLineDistance);

				/// <summary>
				/// 设置指定名称动态目标对象的视高线间距
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="highLineDistance">间距</param>
				public void SetHighLineDistance(string name, double highLineDistance)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineDistance_void_EVString_ev_real64(this.NativeObject, name, ref highLineDistance);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getHighLineDistance_Real_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的视高线间距
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>视高线间距</returns>
				public double GetHighLineDistance(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getHighLineDistance_Real_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSymbol_ISymbol_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的航迹显示风格
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>显示风格</returns>
				public EarthView.World.Spatial.Display.Isymbol GetTrackTrailSymbol(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSymbol_ISymbol_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSpatialReference_void_EVString_ISpatialReference(IntPtr pNativeObject, string name, IntPtr ref_sr);

				/// <summary>
				/// 设置指定名称动态目标对象的航迹参考坐标系
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="ref_sr">参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetTrackTrailSpatialReference(string name, EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSpatialReference_void_EVString_ISpatialReference(this.NativeObject, name, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSpatialReference_ISpatialReference_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的航迹参考坐标系
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>参考坐标系</returns>
				public EarthView.World.Spatial.Geometry.Ispatialreference GetTrackTrailSpatialReference(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSpatialReference_ISpatialReference_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayMode_void_EVString_EVDisplayMode(IntPtr pNativeObject, string name, EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode);

				/// <summary>
				/// 设置航迹显示模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="displayMode">航迹显示模式</param>
				public void SetTrackTrailDisplayMode(string name, EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE displayMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayMode_void_EVString_EVDisplayMode(this.NativeObject, name, displayMode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayMode_EVDisplayMode_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取航迹显示模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹显示模式</returns>
				public EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE GetTrackTrailDisplayMode(string name)
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayMode_EVDisplayMode_EVString(this.NativeObject, name);
					
					return (EarthView.IndustryEngine.IndustryGraphic.PolylineFeature.EVDISPLAYMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonVisible_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool visible);

				/// <summary>
				/// 设置指定名称动态目标对象的标牌可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">标牌可见性</param>
				public void SetScutcheonVisible(string name, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonVisible_void_EVString_ev_bool(this.NativeObject, name, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的标牌可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>标牌可见性</returns>	
				public bool GetScutcheonVisible(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonVisible_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextColor_void_EVString_CColourValue(IntPtr pNativeObject, string modelName, IntPtr textColor);

				/// <summary>
				/// 设置标牌字体颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="textColor">标牌字体颜色</param>
				public void SetScutcheonTextColor(string modelName, EarthView.World.Graphic.ColourValue textColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextColor_void_EVString_CColourValue(this.NativeObject, modelName, object.Equals(textColor, null) ? IntPtr.Zero : textColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonTextColor_CColourValue_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌字体颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetScutcheonTextColor(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonTextColor_CColourValue_EVString(this.NativeObject, modelName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonCaption_void_EVString_EVString(IntPtr pNativeObject, string modelName, string caption);

				/// <summary>
				/// 设置标牌描述信息
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="caption">标牌描述信息</param>
				public void SetScutcheonCaption(string modelName, string caption)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonCaption_void_EVString_EVString(this.NativeObject, modelName, caption);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonCaption_EVString_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌描述信息
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌描述信息</returns>	
				public string GetScutcheonCaption(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonCaption_EVString_EVString(this.NativeObject, modelName);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontSize_void_EVString_ev_byte(IntPtr pNativeObject, string modelName, byte size);

				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="size">标牌字体大小</param>
				public void SetScutcheonFontSize(string modelName, byte size)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontSize_void_EVString_ev_byte(this.NativeObject, modelName, size);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontSize_ev_byte_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体大小</returns>	
				public byte GetScutcheonFontSize(string modelName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontSize_ev_byte_EVString(this.NativeObject, modelName);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontName_void_EVString_EVString(IntPtr pNativeObject, string modelName, string fontName);

				/// <summary>
				/// 设置标牌字体名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="fontName">标牌字体名称</param>
				public void SetScutcheonFontName(string modelName, string fontName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontName_void_EVString_EVString(this.NativeObject, modelName, fontName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontName_EVString_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌字体名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体名称</returns>	
				public string GetScutcheonFontName(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontName_EVString_EVString(this.NativeObject, modelName);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineColor_CColourValue_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌连接线颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌连接线颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetScutcheonLineColor(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineColor_CColourValue_EVString(this.NativeObject, modelName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineColor_void_EVString_CColourValue(IntPtr pNativeObject, string modelName, IntPtr lineColor);

				/// <summary>
				/// 设置标牌连接线颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="lineColor">标牌连接线颜色</param>
				public void SetScutcheonLineColor(string modelName, EarthView.World.Graphic.ColourValue lineColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineColor_void_EVString_CColourValue(this.NativeObject, modelName, object.Equals(lineColor, null) ? IntPtr.Zero : lineColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFrameColor_CColourValue_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌边框颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌边框颜色</returns>	
				public EarthView.World.Graphic.ColourValue GetScutcheonFrameColor(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFrameColor_CColourValue_EVString(this.NativeObject, modelName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFrameColor_void_EVString_CColourValue(IntPtr pNativeObject, string modelName, IntPtr frameColor);

				/// <summary>
				/// 设置标牌边框颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="boardColor">标牌边框颜色</param>
				public void SetScutcheonFrameColor(string modelName, EarthView.World.Graphic.ColourValue frameColor)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFrameColor_void_EVString_CColourValue(this.NativeObject, modelName, object.Equals(frameColor, null) ? IntPtr.Zero : frameColor.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineLength_CVector3_EVString(IntPtr pNativeObject, string modelName);

				/// <summary>
				/// 获取标牌延伸线长度
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌延伸线长度</returns>	
				public EarthView.World.Spatial.Math.Vector3 GetScutcheonLineLength(string modelName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineLength_CVector3_EVString(this.NativeObject, modelName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineLength_void_EVString_CVector3(IntPtr pNativeObject, string modelName, IntPtr lineLength);

				/// <summary>
				/// 设置标牌延伸线长度
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="lineLength">标牌延伸线长度</param>
				public void SetScutcheonLineLength(string modelName, EarthView.World.Spatial.Math.Vector3 lineLength)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineLength_void_EVString_CVector3(this.NativeObject, modelName, object.Equals(lineLength, null) ? IntPtr.Zero : lineLength.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextureMatName_void_EVString_EVString(IntPtr pNativeObject, string modelName, string matName);

				/// <summary>
				/// 设置标牌纹理材质名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="matName">材质名称</param>
				public void SetScutcheonTextureMatName(string modelName, string matName)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextureMatName_void_EVString_EVString(this.NativeObject, modelName, matName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setParticleVisible_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool visible);

				/// <summary>
				/// 设置指定名称动态目标对象的粒子可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">粒子可见性</param>
				public void SetParticleVisible(string name, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setParticleVisible_void_EVString_ev_bool(this.NativeObject, name, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getParticleVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的粒子可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>粒子可见性</returns>	
				public bool GetParticleVisible(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getParticleVisible_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRibbonTrailVisible_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool visible);

				/// <summary>
				/// 设置指定名称动态目标对象的飘带可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">飘带可见性</param>
				public void SetRibbonTrailVisible(string name, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRibbonTrailVisible_void_EVString_ev_bool(this.NativeObject, name, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRibbonTrailVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的飘带可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>飘带可见性</returns>	
				public bool GetRibbonTrailVisible(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRibbonTrailVisible_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSceneNode_CSceneNode(IntPtr pNativeObject);

				/// <summary>
				/// 获取动态目标管理对象绑定的节点
				/// </summary>
				/// <returns>绑定的节点</returns>
				public EarthView.World.Graphic.SceneNode GetSceneNode()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSceneNode_CSceneNode(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSceneNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_lockGlobeNodeTrackModelObject_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 锁定指定名称动态目标对象的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void LockGlobeNodeTrackModelObject(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_lockGlobeNodeTrackModelObject_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_unlockGlobeNodeTrackModelObject_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁指定名称动态目标对象的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void UnlockGlobeNodeTrackModelObject()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_unlockGlobeNodeTrackModelObject_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockDistance_void_EVString_ev_real64(IntPtr pNativeObject, string name, ref double distance);

				/// <summary>
				/// 设置指定名称动态目标对象的锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="distance">锁定观察距离</param>
				public void SetLockDistance(string name, double distance)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockDistance_void_EVString_ev_real64(this.NativeObject, name, ref distance);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockDistance_ev_real64_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>锁定观察距离</returns>	
				public double GetLockDistance(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockDistance_ev_real64_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockTilt_void_EVString_CDegree(IntPtr pNativeObject, string name, IntPtr tilt);

				/// <summary>
				/// 设置指定名称动态目标对象的锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="tilt">锁定观察俯仰角</param>
				public void SetLockTilt(string name, EarthView.World.Spatial.Math.Degree tilt)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockTilt_void_EVString_CDegree(this.NativeObject, name, object.Equals(tilt, null) ? IntPtr.Zero : tilt.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockTilt_CDegree_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定名称动态目标对象的锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>锁定观察俯仰角</returns>	
				public EarthView.World.Spatial.Math.Degree GetLockTilt(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockTilt_CDegree_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDegree");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csObj.BindNativeObject(__ptr, "CDegree");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockDistance_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool locked);

				/// <summary>
				/// 设置是否锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				public void SetIsLockDistance(string name, bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockDistance_void_EVString_ev_bool(this.NativeObject, name, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockDistance_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取是否锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				public bool GetIsLockDistance(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockDistance_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockTilt_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool locked);

				/// <summary>
				/// 设置是否锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				public void SetIsLockTilt(string name, bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockTilt_void_EVString_ev_bool(this.NativeObject, name, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockTilt_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取是否锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				public bool GetIsLockTilt(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockTilt_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockHeading_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool locked);

				/// <summary>
				/// 设置是否锁定观察偏航角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				public void SetIsLockHeading(string name, bool locked)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockHeading_void_EVString_ev_bool(this.NativeObject, name, ref locked);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockHeading_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取是否锁定观察偏航角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				public bool GetIsLockHeading(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockHeading_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockedGlobeNodeTrackModelObject_CDynamicModelObject(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前锁定的动态目标对象
				/// </summary>
				/// <returns>当前锁定的动态目标对象</returns>	
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject GetLockedGlobeNodeTrackModelObject()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockedGlobeNodeTrackModelObject_CDynamicModelObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicModelObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackModelObject_CDynamicModelObject(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前的相机动画对象
				/// </summary>
				/// <returns>相机动画对象</returns>	
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject GetCameraNodeTrackModelObject()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackModelObject_CDynamicModelObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicModelObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csObj.BindNativeObject(__ptr, "CDynamicModelObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackLocalCenter_void_EVString_CVector3(IntPtr pNativeObject, string name, IntPtr localCenter);

				/// <summary>
				/// 设置相机动画局部观察中心位置
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="localCenter">局部观察中心位置</param>
				public void SetCameraNodeTrackLocalCenter(string name, EarthView.World.Spatial.Math.Vector3 localCenter)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackLocalCenter_void_EVString_CVector3(this.NativeObject, name, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackLocalCenter_CVector3_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取相机动画局部观察中心位置
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>局部观察中心位置</returns>	
				public EarthView.World.Spatial.Math.Vector3 GetCameraNodeTrackLocalCenter(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackLocalCenter_CVector3_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategy_void_CDynamicLodStrategy(IntPtr pNativeObject, IntPtr ref_lodStrategy);

				/// <summary>
				/// 设置LOD策略
				/// </summary>
				/// <param name="lodStrategy">LOD策略,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetLodStrategy(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy ref_lodStrategy)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategy_void_CDynamicLodStrategy(this.NativeObject, object.Equals(ref_lodStrategy, null) ? IntPtr.Zero : ref_lodStrategy.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategy_CDynamicLodStrategy(IntPtr pNativeObject);

				/// <summary>
				/// 获取LOD策略
				/// </summary>
				/// <returns>LOD策略</returns>	
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy GetLodStrategy()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategy_CDynamicLodStrategy(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicLodStrategy");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy;
						csObj.BindNativeObject(__ptr, "CDynamicLodStrategy");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategyEnable_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用</param>
				public void SetLodStrategyEnable(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategyEnable_void_ev_bool(this.NativeObject, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategyEnable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用</returns>	
				public bool GetLodStrategyEnable()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategyEnable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectVisible_void_EVString_ev_bool(IntPtr pNativeObject, string name, byte visible);

				/// <summary>
				/// 设置动态目标的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">可见性</param>
				public void SetDynamicModelObjectVisible(string name, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectVisible_void_EVString_ev_bool(this.NativeObject, name, Convert.ToByte(visible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取动态目标的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>可见性</returns>	
				public bool GetDynamicModelObjectVisible(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectVisible_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityVisible_void_EVString_IntVector_ev_bool(IntPtr pNativeObject, string name, IntPtr subEntityVector, ref bool visible);

				/// <summary>
				/// 设置子部件的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				public void SetSubEntityVisible(string name, EarthView.World.Core.IntVector subEntityVector, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityVisible_void_EVString_IntVector_ev_bool(this.NativeObject, name, object.Equals(subEntityVector, null) ? IntPtr.Zero : subEntityVector.NativeObject, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityVisible_ev_bool_EVString_ev_int32(IntPtr pNativeObject, string name, ref int subEntityIndex);

				/// <summary>
				/// 获取子部件的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引</param>
				/// <returns>可见性</returns>	
				public bool GetSubEntityVisible(string name, int subEntityIndex)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityVisible_ev_bool_EVString_ev_int32(this.NativeObject, name, ref subEntityIndex);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllParticleVisible_void_EVString_IntVector_ev_bool(IntPtr pNativeObject, string name, IntPtr subEnetityVector, ref bool visible);

				/// <summary>
				/// 设置子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				public void SetSubEntityAllParticleVisible(string name, EarthView.World.Core.IntVector subEnetityVector, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllParticleVisible_void_EVString_IntVector_ev_bool(this.NativeObject, name, object.Equals(subEnetityVector, null) ? IntPtr.Zero : subEnetityVector.NativeObject, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_IntVector_ev_bool(IntPtr pNativeObject, string name, IntPtr subEnetityVector, ref bool visible);

				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				public void SetSubEntityAllRibbonTrailVisible(string name, EarthView.World.Core.IntVector subEnetityVector, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_IntVector_ev_bool(this.NativeObject, name, object.Equals(subEnetityVector, null) ? IntPtr.Zero : subEnetityVector.NativeObject, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityParticleVisible_void_EVString_ev_int32_EVString_ev_bool(IntPtr pNativeObject, string name, ref int subEntityIndex, string particleAliasName, ref bool visible);

				/// <summary>
				/// 设置子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="particleAliasName">特效别名</param>
				/// <param name="visible">可见性</param>	
				public void SetSubEntityParticleVisible(string name, int subEntityIndex, string particleAliasName, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityParticleVisible_void_EVString_ev_int32_EVString_ev_bool(this.NativeObject, name, ref subEntityIndex, particleAliasName, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityParticleVisible_ev_bool_EVString_ev_int32_EVString(IntPtr pNativeObject, string name, ref int subEntityIndex, string particleAliasName);

				/// <summary>
				/// 获取子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="particleAliasName">特效别名</param>
				/// <returns>可见性</returns>	
				public bool GetSubEntityParticleVisible(string name, int subEntityIndex, string particleAliasName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityParticleVisible_ev_bool_EVString_ev_int32_EVString(this.NativeObject, name, ref subEntityIndex, particleAliasName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(IntPtr pNativeObject, string name, ref int subEntityIndex, string ribbonTrailName, ref bool visible);

				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <param name="visible">可见性</param>
				public void SetSubEntityAllRibbonTrailVisible(string name, int subEntityIndex, string ribbonTrailName, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(this.NativeObject, name, ref subEntityIndex, ribbonTrailName, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(IntPtr pNativeObject, string name, ref int subEntityIndex, string ribbonTrailName, ref bool visible);

				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <param name="visible">可见性</param>	
				public void SetSubEntityRibbonTrailVisible(string name, int subEntityIndex, string ribbonTrailName, bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(this.NativeObject, name, ref subEntityIndex, ribbonTrailName, ref visible);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityRibbonTrailVisible_ev_bool_EVString_ev_int32_EVString(IntPtr pNativeObject, string name, ref int subEntityIndex, string ribbonTrailName);

				/// <summary>
				/// 获取子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <returns>可见性</returns>	
				public bool GetSubEntityRibbonTrailVisible(string name, int subEntityIndex, string ribbonTrailName)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityRibbonTrailVisible_ev_bool_EVString_ev_int32_EVString(this.NativeObject, name, ref subEntityIndex, ribbonTrailName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedRibbonTrailObjectMap_RibbonTrailObjectMap_EVString_ev_int32(IntPtr pNativeObject, string name, ref int subEntityIndex);

				/// <summary>
				/// 获取子部件绑定的飘带对象
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引</param>
				/// <returns>飘带对象</returns>	
				public EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap GetSubEntityBindedRibbonTrailObjectMap(string name, int subEntityIndex)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedRibbonTrailObjectMap_RibbonTrailObjectMap_EVString_ev_int32(this.NativeObject, name, ref subEntityIndex);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.RibbonTrailObjectMap;
						csObj.BindNativeObject(__ptr, "RibbonTrailObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedParticleObjectMap_EffectObjectMap_EVString_ev_int32(IntPtr pNativeObject, string name, ref int subEntityIndex);

				/// <summary>
				/// 获取子部件绑定的粒子特效对象
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <returns>粒子特效对象</returns>	
				public EarthView.World.Spatial3D.ModelManager.EffectObjectMap GetSubEntityBindedParticleObjectMap(string name, int subEntityIndex)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedParticleObjectMap_EffectObjectMap_EVString_ev_int32(this.NativeObject, name, ref subEntityIndex);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.EffectObjectMap csObj = new EarthView.World.Spatial3D.ModelManager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "EffectObjectMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.EffectObjectMap;
						csObj.BindNativeObject(__ptr, "EffectObjectMap");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityCount_ev_int32_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取子部件数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>子部件数目</returns>	
				public int GetSubEntityCount(string name)
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityCount_ev_int32_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getBindedParticleSubEntityIndexVector_IntVector_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取绑定特效的子部件索引集合
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>绑定特效的子部件索引集合</returns>	
				public EarthView.World.Core.IntVector GetBindedParticleSubEntityIndexVector(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getBindedParticleSubEntityIndexVector_IntVector_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IntVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
						csObj.BindNativeObject(__ptr, "IntVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setVisible_void_ev_bool(IntPtr pNativeObject, byte visible);

				/// <summary>
				/// 设置管理器的可见性
				/// </summary>
				/// <param name="visible">可见性</param>
				public void SetVisible(bool visible)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setVisible_void_ev_bool(this.NativeObject, Convert.ToByte(visible));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getVisible_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取管理器的可见性
				/// </summary>
				/// <returns>可见性</returns>
				public bool GetVisible()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getVisible_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackCurrentFrameTime_void_EVString_ev_real64(IntPtr pNativeObject, string name, ref double curKeyFrameTime);

				/// <summary>
				/// 设置轨迹动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				public void SetGlobeNodeTrackCurrentFrameTime(string name, double curKeyFrameTime)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackCurrentFrameTime_void_EVString_ev_real64(this.NativeObject, name, ref curKeyFrameTime);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackCurrentFrameTime_ev_real64_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>当前关键帧时间</returns>
				public double GetGlobeNodeTrackCurrentFrameTime(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackCurrentFrameTime_ev_real64_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackCurrentFrameTime_void_EVString_ev_real64(IntPtr pNativeObject, string name, ref double curKeyFrameTime);

				/// <summary>
				/// 设置相机动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				public void SetCameraNodeTrackCurrentFrameTime(string name, double curKeyFrameTime)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackCurrentFrameTime_void_EVString_ev_real64(this.NativeObject, name, ref curKeyFrameTime);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackCurrentFrameTime_ev_real64_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取相机动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>当前关键帧时间</returns>
				public double GetCameraNodeTrackCurrentFrameTime(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackCurrentFrameTime_ev_real64_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAllGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 开始所有动态目标的轨迹动画
				/// </summary>
				public void StartAllGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAllGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAllGlobeNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止所有动态目标的轨迹动画
				/// </summary>
				public void StopAllGlobeNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAllGlobeNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startGlobeNodeTrack_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 开始指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void StartGlobeNodeTrack(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startGlobeNodeTrack_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopGlobeNodeTrack_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 停止指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void StopGlobeNodeTrack(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopGlobeNodeTrack_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseGlobeNodeTrack_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 暂停指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void PauseGlobeNodeTrack(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseGlobeNodeTrack_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueGlobeNodeTrack_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 继续指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void ContinueGlobeNodeTrack(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueGlobeNodeTrack_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startCameraNodeTrack_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 开始指定名称动态目标的相机动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				public void StartCameraNodeTrack(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startCameraNodeTrack_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止相机动画
				/// </summary>
				public void StopCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 暂停相机动画
				/// </summary>
				public void PauseCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueCameraNodeTrack_void(IntPtr pNativeObject);

				/// <summary>
				/// 继续相机动画
				/// </summary>
				public void ContinueCameraNodeTrack()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueCameraNodeTrack_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackIsLoop_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool loop);

				/// <summary>
				/// 设置轨迹动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="loop">是否循环</param>
				public void SetGlobeNodeTrackIsLoop(string name, bool loop)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackIsLoop_void_EVString_ev_bool(this.NativeObject, name, ref loop);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackIsLoop_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否循环</returns>
				public bool GetGlobeNodeTrackIsLoop(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackIsLoop_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode(ref IntPtr name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				protected setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode m_setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_NoVirtual(IntPtr pNativeObject, string name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetGlobeNodeTrackAltitudeMode_NoVirtual(string name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_NoVirtual(this.NativeObject, name, altitudeMode);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Function(ref IntPtr name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetGlobeNodeTrackAltitudeMode(strname,altitudeMode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(IntPtr pNativeObject, string name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetGlobeNodeTrackAltitudeMode(string name, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(this.NativeObject, name, altitudeMode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString(ref IntPtr name);

				protected getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetGlobeNodeTrackAltitudeMode_NoVirtual(string name)
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_NoVirtual(this.NativeObject, name);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}

				protected  int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE csret=GetGlobeNodeTrackAltitudeMode(strname);
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetGlobeNodeTrackAltitudeMode(string name)
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(this.NativeObject, name);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackIsLoop_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool loop);

				/// <summary>
				/// 设置相机动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="loop">是否循环</param>
				public void SetCameraNodeTrackIsLoop(string name, bool loop)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackIsLoop_void_EVString_ev_bool(this.NativeObject, name, ref loop);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackIsLoop_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取相机动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否循环</returns>
				public bool GetCameraNodeTrackIsLoop(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackIsLoop_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelScale_void_EVString_CVector3(IntPtr pNativeObject, string name, IntPtr scale);

				/// <summary>
				/// 设置模型显示比例
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="scale">模型显示比例</param>
				public void SetModelScale(string name, EarthView.World.Spatial.Math.Vector3 scale)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelScale_void_EVString_CVector3(this.NativeObject, name, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelScale_CVector3_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取模型显示比例
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>模型显示比例</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelScale(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelScale_CVector3_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelRotateDegree_void_EVString_CVector3(IntPtr pNativeObject, string name, IntPtr rotateDegree);

				/// <summary>
				/// 设置模型旋转角度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="rotateDegree">旋转角度</param>
				public void SetModelRotateDegree(string name, EarthView.World.Spatial.Math.Vector3 rotateDegree)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelRotateDegree_void_EVString_CVector3(this.NativeObject, name, object.Equals(rotateDegree, null) ? IntPtr.Zero : rotateDegree.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelRotateDegree_CVector3_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取模型旋转角度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>旋转角度</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelRotateDegree(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelRotateDegree_CVector3_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelLocalOffsetVector_void_EVString_CVector3(IntPtr pNativeObject, string name, IntPtr offsetVector);

				/// <summary>
				/// 设置模型局部坐标系偏移量
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="offsetVector">局部坐标系偏移量</param>
				public void SetModelLocalOffsetVector(string name, EarthView.World.Spatial.Math.Vector3 offsetVector)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelLocalOffsetVector_void_EVString_CVector3(this.NativeObject, name, object.Equals(offsetVector, null) ? IntPtr.Zero : offsetVector.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelLocalOffsetVector_CVector3_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取模型局部坐标系偏移量
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>局部坐标系偏移量</returns>
				public EarthView.World.Spatial.Math.Vector3 GetModelLocalOffsetVector(string name)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelLocalOffsetVector_CVector3_EVString(this.NativeObject, name);
					
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
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setFlySpeed_void_EVString_ev_real64(IntPtr pNativeObject, string name, ref double speed);

				/// <summary>
				/// 设置轨迹动画速度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="speed">轨迹动画速度</param>
				public void SetFlySpeed(string name, double speed)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setFlySpeed_void_EVString_ev_real64(this.NativeObject, name, ref speed);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getFlySpeed_ev_real64_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画速度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>轨迹动画速度</returns>
				public double GetFlySpeed(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getFlySpeed_ev_real64_EVString(this.NativeObject, name);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setInterpolate_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool interpolate);

				/// <summary>
				/// 设置轨迹动画是否进行插值
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="interpolate">是否插值</param>
				public void SetInterpolate(string name, bool interpolate)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setInterpolate_void_EVString_ev_bool(this.NativeObject, name, ref interpolate);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getInterpolate_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取轨迹动画是否进行插值
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否插值</returns>
				public bool GetInterpolate(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getInterpolate_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setReflectable_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool enable);

				/// <summary>
				/// 设置是否启用海洋反射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="enable">是否启用海洋反射</param>
				public void SetReflectable(string name, bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setReflectable_void_EVString_ev_bool(this.NativeObject, name, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getReflectable_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取是否启用海洋反射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否启用海洋反射</returns>
				public bool GetReflectable(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getReflectable_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRefractable_void_EVString_ev_bool(IntPtr pNativeObject, string name, ref bool enable);

				/// <summary>
				/// 设置是否启用海洋折射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="enable">是否启用海洋折射</param>
				public void SetRefractable(string name, bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRefractable_void_EVString_ev_bool(this.NativeObject, name, ref enable);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRefractable_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取是否启用海洋折射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否启用海洋折射</returns>
				public bool GetRefractable(string name)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRefractable_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectIterator_CDynamicModelObjectIterator(IntPtr pNativeObject);

				/// <summary>
				/// 获取动态目标对象遍历对象
				/// </summary>
				/// <returns>获取动态目标对象遍历对象</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIterator GetDynamicModelObjectIterator()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectIterator_CDynamicModelObjectIterator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIterator csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicModelObjectIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIterator;
						csObj.BindNativeObject(__ptr, "CDynamicModelObjectIterator");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject, IntPtr ref_globeNodeTrackAnimationListener);

				/// <summary>
				/// 设置轨迹动画监听对象
				/// </summary>
				/// <param name="ref_globeNodeTrackAnimationListener">轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void SetDynamicGlobeNodeTrackAnimationListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject, object.Equals(ref_globeNodeTrackAnimationListener, null) ? IntPtr.Zero : ref_globeNodeTrackAnimationListener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject);

				/// <summary>
				/// 获取轨迹动画监听对象
				/// </summary>
				/// <returns>轨迹动画监听</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener GetDynamicGlobeNodeTrackAnimationListener()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener;
						csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetLength_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画集长度
				/// </summary>
				/// <returns>动画集长度</returns>
				public double GetAnimationsetLength()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetLength_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetLength_void_Real(IntPtr pNativeObject, ref double length);

				/// <summary>
				/// 设置动画集长度
				/// </summary>
				/// <param name="length">动画集长度</param>
				public void SetAnimationsetLength(double length)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetLength_void_Real(this.NativeObject, ref length);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAnimationset_void(IntPtr pNativeObject);

				/// <summary>
				/// 开始播放动画集
				/// </summary>
				public void StartAnimationset()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAnimationset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAnimationset_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止播放动画集
				/// </summary>
				public void StopAnimationset()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAnimationset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseAnimationset_void(IntPtr pNativeObject);

				/// <summary>
				/// 暂停播放动画集
				/// </summary>
				public void PauseAnimationset()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseAnimationset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueAnimationset_void(IntPtr pNativeObject);

				/// <summary>
				/// 继续播放动画集
				/// </summary>
				public void ContinueAnimationset()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueAnimationset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTime_void_ev_real64(IntPtr pNativeObject, ref double curKeyFrameTime);

				/// <summary>
				/// 设置动画集当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				public void SetAnimationsetTime(double curKeyFrameTime)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTime_void_ev_real64(this.NativeObject, ref curKeyFrameTime);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTime_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画集当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				public double GetAnimationsetTime()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTime_ev_real64(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTimeRatio_void_Real(IntPtr pNativeObject, ref double timeRatio);

				/// <summary>
				/// 设置动画集播放速率
				/// </summary>
				/// <param name="timeRatio">动画集播放速率</param>
				public void SetAnimationsetTimeRatio(double timeRatio)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTimeRatio_void_Real(this.NativeObject, ref timeRatio);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTimeRatio_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画集播放速率
				/// </summary>
				/// <returns>动画集播放速率</returns>
				public double GetAnimationsetTimeRatio()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTimeRatio_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr ref_dynamicObjectEvent);

				/// <summary>
				/// 添加事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public void AddEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent ref_dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(ref_dynamicObjectEvent, null) ? IntPtr.Zero : ref_dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr dynamicObjectEvent);

				/// <summary>
				/// 删除事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				public void RemoveEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(dynamicObjectEvent, null) ? IntPtr.Zero : dynamicObjectEvent.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addShadeScutcheon_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 考虑相应动目标对象中标牌的遮蔽关系
				/// </summary>
				/// <param name="name">动目标名称</param>
				public void AddShadeScutcheon(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addShadeScutcheon_void_EVString(this.NativeObject, name);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeShadeScutcheon_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 不在考虑相应动目标对象中标牌的遮蔽关系
				/// </summary>
				/// <param name="name">动目标名称</param>
				public void RemoveShadeScutcheon(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeShadeScutcheon_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeAllTrackTrailPoint_CallBack_void_EVString(ref IntPtr name);

				protected removeAllTrackTrailPoint_CallBack_void_EVString m_removeAllTrackTrailPoint_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除指定动目标的所有航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				public virtual void RemoveAllTrackTrailPoint_NoVirtual(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					RemoveAllTrackTrailPoint(strname);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除指定动目标的所有航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				public virtual void RemoveAllTrackTrailPoint(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addTrackTrailPoint_CallBack_void_EVString_CCoordinate(ref IntPtr name, IntPtr point);

				protected addTrackTrailPoint_CallBack_void_EVString_CCoordinate m_addTrackTrailPoint_CallBack_void_EVString_CCoordinate;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_NoVirtual(IntPtr pNativeObject, string name, IntPtr point);

				/// <summary>
				/// 为指定动目标的增加航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				/// <param name="point">要添加的航迹点</param>
				public virtual void AddTrackTrailPoint_NoVirtual(string name, EarthView.World.Spatial.Geometry.Coordinate point)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_NoVirtual(this.NativeObject, name, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Function(ref IntPtr name, IntPtr point)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Spatial.Geometry.Coordinate csobj_point = new EarthView.World.Spatial.Geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_point.BindNativeObject(point,"CCoordinate");
					csobj_point.Delegate = true;
					IClassFactory csobj_pointClassFactory = GlobalClassFactoryMap.Get(csobj_point.GetCppInstanceTypeName());
					if (csobj_pointClassFactory != null)
					{
						csobj_point.Delegate = true;
						csobj_point = csobj_pointClassFactory.Create() as EarthView.World.Spatial.Geometry.Coordinate;
						csobj_point.BindNativeObject(point, "CCoordinate");
						csobj_point.Delegate = true;
					}
					
					AddTrackTrailPoint(strname,csobj_point);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(IntPtr pNativeObject, string name, IntPtr point);

				/// <summary>
				/// 为指定动目标的增加航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				/// <param name="point">要添加的航迹点</param>
				public virtual void AddTrackTrailPoint(string name, EarthView.World.Spatial.Geometry.Coordinate point)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(this.NativeObject, name, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void refreshTrackTrail_CallBack_void();

				protected refreshTrackTrail_CallBack_void m_refreshTrackTrail_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 刷新航迹
				/// </summary>
				public virtual void RefreshTrackTrail_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Function()
				{
					RefreshTrackTrail();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(IntPtr pNativeObject);

				/// <summary>
				/// 刷新航迹
				/// </summary>
				public virtual void RefreshTrackTrail()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setNeedUpdate_CallBack_void_ev_bool(ref byte needUpdate);

				protected setNeedUpdate_CallBack_void_ev_bool m_setNeedUpdate_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要刷新
				/// </summary>
				/// <param name="needUpdate">是否需要刷新</param>
				public virtual void SetNeedUpdate_NoVirtual(bool needUpdate)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_NoVirtual(this.NativeObject, ref needUpdate);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Function(ref byte needUpdate)
				{
					bool needUpdateBool = Convert.ToBoolean(needUpdate);
					
					SetNeedUpdate(needUpdateBool);
					
					needUpdate = Convert.ToByte(needUpdateBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要刷新
				/// </summary>
				/// <param name="needUpdate">是否需要刷新</param>
				public virtual void SetNeedUpdate(bool needUpdate)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(this.NativeObject, ref needUpdate);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getNeedUpdate_CallBack_ev_bool();

				protected getNeedUpdate_CallBack_ev_bool m_getNeedUpdate_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否需要刷新
				/// </summary>
				/// <returns>是否需要刷新</returns>
				public virtual bool GetNeedUpdate_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Function()
				{
					bool csret=GetNeedUpdate();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否需要刷新
				/// </summary>
				/// <returns>是否需要刷新</returns>
				public virtual bool GetNeedUpdate()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectsLocker_CReadWriteLock(IntPtr pNativeObject);

				public EarthView.World.Core.ReadWriteLock GetDynamicModelObjectsLocker()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectsLocker_CReadWriteLock(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.ReadWriteLock csObj = new EarthView.World.Core.ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CReadWriteLock");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.ReadWriteLock;
						csObj.BindNativeObject(__ptr, "CReadWriteLock");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelObjectManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager", new DynamicModelObjectManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManagerProxy", new DynamicModelObjectManagerClassFactory());

				public DynamicModelObjectManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(IntPtr pObject, setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(IntPtr pObject, getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(IntPtr pObject, removeAllTrackTrailPoint_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(IntPtr pObject, addTrackTrailPoint_CallBack_void_EVString_CCoordinate pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(IntPtr pObject, refreshTrackTrail_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(IntPtr pObject, setNeedUpdate_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(IntPtr pObject, getNeedUpdate_CallBack_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Function;
						GC.KeepAlive(m_setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(this.NativeObject, m_setGlobeNodeTrackAltitudeMode_CallBack_void_EVString_AltitudeMode);
						m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Function;
						GC.KeepAlive(m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(this.NativeObject, m_getGlobeNodeTrackAltitudeMode_CallBack_AltitudeMode_EVString);
						m_removeAllTrackTrailPoint_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Function;
						GC.KeepAlive(m_removeAllTrackTrailPoint_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(this.NativeObject, m_removeAllTrackTrailPoint_CallBack_void_EVString);
						m_addTrackTrailPoint_CallBack_void_EVString_CCoordinate = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Function;
						GC.KeepAlive(m_addTrackTrailPoint_CallBack_void_EVString_CCoordinate);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(this.NativeObject, m_addTrackTrailPoint_CallBack_void_EVString_CCoordinate);
						m_refreshTrackTrail_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Function;
						GC.KeepAlive(m_refreshTrackTrail_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(this.NativeObject, m_refreshTrackTrail_CallBack_void);
						m_setNeedUpdate_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Function;
						GC.KeepAlive(m_setNeedUpdate_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(this.NativeObject, m_setNeedUpdate_CallBack_void_ev_bool);
						m_getNeedUpdate_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Function;
						GC.KeepAlive(m_getNeedUpdate_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(this.NativeObject, m_getNeedUpdate_CallBack_ev_bool);
					}
				}
				public static DynamicModelObjectManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicModelObjectManager obj = baseObj as  DynamicModelObjectManager;
					if (object.Equals(obj, null))
					{
						obj = new DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelObjectManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicModelObjectManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicModelObjectManager emptyInstance = new DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
