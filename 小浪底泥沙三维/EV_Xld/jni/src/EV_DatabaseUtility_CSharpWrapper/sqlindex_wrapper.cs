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
				///提供生成和描述数据库索引的方法
				///</summary>
				public class SqlIndex : EarthView.World.Core.Database.SqlRecord
				{
					///<summary>
					///构造函数
					///</summary>
					public SqlIndex() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSqlIndex",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					///<param name="cursorName">游标名</param>
					///<returns></returns>
					public SqlIndex(string cursorName) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecursorName = new BasePtr(cursorName);
						list.Add("cursorName", valuecursorName.PtrVal);
						Create("CSqlIndex", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					///<param name="cursorName">游标名</param>
					///<param name="name">索引名</param>
					///<returns></returns>
					public SqlIndex(string cursorName, string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecursorName = new BasePtr(cursorName);
						list.Add("cursorName", valuecursorName.PtrVal);
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CSqlIndex", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///拷贝构造函数
					///</summary>
					///<param name="other">索引对象</param>
					///<returns></returns>
					public SqlIndex(EarthView.World.Core.Database.SqlIndex other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("CSqlIndex", list);
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlIndex_OperatorAssign_CSqlIndex_CSqlIndex(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///赋值操作符的重载
					///</summary>
					///<param name="other">索引对象</param>
					///<returns></returns>
					public EarthView.World.Core.Database.SqlIndex OperatorAssign(EarthView.World.Core.Database.SqlIndex other)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlIndex_OperatorAssign_CSqlIndex_CSqlIndex(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Core.Database.SqlIndex csObj = new EarthView.World.Core.Database.SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlIndex");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlIndex;
							csObj.BindNativeObject(__ptr, "CSqlIndex");
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
					private static extern void EarthView_World_Core_Database_CSqlIndex_setCursorName_void_ev_wstring(IntPtr pNativeObject, IntPtr cursorName);

					///<summary>
					///设置当前索引对应的游标名
					///</summary>
					///<param name="cursorName">游标名</param>
					///<returns></returns>
					public void SetCursorName(string cursorName)
					{
						IntPtr __ptrcursorName = Marshal.StringToHGlobalUni(cursorName);
						
						EarthView_World_Core_Database_CSqlIndex_setCursorName_void_ev_wstring(this.NativeObject, __ptrcursorName);
						
						Marshal.FreeHGlobal(__ptrcursorName);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlIndex_cursorName_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取当前索引对应的游标名
					///</summary>
					///<param name=""></param>
					///<returns>当前索引对应的游标名</returns>
					public string CursorName()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlIndex_cursorName_ev_wstring(this.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlIndex_setName_void_ev_wstring(IntPtr pNativeObject, IntPtr name);

					///<summary>
					///设置索引名
					///</summary>
					///<param name="name">索引名</param>
					///<returns></returns>
					public void SetName(string name)
					{
						IntPtr __ptrname = Marshal.StringToHGlobalUni(name);
						
						EarthView_World_Core_Database_CSqlIndex_setName_void_ev_wstring(this.NativeObject, __ptrname);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlIndex_name_ev_wstring(IntPtr pNativeObject);

					///<summary>
					///获取当前索引对应的索引名
					///</summary>
					///<param name=""></param>
					///<returns>当前索引对应的索引名</returns>
					public string Name()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlIndex_name_ev_wstring(this.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField(IntPtr pNativeObject, IntPtr field);

					///<summary>
					///有索引的字段链表中追加字段
					///</summary>
					///<param name="field">字段</param>
					///<returns></returns>
					public void Append(EarthView.World.Core.Database.SqlField field)
					{
						EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField(this.NativeObject, object.Equals(field, null) ? IntPtr.Zero : field.NativeObject);
						
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
					private static extern void EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField_ev_bool(IntPtr pNativeObject, IntPtr field, byte desc);

					///<summary>
					///有索引的字段链表中追加字段
					///</summary>
					///<param name="field">字段</param>
					///<param name="desc">是否为降序</param>
					///<returns></returns>
					public void Append(EarthView.World.Core.Database.SqlField field, bool desc)
					{
						EarthView_World_Core_Database_CSqlIndex_append_void_CSqlField_ev_bool(this.NativeObject, object.Equals(field, null) ? IntPtr.Zero : field.NativeObject, Convert.ToByte(desc));
						
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
					private static extern byte EarthView_World_Core_Database_CSqlIndex_isDescending_ev_bool_ev_int32(IntPtr pNativeObject, int i);

					///<summary>
					///在索引i处的字段是否为降序排列
					///</summary>
					///<param name="i">索引号</param>
					///<returns>是降序返回true，否则返回false</returns>
					public bool IsDescending(int i)
					{
						byte ret=EarthView_World_Core_Database_CSqlIndex_isDescending_ev_bool_ev_int32(this.NativeObject, i);
						
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
					private static extern void EarthView_World_Core_Database_CSqlIndex_setDescending_void_ev_int32_ev_bool(IntPtr pNativeObject, int i, byte desc);

					///<summary>
					///设置在索引i处的字段是否为降序排列
					///</summary>
					///<param name="i">索引号</param>
					///<param name="desc">是否为降序</param>
					///<returns></returns>
					public void SetDescending(int i, bool desc)
					{
						EarthView_World_Core_Database_CSqlIndex_setDescending_void_ev_int32_ev_bool(this.NativeObject, i, Convert.ToByte(desc));
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_d.so");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp_d.so");

						#else 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility.so");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp.so");

						#else 
							private static bool bLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlIndex = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlIndex", new SqlIndexClassFactory());

					public SqlIndex(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SqlIndex FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SqlIndex obj = baseObj as  SqlIndex;
						if (object.Equals(obj, null))
						{
							obj = new SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlIndex");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlIndexClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SqlIndex emptyInstance = new SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
