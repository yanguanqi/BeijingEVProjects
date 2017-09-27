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
		namespace Core
		{
			namespace Database
			{
				///<summary>
				///数据库驱动工厂的基类
				///通过实现createobject返回所需要提供的数据库对象
				///</summary>
				public class SqlDriverCreatorBase : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					public SqlDriverCreatorBase() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSqlDriverCreatorBaseProxy", null);
						if (!"EarthView.World.Core.Database.SqlDriverCreatorBase".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createObject_CallBack_CSqlDriver();

					protected createObject_CallBack_CSqlDriver m_createObject_CallBack_CSqlDriver;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 创建driver
					/// </summary>z
					/// <returns>数据库driver句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDriver CreateObject_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDriver csObj = new EarthView.World.Core.Database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDriver");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDriver;
							csObj.BindNativeObject(__ptr, "CSqlDriver");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Function()
					{
						EarthView.World.Core.Database.SqlDriver csret=CreateObject();
						
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
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(IntPtr pNativeObject);

					/// <summary>
					/// 创建driver
					/// </summary>z
					/// <returns>数据库driver句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDriver CreateObject()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDriver csObj = new EarthView.World.Core.Database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDriver");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDriver;
							csObj.BindNativeObject(__ptr, "CSqlDriver");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_d.so");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.so");

						#else 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility.so");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp.so");

						#else 
							private static bool bLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDriverCreatorBase = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverCreatorBase", new SqlDriverCreatorBaseClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverCreatorBaseProxy", new SqlDriverCreatorBaseClassFactory());

					public SqlDriverCreatorBase(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(IntPtr pObject, createObject_CallBack_CSqlDriver pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createObject_CallBack_CSqlDriver = EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Function;
							GC.KeepAlive(m_createObject_CallBack_CSqlDriver);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(this.NativeObject, m_createObject_CallBack_CSqlDriver);
						}
					}
					public static SqlDriverCreatorBase FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SqlDriverCreatorBase obj = baseObj as  SqlDriverCreatorBase;
						if (object.Equals(obj, null))
						{
							obj = new SqlDriverCreatorBase(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlDriverCreatorBase");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlDriverCreatorBaseClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SqlDriverCreatorBase emptyInstance = new SqlDriverCreatorBase(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				///<summary>
				///代表一个数据库的连接
				///通过一个数据库连接提供访问数据库的接口
				///</summary>
				public class SqlDatabase : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///默认构造函数
					///</summary>
					public SqlDatabase() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSqlDatabase",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///拷贝构造函数
					///</summary>
					public SqlDatabase(EarthView.World.Core.Database.SqlDatabase other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("CSqlDatabase", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_OperatorAssign_CSqlDatabase_CSqlDatabase(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///复制操作符的重载
					///</summary>
					///<param name="other">EarthView::World::Core::Database::CSqlDatabase对象的引用</param>
					///<returns>当前对象的引</returns>
					public EarthView.World.Core.Database.SqlDatabase OperatorAssign(EarthView.World.Core.Database.SqlDatabase other)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_OperatorAssign_CSqlDatabase_CSqlDatabase(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_open_ev_bool(IntPtr pNativeObject);

					///<summary>
					///使用当前的连接值打开数据库连接
					///</summary>
					///<param name=""></param>
					///<returns>打开成功返回true，打开失败返回false</returns>
					public bool Open()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_open_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_open_ev_bool_ev_wstring_ev_wstring(IntPtr pNativeObject, IntPtr user, IntPtr password);

					///<summary>
					///使用给定的用户名和密码打开数据库连接
					///</summary>
					///<param name="user">用户名</param>
					///<param name="password">密码</param>
					///<returns>打开成功返回true，打开失败返回false</returns>
					public bool Open(string user, string password)
					{
						IntPtr __ptruser = Marshal.StringToHGlobalUni(user);
						IntPtr __ptrpassword = Marshal.StringToHGlobalUni(password);
						
						byte ret=EarthView_World_Core_Database_CSqlDatabase_open_ev_bool_ev_wstring_ev_wstring(this.NativeObject, __ptruser,__ptrpassword);
						
						Marshal.FreeHGlobal(__ptruser);
						Marshal.FreeHGlobal(__ptrpassword);
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_close_void(IntPtr pNativeObject);

					///<summary>
					///关闭数据库连接
					///</summary>
					///<param name=""></param>
					///<returns></returns>
					public void Close()
					{
						EarthView_World_Core_Database_CSqlDatabase_close_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_isOpen_ev_bool(IntPtr pNativeObject);

					///<summary>
					///当前数据库是否打开
					///</summary>
					///<param name=""></param>
					///<returns>打开返回true，否则返回false</returns>
					public bool IsOpen()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_isOpen_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_isOpenError_ev_bool(IntPtr pNativeObject);

					///<summary>
					///打开数据库时是否出错
					///</summary>
					///<param name=""></param>
					///<returns>打开出错返回true，否则返回false</returns>
					public bool IsOpenError()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_isOpenError_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_isValid_ev_bool(IntPtr pNativeObject);

					///<summary>
					///是否有一个有效的数据库驱动
					///</summary>
					///<param name=""></param>
					///<returns>有效返回true，否则返回false</returns>
					public bool IsValid()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_transaction_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 开始事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public bool Transaction()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_transaction_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_commit_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 提交事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public bool Commit()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_commit_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_rollback_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 撤销事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public bool Rollback()
					{
						byte ret=EarthView_World_Core_Database_CSqlDatabase_rollback_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setDatabaseName_void_ev_wstring(IntPtr pNativeObject, IntPtr name);

					///<summary>
					///设置数据库名
					///</summary>
					///<param name="name">数据库名</param>
					///<returns></returns>
					public void SetDatabaseName(string name)
					{
						IntPtr __ptrname = Marshal.StringToHGlobalUni(name);
						
						EarthView_World_Core_Database_CSqlDatabase_setDatabaseName_void_ev_wstring(this.NativeObject, __ptrname);
						
						Marshal.FreeHGlobal(__ptrname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setUserName_void_ev_wstring(IntPtr pNativeObject, IntPtr name);

					///<summary>
					///设置用户名
					///</summary>
					///<param name="name">用户名</param>
					///<returns></returns>
					public void SetUserName(string name)
					{
						IntPtr __ptrname = Marshal.StringToHGlobalUni(name);
						
						EarthView_World_Core_Database_CSqlDatabase_setUserName_void_ev_wstring(this.NativeObject, __ptrname);
						
						Marshal.FreeHGlobal(__ptrname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setPassword_void_ev_wstring(IntPtr pNativeObject, IntPtr password);

					///<summary>
					///设置密码
					///</summary>
					///<param name="password">密码</param>
					///<returns></returns>
					public void SetPassword(string password)
					{
						IntPtr __ptrpassword = Marshal.StringToHGlobalUni(password);
						
						EarthView_World_Core_Database_CSqlDatabase_setPassword_void_ev_wstring(this.NativeObject, __ptrpassword);
						
						Marshal.FreeHGlobal(__ptrpassword);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setHostName_void_ev_wstring(IntPtr pNativeObject, IntPtr host);

					///<summary>
					///设置主机名
					///</summary>
					///<param name="host">主机名</param>
					///<returns></returns>
					public void SetHostName(string host)
					{
						IntPtr __ptrhost = Marshal.StringToHGlobalUni(host);
						
						EarthView_World_Core_Database_CSqlDatabase_setHostName_void_ev_wstring(this.NativeObject, __ptrhost);
						
						Marshal.FreeHGlobal(__ptrhost);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setPort_void_ev_int32(IntPtr pNativeObject, int p);

					///<summary>
					///设置端口
					///</summary>
					///<param name="p">端口号</param>
					///<returns></returns>
					public void SetPort(int p)
					{
						EarthView_World_Core_Database_CSqlDatabase_setPort_void_ev_int32(this.NativeObject, p);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setConnectOptions_void_ev_wstring(IntPtr pNativeObject, IntPtr options);

					///<summary>
					///设置连接选项
					///</summary>
					///<param name="options">连接选项</param>
					///<returns></returns>
					public void SetConnectOptions(string options)
					{
						IntPtr __ptroptions = Marshal.StringToHGlobalUni(options);
						
						EarthView_World_Core_Database_CSqlDatabase_setConnectOptions_void_ev_wstring(this.NativeObject, __ptroptions);
						
						Marshal.FreeHGlobal(__ptroptions);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_databaseName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取数据库名
					///</summary>
					///<param name=""></param>
					///<returns>数据库名</returns>
					public string DatabaseName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_databaseName_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_userName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取用户名
					///</summary>
					///<param name=""></param>
					///<returns>用户名</returns>
					public string UserName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_userName_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_password_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取密码
					///</summary>
					///<param name=""></param>
					///<returns>密码</returns>
					public string Password()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_password_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_hostName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取主机名
					///</summary>
					///<param name=""></param>
					///<returns>主机名</returns>
					public string HostName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_hostName_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_driverName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取驱动名
					///</summary>
					///<param name=""></param>
					///<returns>驱动名</returns>
					public string DriverName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_driverName_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Core_Database_CSqlDatabase_port_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取端口号
					///</summary>
					///<param name=""></param>
					///<returns>端口号</returns>
					public int Port()
					{
						int ret=EarthView_World_Core_Database_CSqlDatabase_port_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_connectOptions_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取连接选项
					///</summary>
					///<param name=""></param>
					///<returns>连接选项</returns>
					public string ConnectOptions()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_connectOptions_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_connectionName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取连接名
					///</summary>
					///<param name=""></param>
					///<returns>连接名</returns>
					public string ConnectionName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_connectionName_ev_wstring(this.NativeObject);
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_driver_CSqlDriver(IntPtr pNativeObject);

					///<summary>
					///获取连接当前数据库的驱动对象
					///</summary>
					///<param name=""></param>
					///<returns>数据库驱动对象</returns>
					public EarthView.World.Core.Database.SqlDriver Driver()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_driver_CSqlDriver(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDriver csObj = new EarthView.World.Core.Database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDriver");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDriver;
							csObj.BindNativeObject(__ptr, "CSqlDriver");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_tables_CWStringArray_EVTableType(IntPtr pNativeObject, EarthView.World.Core.Database.EVTABLETYPE type);

					/// <summary>
					/// 返回数据库指定类型的所有表
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回包含的表名的EarthView::World::Core::CWStringArray</returns>
					public EarthView.World.Core.Wstringarray Tables(EarthView.World.Core.Database.EVTABLETYPE type)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_tables_CWStringArray_EVTableType(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Wstringarray csObj = new EarthView.World.Core.Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CWStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Wstringarray;
							csObj.BindNativeObject(__ptr, "CWStringArray");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_record_CSqlRecord_ev_wstring(IntPtr pNativeObject, IntPtr tablename);

					/// <summary>
					/// 返回指定表的元信息，包含各个字段信息
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的元信息的record</returns>
					public EarthView.World.Core.Database.SqlRecord Record(string tablename)
					{
						IntPtr __ptrtablename = Marshal.StringToHGlobalUni(tablename);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_record_CSqlRecord_ev_wstring(this.NativeObject, __ptrtablename);
						
						Marshal.FreeHGlobal(__ptrtablename);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlRecord csObj = new EarthView.World.Core.Database.SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlRecord");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlRecord;
							csObj.BindNativeObject(__ptr, "CSqlRecord");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_primaryIndex_CSqlIndex_ev_wstring(IntPtr pNativeObject, IntPtr tablename);

					/// <summary>
					/// 返回表的主键索引
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的EarthView::World::Core::Database::CSqlIndex</returns>
					public EarthView.World.Core.Database.SqlIndex PrimaryIndex(string tablename)
					{
						IntPtr __ptrtablename = Marshal.StringToHGlobalUni(tablename);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_primaryIndex_CSqlIndex_ev_wstring(this.NativeObject, __ptrtablename);
						
						Marshal.FreeHGlobal(__ptrtablename);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlIndex csObj = new EarthView.World.Core.Database.SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlIndex");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlIndex;
							csObj.BindNativeObject(__ptr, "CSqlIndex");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_ev_wstring_ev_wstring(IntPtr type, IntPtr connectionName);

					/// <summary>
					/// 添加数据库
					/// </summary>
					/// <param name="type">数据库类型字符串</param>
					/// <param name="connectionName">连接字符串</param>
					/// <returns>返回对应的数据库</returns>
					public static EarthView.World.Core.Database.SqlDatabase AddDatabase(string type, string connectionName)
					{
						IntPtr __ptrtype = Marshal.StringToHGlobalUni(type);
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_ev_wstring_ev_wstring(__ptrtype,__ptrconnectionName);
						
						Marshal.FreeHGlobal(__ptrtype);
						Marshal.FreeHGlobal(__ptrconnectionName);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_CSqlDriver_ev_wstring(IntPtr driver, IntPtr connectionName);

					/// <summary>
					/// 添加数据库
					/// </summary>
					/// <param name="driver">数据库驱动</param>
					/// <param name="connectionName">连接字符串</param>
					/// <returns>返回对应的数据库</returns>
					public static EarthView.World.Core.Database.SqlDatabase AddDatabase(EarthView.World.Core.Database.SqlDriver driver, string connectionName)
					{
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_CSqlDriver_ev_wstring(object.Equals(driver, null) ? IntPtr.Zero : driver.NativeObject, __ptrconnectionName);
						
						Marshal.FreeHGlobal(__ptrconnectionName);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_cloneDatabase_CSqlDatabase_CSqlDatabase_ev_wstring(IntPtr other, IntPtr connectionName);

					/// <summary>
					/// 克隆数据库
					/// </summary>
					/// <param name="other">数据库</param>
					/// <param name="connectionName">连接字符串</param>
					/// <returns>返回克隆的数据库</returns>
					public static EarthView.World.Core.Database.SqlDatabase CloneDatabase(EarthView.World.Core.Database.SqlDatabase other, string connectionName)
					{
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_cloneDatabase_CSqlDatabase_CSqlDatabase_ev_wstring(object.Equals(other, null) ? IntPtr.Zero : other.NativeObject, __ptrconnectionName);
						
						Marshal.FreeHGlobal(__ptrconnectionName);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_database_CSqlDatabase_ev_wstring_ev_bool(IntPtr connectionName, byte open);

					/// <summary>
					/// 查找数据库
					/// </summary>
					/// <param name="connectionName">连接字符串</param>
					/// <param name="open">如果没有是否打开</param>
					/// <returns>返回数据库</returns>
					public static EarthView.World.Core.Database.SqlDatabase Database(string connectionName, bool open)
					{
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_database_CSqlDatabase_ev_wstring_ev_bool(__ptrconnectionName,Convert.ToByte(open));
						
						Marshal.FreeHGlobal(__ptrconnectionName);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_removeDatabase_void_ev_wstring(IntPtr connectionName);

					/// <summary>
					/// 移除数据库
					/// </summary>
					/// <param name="connectionName">连接字符串</param>
					/// <returns></returns>
					public static void RemoveDatabase(string connectionName)
					{
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						EarthView_World_Core_Database_CSqlDatabase_removeDatabase_void_ev_wstring(__ptrconnectionName);
						
						Marshal.FreeHGlobal(__ptrconnectionName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_contains_ev_bool_ev_wstring(IntPtr connectionName);

					/// <summary>
					/// 判断是否包含了数据库
					/// </summary>
					/// <param name="connectionName">连接字符串</param>
					/// <returns>如果已存在，返回true，否则，false</returns>
					public static bool Contains(string connectionName)
					{
						IntPtr __ptrconnectionName = Marshal.StringToHGlobalUni(connectionName);
						
						byte ret=EarthView_World_Core_Database_CSqlDatabase_contains_ev_bool_ev_wstring(__ptrconnectionName);
						
						Marshal.FreeHGlobal(__ptrconnectionName);
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_drivers_CWStringArray();

					/// <summary>
					/// 获取所有的driver的对应字符串标识
					/// </summary>
					/// <returns>返回所有的driver的对应标识字符串数组</returns>
					public static EarthView.World.Core.Wstringarray Drivers()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_drivers_CWStringArray();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Wstringarray csObj = new EarthView.World.Core.Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CWStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Wstringarray;
							csObj.BindNativeObject(__ptr, "CWStringArray");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_Database_CSqlDatabase_connectionNames_CWStringArray();

					/// <summary>
					/// 获取所有的连接名
					/// </summary>
					/// <returns>返回所有的连接名字符串数组</returns>
					public static EarthView.World.Core.Wstringarray ConnectionNames()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDatabase_connectionNames_CWStringArray();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Wstringarray csObj = new EarthView.World.Core.Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CWStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Wstringarray;
							csObj.BindNativeObject(__ptr, "CWStringArray");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_registerSqlDriver_void_ev_wstring_CSqlDriverCreatorBase(IntPtr name, IntPtr creator);

					/// <summary>
					/// 注册数据库driver
					/// </summary>
					/// <param name="name">数据库类型字符串</param>
					/// <param name="creator">driver的创建者</param>
					/// <returns></returns>
					public static void RegisterSqlDriver(string name, EarthView.World.Core.Database.SqlDriverCreatorBase creator)
					{
						IntPtr __ptrname = Marshal.StringToHGlobalUni(name);
						
						EarthView_World_Core_Database_CSqlDatabase_registerSqlDriver_void_ev_wstring_CSqlDriverCreatorBase(__ptrname,object.Equals(creator, null) ? IntPtr.Zero : creator.NativeObject);
						
						Marshal.FreeHGlobal(__ptrname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_Database_CSqlDatabase_isDriverAvailable_ev_bool_ev_wstring(IntPtr name);

					/// <summary>
					/// 是否已经注册数据库driver
					/// </summary>
					/// <param name="name">数据库类型字符串</param>
					/// <returns>如果已注册返回true，否则false</returns>
					public static bool IsDriverAvailable(string name)
					{
						IntPtr __ptrname = Marshal.StringToHGlobalUni(name);
						
						byte ret=EarthView_World_Core_Database_CSqlDatabase_isDriverAvailable_ev_bool_ev_wstring(__ptrname);
						
						Marshal.FreeHGlobal(__ptrname);
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_Database_CSqlDatabase_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(IntPtr pNativeObject, EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy);

					///<summary>
					///设置当前数据库的精度
					///</summary>
					///<param name="precisionPolicy">精度</param>
					///<returns></returns>
					public void SetNumericalPrecisionPolicy(EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy)
					{
						EarthView_World_Core_Database_CSqlDatabase_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(this.NativeObject, precisionPolicy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DatabaseUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Core_Database_CSqlDatabase_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(IntPtr pNativeObject);

					///<summary>
					///获取当前数据库的精度
					///</summary>
					///<param name=""></param>
					///<returns>精度值</returns>
					public EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY NumericalPrecisionPolicy()
					{
						int ret=EarthView_World_Core_Database_CSqlDatabase_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(this.NativeObject);
						
						return (EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_d.so");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.so");

						#else 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility.so");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp.so");

						#else 
							private static bool bLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDatabase = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDatabase", new SqlDatabaseClassFactory());

					public SqlDatabase(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SqlDatabase FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SqlDatabase obj = baseObj as  SqlDatabase;
						if (object.Equals(obj, null))
						{
							obj = new SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlDatabase");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlDatabaseClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SqlDatabase emptyInstance = new SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
