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
				public enum EVBATCHEXECUTIONMODE
				{
								ValuesAsRows,
								ValuesAsColumns
				
				}

				///<summary>
				///提供执行和生成sql语句的方法
				///</summary>
				public class SqlQuery : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					///<param name="r">result指针</param>
					///<returns><returns>
					public SqlQuery(EarthView.World.Core.Database.SqlResult r) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuer = new BasePtr(r);
						list.Add("r", valuer.PtrVal);
						Create("CSqlQuery", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					///<param name=""></param>
					///<returns><returns>
					public SqlQuery() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSqlQuery",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					///<param name="query">sql语句</param>
					///<returns><returns>
					public SqlQuery(string query) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuequery = new BasePtr(query);
						list.Add("query", valuequery.PtrVal);
						Create("CSqlQuery", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					///<param name="query">sql语句</param>
					///<param name="db">数据库连接对象</param>
					///<returns><returns>
					public SqlQuery(string query, EarthView.World.Core.Database.SqlDatabase db) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuequery = new BasePtr(query);
						list.Add("query", valuequery.PtrVal);
						BasePtr valuedb = new BasePtr(db);
						list.Add("db", valuedb.PtrVal);
						Create("CSqlQuery", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///显示构造函数
					///</summary>
					///<param name="query">数据库连接对象</param>
					///<returns><returns>
					public SqlQuery(EarthView.World.Core.Database.SqlDatabase db) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedb = new BasePtr(db);
						list.Add("db", valuedb.PtrVal);
						Create("CSqlQuery", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///默认构造函数
					///</summary>
					///<param name="other">query对象</param>
					///<returns><returns>
					public SqlQuery(EarthView.World.Core.Database.SqlQuery other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("CSqlQuery", list);
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_OperatorAssign_CSqlQuery_CSqlQuery(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///重载赋值操作符
					///</summary>
					///<param name="other">query对象</param>
					///<returns><returns>
					public EarthView.World.Core.Database.SqlQuery OperatorAssign(EarthView.World.Core.Database.SqlQuery other)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_OperatorAssign_CSqlQuery_CSqlQuery(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Core.Database.SqlQuery csObj = new EarthView.World.Core.Database.SqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlQuery");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlQuery;
							csObj.BindNativeObject(__ptr, "CSqlQuery");
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_wstring_CVariant_EVParamType(IntPtr pNativeObject, IntPtr placeholder, IntPtr val, EarthView.World.Core.Database.EVPARAMTYPE type);

					///<summary>
					/// 绑定数据到指定的位置
					/// </summary>
					/// <param name="placeholder">绑定位置的占位符</param>
					/// <param name="val">待绑定的数据</param>
					/// <param name="type">绑定类型</param>
					///<returns>void</returns>
					public void BindValue(string placeholder, EarthView.World.Core.Variant val, EarthView.World.Core.Database.EVPARAMTYPE type)
					{
						IntPtr __ptrplaceholder = Marshal.StringToHGlobalUni(placeholder);
						
						EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_wstring_CVariant_EVParamType(this.NativeObject, __ptrplaceholder,object.Equals(val, null) ? IntPtr.Zero : val.NativeObject, type);
						
						Marshal.FreeHGlobal(__ptrplaceholder);
						
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_int32_CVariant_EVParamType(IntPtr pNativeObject, int pos, IntPtr val, EarthView.World.Core.Database.EVPARAMTYPE type);

					///<summary>
					/// 绑定数据到指定的位置
					/// </summary>
					/// <para m name="pos">绑定位置的索引</param>
					/// <param name="val">待绑定的数据</param>
					/// <param name="type">绑定类型</param>
					///<returns>void</returns>
					public void BindValue(int pos, EarthView.World.Core.Variant val, EarthView.World.Core.Database.EVPARAMTYPE type)
					{
						EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_int32_CVariant_EVParamType(this.NativeObject, pos, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject, type);
						
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_addBindValue_void_CVariant_EVParamType(IntPtr pNativeObject, IntPtr val, EarthView.World.Core.Database.EVPARAMTYPE type);

					///<summary>
					/// 添加绑定数据到下一个绑定位置，按顺序绑定
					/// </summary>
					/// <param name="val">待绑定的数据</param>
					/// <param name="type">绑定类型</param>
					///<returns>void</returns>
					public void AddBindValue(EarthView.World.Core.Variant val, EarthView.World.Core.Database.EVPARAMTYPE type)
					{
						EarthView_World_Core_Database_CSqlQuery_addBindValue_void_CVariant_EVParamType(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject, type);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_wstring(IntPtr pNativeObject, IntPtr placeholder);

					///<summary>
					/// 返回指定位置的绑定数据
					/// </summary>
					/// <param name="placeholder">指定绑定位置的占位符</param>
					///<returns>已绑定的数据</returns>
					public EarthView.World.Core.Variant BoundValue(string placeholder)
					{
						IntPtr __ptrplaceholder = Marshal.StringToHGlobalUni(placeholder);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_wstring(this.NativeObject, __ptrplaceholder);
						
						Marshal.FreeHGlobal(__ptrplaceholder);
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_int32(IntPtr pNativeObject, int pos);

					///<summary>
					/// 返回指定位置的绑定数据
					/// </summary>
					/// <param name="pos">指定绑定位置的索引</param>
					///<returns>已绑定的数据</returns>
					public EarthView.World.Core.Variant BoundValue(int pos)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_int32(this.NativeObject, pos);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_clear_void(IntPtr pNativeObject);

					///<summary>
					/// 清空对象的所有状态
					/// </summary>
					///<returns>void</returns>
					public void Clear()
					{
						EarthView_World_Core_Database_CSqlQuery_clear_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_driver_CSqlDriver(IntPtr pNativeObject);

					///<summary>
					/// 返回driver
					/// </summary>
					///<returns>返回driver指针</returns>
					public EarthView.World.Core.Database.SqlDriver Driver()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_driver_CSqlDriver(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_exec_ev_bool_ev_wstring(IntPtr pNativeObject, IntPtr query);

					///<summary>
					/// 执行SQL语句
					/// </summary>
					/// <param name="query">SQL语句</param>
					///<returns>成功返回true，失败返回false</returns>
					public bool Exec(string query)
					{
						IntPtr __ptrquery = Marshal.StringToHGlobalUni(query);
						
						byte ret=EarthView_World_Core_Database_CSqlQuery_exec_ev_bool_ev_wstring(this.NativeObject, __ptrquery);
						
						Marshal.FreeHGlobal(__ptrquery);
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_exec_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 执行已准备好的SQL语句
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool Exec()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_exec_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_execBatch_bool_EVBatchExecutionMode(IntPtr pNativeObject, EarthView.World.Core.Database.EVBATCHEXECUTIONMODE mode);

					///<summary>
					/// 执行已准备好的SQL语句,主要用于批量导入。
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool ExecBatch(EarthView.World.Core.Database.EVBATCHEXECUTIONMODE mode)
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_execBatch_bool_EVBatchExecutionMode(this.NativeObject, mode);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_executedQuery_ev_wstring(IntPtr pNativeObject);

					///<summary>
					/// 返回已执行的SQL语句
					/// </summary>
					///<returns>已执行的SQL语句</returns>
					public string ExecutedQuery()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_executedQuery_ev_wstring(this.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_finish_void(IntPtr pNativeObject);

					///<summary>
					/// 结束当前的数据库操作，清空当前操作状态
					/// </summary>
					///<returns>void</returns>
					public void Finish()
					{
						EarthView_World_Core_Database_CSqlQuery_finish_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_first_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 索引到第一个select的结果
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool First()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_first_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_last_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 索引到最后一个select的结果
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool Last()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_last_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_next_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 索引到下一个select的结果
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool Next()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_next_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_previous_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 索引到上一个select的结果
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool Previous()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_previous_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_isActive_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 是否是活动状态
					/// </summary>
					///<returns>是返回true，否返回false</returns>
					public bool IsActive()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_isActive_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_isForwardOnly_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 是否只支持前向查询
					/// </summary>
					///<returns>是返回true，否返回false</returns>
					public bool IsForwardOnly()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_isForwardOnly_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_seek_ev_bool_ev_int32_ev_bool(IntPtr pNativeObject, int index, byte relative);

					///ev_bool nextResult();
					////<summary>
					//// 索引到指定的位置
					//// </summary>
					//// <param name="index">索引的位置</param>
					//// <param name="relative">是否是相对当前的位置</param>
					////<returns>成功返回true，失败返回false</returns>
					public bool Seek(int index, bool relative)
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_seek_ev_bool_ev_int32_ev_bool(this.NativeObject, index, Convert.ToByte(relative));
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_result_CSqlResult(IntPtr pNativeObject);

					///<summary>
					/// 返回result的引用
					/// </summary>
					///<returns>返回result指针</returns>
					public EarthView.World.Core.Database.SqlResult Result()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_result_CSqlResult(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlResult csObj = new EarthView.World.Core.Database.SqlResult(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlResult");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlResult;
							csObj.BindNativeObject(__ptr, "CSqlResult");
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_record_CSqlRecord(IntPtr pNativeObject);

					///<summary>
					/// 返回当前的record
					/// </summary>
					///<returns>当前的record</returns>
					public EarthView.World.Core.Database.SqlRecord Record()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_record_CSqlRecord(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_value_CVariant_ev_int32(IntPtr pNativeObject, int i);

					///<summary>
					/// 返回当前记录中的指定字段的值
					/// </summary>
					/// <param name="index">字段的索引的位置</param>
					///<returns>返回字段的值</returns>
					public EarthView.World.Core.Variant Value(int i)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_value_CVariant_ev_int32(this.NativeObject, i);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
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
					private static extern int EarthView_World_Core_Database_CSqlQuery_size_ev_int32(IntPtr pNativeObject);

					///<summary>
					/// 返回result的记录个数
					/// </summary>
					///<returns>成功返回记录个数，失败（可能数据库不支持，或者无法确定个数）返回-1</returns>
					public int Size()
					{
						int ret=EarthView_World_Core_Database_CSqlQuery_size_ev_int32(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_isValid_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 当前是否是在有效的记录上
					/// </summary>
					///<returns>是返回true，否返回false</returns>
					public bool IsValid()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_isValid_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_isNull_ev_bool_ev_int32(IntPtr pNativeObject, int field);

					///<summary>
					/// 当前记录的指定位置字段是否为空
					/// </summary>
					///<returns>是返回true，否返回false</returns>
					public bool IsNull(int field)
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_isNull_ev_bool_ev_int32(this.NativeObject, field);
						
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
					private static extern int EarthView_World_Core_Database_CSqlQuery_at_ev_int32(IntPtr pNativeObject);

					///<summary>
					/// 当前记录的位置
					/// </summary>
					///<returns>位置索引</returns>
					public int At()
					{
						int ret=EarthView_World_Core_Database_CSqlQuery_at_ev_int32(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_isSelect_ev_bool(IntPtr pNativeObject);

					///<summary>
					/// 是否是查询状态
					/// </summary>
					///<returns>是返回true，否返回false</returns>
					public bool IsSelect()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_isSelect_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_setForwardOnly_void_ev_bool(IntPtr pNativeObject, byte forward);

					///<summary>
					/// 设置是否仅前向
					/// </summary>
					/// <param name="forward">是否</param>
					///<returns>void</returns>
					public void SetForwardOnly(bool forward)
					{
						EarthView_World_Core_Database_CSqlQuery_setForwardOnly_void_ev_bool(this.NativeObject, Convert.ToByte(forward));
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_prepare_ev_bool_ev_wstring(IntPtr pNativeObject, IntPtr query);

					///<summary>
					/// 准备查询语句
					/// </summary>
					///<returns>成功返回true，失败返回false</returns>
					public bool Prepare(string query)
					{
						IntPtr __ptrquery = Marshal.StringToHGlobalUni(query);
						
						byte ret=EarthView_World_Core_Database_CSqlQuery_prepare_ev_bool_ev_wstring(this.NativeObject, __ptrquery);
						
						Marshal.FreeHGlobal(__ptrquery);
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlQuery_lastInsertId_CVariant(IntPtr pNativeObject);

					///<summary>
					/// 获取最后插入的记录的ID
					/// </summary>
					///<returns>返回包含ID的EarthView::World::Core::CVariant</returns>
					public EarthView.World.Core.Variant LastInsertId()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlQuery_lastInsertId_CVariant(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
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
					private static extern int EarthView_World_Core_Database_CSqlQuery_numRowsAffected_ev_int32(IntPtr pNativeObject);

					///<summary>
					///返回sql操作对结果集影响的行数
					///</summary>
					///<param name=""></param>
					///<returns>sql操作对结果集影响的行数</returns>
					public int NumRowsAffected()
					{
						int ret=EarthView_World_Core_Database_CSqlQuery_numRowsAffected_ev_int32(this.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlQuery_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(IntPtr pNativeObject, EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy);

					///<summary>
					///设置当前数据库的精度
					///</summary>
					///<param name="precisionPolicy">精度</param>
					///<returns></returns>
					public void SetNumericalPrecisionPolicy(EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy)
					{
						EarthView_World_Core_Database_CSqlQuery_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(this.NativeObject, precisionPolicy);
						
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
					private static extern int EarthView_World_Core_Database_CSqlQuery_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(IntPtr pNativeObject);

					///<summary>
					///获取当前数据库的精度
					///</summary>
					///<param name=""></param>
					///<returns>精度值</returns>
					public EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY NumericalPrecisionPolicy()
					{
						int ret=EarthView_World_Core_Database_CSqlQuery_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(this.NativeObject);
						
						return (EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY)ret;
						
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
					private static extern byte EarthView_World_Core_Database_CSqlQuery_nextResult_ev_bool(IntPtr pNativeObject);

					///<summary>
					///删除当前结果集并定位到下一个可用结果集
					///</summary>
					///<param name=""></param>
					///<returns>成功返回true,否则返回false</returns>
					public bool NextResult()
					{
						byte ret=EarthView_World_Core_Database_CSqlQuery_nextResult_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_d.so");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp_d.so");

						#else 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility.so");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp.so");

						#else 
							private static bool bLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlQuery = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlQuery", new SqlQueryClassFactory());

					public SqlQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SqlQuery FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SqlQuery obj = baseObj as  SqlQuery;
						if (object.Equals(obj, null))
						{
							obj = new SqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlQuery");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlQueryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SqlQuery emptyInstance = new SqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
