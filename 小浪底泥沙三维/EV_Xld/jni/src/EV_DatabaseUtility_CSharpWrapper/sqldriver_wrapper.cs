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
				///访问指定数据库的数据库驱动基类
				///</summary>
				public class SqlDriver : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 数据库特性枚举
					/// </summary>
					public enum EVDRIVERFEATURE
					{
										DF_Transactions,
										DF_QuerySize,
										DF_BLOB,
										DF_Unicode,
										DF_PreparedQueries,
										DF_NamedPlaceholders,
										DF_PositionalPlaceholders,
										DF_LastInsertId,
										DF_BatchOperations,
										DF_SimpleLocking,
										DF_LowPrecisionNumbers,
										DF_EventNotifications,
										DF_FinishQuery,
										DF_MultipleResultSets
					
					}

					/// <summary>
					///	SQL语句类型枚举
					/// </summary>
					public enum EVSTATEMENTTYPE
					{
										ST_WhereStatement,
										ST_SelectStatement,
										ST_UpdateStatement,
										ST_InsertStatement,
										ST_DeleteStatement
					
					}

					/// <summary>
					///	标识类型枚举
					/// </summary>
					public enum EVIDENTIFIERTYPE
					{
										IT_FieldName,
										IT_TableName
					
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr handle_CallBack_CVariant();

					protected handle_CallBack_CVariant m_handle_CallBack_CVariant;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_handle_CVariant_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 返回数据库的句柄
					/// </summary>
					/// <returns>数据库句柄</returns>
					public virtual EarthView.World.Core.Variant Handle_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_handle_CVariant_NoVirtual(this.NativeObject);
						
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

					protected  IntPtr EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Function()
					{
						EarthView.World.Core.Variant csret=Handle();
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_handle_CVariant(IntPtr pNativeObject);

					/// <summary>
					/// 返回数据库的句柄
					/// </summary>
					/// <returns>数据库句柄</returns>
					public virtual EarthView.World.Core.Variant Handle()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_handle_CVariant(this.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte hasFeature_CallBack_ev_bool_EVDriverFeature(EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f);

					protected hasFeature_CallBack_ev_bool_EVDriverFeature m_hasFeature_CallBack_ev_bool_EVDriverFeature;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_NoVirtual(IntPtr pNativeObject, EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f);

					/// <summary>
					/// 判断数据库是否支持某一特性
					/// </summary>
					/// <param name="f">数据库特性</param>
					/// <returns>如果支持返回true，否则false</returns>
					public virtual bool HasFeature_NoVirtual(EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f)
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_NoVirtual(this.NativeObject, f);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Function(EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f)
					{
						bool csret=HasFeature(f);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(IntPtr pNativeObject, EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f);

					/// <summary>
					/// 判断数据库是否支持某一特性
					/// </summary>
					/// <param name="f">数据库特性</param>
					/// <returns>如果支持返回true，否则false</returns>
					public virtual bool HasFeature(EarthView.World.Core.Database.SqlDriver.EVDRIVERFEATURE f)
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(this.NativeObject, f);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isOpen_CallBack_ev_bool();

					protected isOpen_CallBack_ev_bool m_isOpen_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///当前数据库是否打开
					///</summary>
					///<param name=""></param>
					///<returns>打开返回true，否则返回false</returns>
					public virtual bool IsOpen_NoVirtual()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Function()
					{
						bool csret=IsOpen();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(IntPtr pNativeObject);

					///<summary>
					///当前数据库是否打开
					///</summary>
					///<param name=""></param>
					///<returns>打开返回true，否则返回false</returns>
					public virtual bool IsOpen()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_isOpenError_ev_bool(IntPtr pNativeObject);

					///<summary>
					///打开数据库时是否出错
					///</summary>
					///<param name=""></param>
					///<returns>打开出错返回true，否则返回false</returns>
					public bool IsOpenError()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_isOpenError_ev_bool(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_lastError_CSqlError(IntPtr pNativeObject);

					///<summary>
					///获取发生在数据库上面的最后的错误
					///</summary>
					///<param name=""></param>
					///<returns>包含发生在数据库上面的最后的错误信息的EarthView::World::Core::Database::CSqlError对象</returns>
					public EarthView.World.Core.Database.SqlError LastError()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_lastError_CSqlError(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlError csObj = new EarthView.World.Core.Database.SqlError(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlError");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlError;
							csObj.BindNativeObject(__ptr, "CSqlError");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte exist_CallBack_ev_bool_ev_wstring(ref IntPtr dbname);

					protected exist_CallBack_ev_bool_ev_wstring m_exist_CallBack_ev_bool_ev_wstring;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_NoVirtual(IntPtr pNativeObject, IntPtr dbname);

					/// <summary>
					/// 判断指定数据库是否存在
					/// </summary>
					/// <param name="dbname">数据库名</param>
					/// <returns>返回True or False</returns>
					public virtual bool Exist_NoVirtual(string dbname)
					{
						IntPtr __ptrdbname=Marshal.StringToHGlobalUni(dbname);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_NoVirtual(this.NativeObject, __ptrdbname);
						
						Marshal.FreeHGlobal(__ptrdbname);
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Function(ref IntPtr dbname)
					{
						string strdbname= Marshal.PtrToStringAnsi(dbname);
						ClassFactory.FreeString(ref dbname);
						
						bool csret=Exist(strdbname);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(IntPtr pNativeObject, IntPtr dbname);

					/// <summary>
					/// 判断指定数据库是否存在
					/// </summary>
					/// <param name="dbname">数据库名</param>
					/// <returns>返回True or False</returns>
					public virtual bool Exist(string dbname)
					{
						IntPtr __ptrdbname = Marshal.StringToHGlobalUni(dbname);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(this.NativeObject, __ptrdbname);
						
						Marshal.FreeHGlobal(__ptrdbname);
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr tables_CallBack_CWStringArray_EVTableType(EarthView.World.Core.Database.EVTABLETYPE tableType);

					protected tables_CallBack_CWStringArray_EVTableType m_tables_CallBack_CWStringArray_EVTableType;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_NoVirtual(IntPtr pNativeObject, EarthView.World.Core.Database.EVTABLETYPE tableType);

					/// <summary>
					/// 检索数据库的指定类型的所有表名
					/// </summary>
					/// <param name="tableType">表类型</param>
					/// <returns>返回数据库的指定类型的所有表名</returns>
					public virtual EarthView.World.Core.Wstringarray Tables_NoVirtual(EarthView.World.Core.Database.EVTABLETYPE tableType)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_NoVirtual(this.NativeObject, tableType);
						
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

					protected  IntPtr EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Function(EarthView.World.Core.Database.EVTABLETYPE tableType)
					{
						EarthView.World.Core.Wstringarray csret=Tables(tableType);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(IntPtr pNativeObject, EarthView.World.Core.Database.EVTABLETYPE tableType);

					/// <summary>
					/// 检索数据库的指定类型的所有表名
					/// </summary>
					/// <param name="tableType">表类型</param>
					/// <returns>返回数据库的指定类型的所有表名</returns>
					public virtual EarthView.World.Core.Wstringarray Tables(EarthView.World.Core.Database.EVTABLETYPE tableType)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(this.NativeObject, tableType);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr primaryIndex_CallBack_CSqlIndex_ev_wstring(ref IntPtr tableName);

					protected primaryIndex_CallBack_CSqlIndex_ev_wstring m_primaryIndex_CallBack_CSqlIndex_ev_wstring;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_NoVirtual(IntPtr pNativeObject, IntPtr tableName);

					/// <summary>
					/// 返回表的主键索引
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的EarthView::World::Core::Database::CSqlIndex</returns>
					public virtual EarthView.World.Core.Database.SqlIndex PrimaryIndex_NoVirtual(string tableName)
					{
						IntPtr __ptrtableName=Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_NoVirtual(this.NativeObject, __ptrtableName);
						
						Marshal.FreeHGlobal(__ptrtableName);
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

					protected  IntPtr EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Function(ref IntPtr tableName)
					{
						string strtableName= Marshal.PtrToStringAnsi(tableName);
						ClassFactory.FreeString(ref tableName);
						
						EarthView.World.Core.Database.SqlIndex csret=PrimaryIndex(strtableName);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(IntPtr pNativeObject, IntPtr tableName);

					/// <summary>
					/// 返回表的主键索引
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的EarthView::World::Core::Database::CSqlIndex</returns>
					public virtual EarthView.World.Core.Database.SqlIndex PrimaryIndex(string tableName)
					{
						IntPtr __ptrtableName = Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(this.NativeObject, __ptrtableName);
						
						Marshal.FreeHGlobal(__ptrtableName);
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr record_CallBack_CSqlRecord_ev_wstring(ref IntPtr tableName);

					protected record_CallBack_CSqlRecord_ev_wstring m_record_CallBack_CSqlRecord_ev_wstring;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_NoVirtual(IntPtr pNativeObject, IntPtr tableName);

					/// <summary>
					/// 返回指定表的元信息，包含各个字段信息
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的元信息的record</returns>
					public virtual EarthView.World.Core.Database.SqlRecord Record_NoVirtual(string tableName)
					{
						IntPtr __ptrtableName=Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_NoVirtual(this.NativeObject, __ptrtableName);
						
						Marshal.FreeHGlobal(__ptrtableName);
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

					protected  IntPtr EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Function(ref IntPtr tableName)
					{
						string strtableName= Marshal.PtrToStringAnsi(tableName);
						ClassFactory.FreeString(ref tableName);
						
						EarthView.World.Core.Database.SqlRecord csret=Record(strtableName);
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(IntPtr pNativeObject, IntPtr tableName);

					/// <summary>
					/// 返回指定表的元信息，包含各个字段信息
					/// </summary>
					/// <param name="tablename">表名</param>
					/// <returns>返回对应的表的元信息的record</returns>
					public virtual EarthView.World.Core.Database.SqlRecord Record(string tableName)
					{
						IntPtr __ptrtableName = Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(this.NativeObject, __ptrtableName);
						
						Marshal.FreeHGlobal(__ptrtableName);
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(ref IntPtr db, ref IntPtr user, ref IntPtr password, ref IntPtr host, int port, ref IntPtr connOpts);

					protected open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring m_open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_NoVirtual(IntPtr pNativeObject, IntPtr db, IntPtr user, IntPtr password, IntPtr host, int port, IntPtr connOpts);

					///<summary>
					///根据给定的信息打开数据库
					///</summary>
					///<param name="db">数据库名</param>
					///<param name="user">用户名</param>
					///<param name="password">密码</param>
					///<param name="host">主机名</param>
					///<param name="port">端口号</param>
					///<param name="connOpts">连接选项</param>
					///<returns>打开成功返回true,否则返回false</returns>
					public virtual bool Open_NoVirtual(string db, string user, string password, string host, int port, string connOpts)
					{
						IntPtr __ptrdb=Marshal.StringToHGlobalUni(db);
						IntPtr __ptruser=Marshal.StringToHGlobalUni(user);
						IntPtr __ptrpassword=Marshal.StringToHGlobalUni(password);
						IntPtr __ptrhost=Marshal.StringToHGlobalUni(host);
						IntPtr __ptrconnOpts=Marshal.StringToHGlobalUni(connOpts);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_NoVirtual(this.NativeObject, __ptrdb, __ptruser, __ptrpassword, __ptrhost, port, __ptrconnOpts);
						
						Marshal.FreeHGlobal(__ptrdb);
						Marshal.FreeHGlobal(__ptruser);
						Marshal.FreeHGlobal(__ptrpassword);
						Marshal.FreeHGlobal(__ptrhost);
						Marshal.FreeHGlobal(__ptrconnOpts);
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Function(ref IntPtr db, ref IntPtr user, ref IntPtr password, ref IntPtr host, int port, ref IntPtr connOpts)
					{
						string strdb= Marshal.PtrToStringAnsi(db);
						ClassFactory.FreeString(ref db);
						string struser= Marshal.PtrToStringAnsi(user);
						ClassFactory.FreeString(ref user);
						string strpassword= Marshal.PtrToStringAnsi(password);
						ClassFactory.FreeString(ref password);
						string strhost= Marshal.PtrToStringAnsi(host);
						ClassFactory.FreeString(ref host);
						string strconnOpts= Marshal.PtrToStringAnsi(connOpts);
						ClassFactory.FreeString(ref connOpts);
						
						bool csret=Open(strdb,struser,strpassword,strhost,port, strconnOpts);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(IntPtr pNativeObject, IntPtr db, IntPtr user, IntPtr password, IntPtr host, int port, IntPtr connOpts);

					///<summary>
					///根据给定的信息打开数据库
					///</summary>
					///<param name="db">数据库名</param>
					///<param name="user">用户名</param>
					///<param name="password">密码</param>
					///<param name="host">主机名</param>
					///<param name="port">端口号</param>
					///<param name="connOpts">连接选项</param>
					///<returns>打开成功返回true,否则返回false</returns>
					public virtual bool Open(string db, string user, string password, string host, int port, string connOpts)
					{
						IntPtr __ptrdb = Marshal.StringToHGlobalUni(db);
						IntPtr __ptruser = Marshal.StringToHGlobalUni(user);
						IntPtr __ptrpassword = Marshal.StringToHGlobalUni(password);
						IntPtr __ptrhost = Marshal.StringToHGlobalUni(host);
						IntPtr __ptrconnOpts = Marshal.StringToHGlobalUni(connOpts);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(this.NativeObject, __ptrdb,__ptruser,__ptrpassword,__ptrhost,port, __ptrconnOpts);
						
						Marshal.FreeHGlobal(__ptrdb);
						Marshal.FreeHGlobal(__ptruser);
						Marshal.FreeHGlobal(__ptrpassword);
						Marshal.FreeHGlobal(__ptrhost);
						Marshal.FreeHGlobal(__ptrconnOpts);
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void close_CallBack_void();

					protected close_CallBack_void m_close_CallBack_void;

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
					private static extern void EarthView_World_Core_Database_CSqlDriver_close_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据库连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void Close_NoVirtual()
					{
						EarthView_World_Core_Database_CSqlDriver_close_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Core_Database_CSqlDriver_close_void_Function()
					{
						Close();
						
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
					private static extern void EarthView_World_Core_Database_CSqlDriver_close_void(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据库连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void Close()
					{
						EarthView_World_Core_Database_CSqlDriver_close_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createResult_CallBack_CSqlResult();

					protected createResult_CallBack_CSqlResult m_createResult_CallBack_CSqlResult;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 创建对应的EarthView::World::Core::Database::CSqlResult对象
					/// </summary>
					/// <returns>返回driver对应的result对象</returns>
					public virtual EarthView.World.Core.Database.SqlResult CreateResult_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_NoVirtual(this.NativeObject);
						
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

					protected  IntPtr EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Function()
					{
						EarthView.World.Core.Database.SqlResult csret=CreateResult();
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(IntPtr pNativeObject);

					/// <summary>
					/// 创建对应的EarthView::World::Core::Database::CSqlResult对象
					/// </summary>
					/// <returns>返回driver对应的result对象</returns>
					public virtual EarthView.World.Core.Database.SqlResult CreateResult()
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(this.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte beginTransaction_CallBack_ev_bool();

					protected beginTransaction_CallBack_ev_bool m_beginTransaction_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 开始事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool BeginTransaction_NoVirtual()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Function()
					{
						bool csret=BeginTransaction();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 开始事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool BeginTransaction()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte commitTransaction_CallBack_ev_bool();

					protected commitTransaction_CallBack_ev_bool m_commitTransaction_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 提交事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool CommitTransaction_NoVirtual()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Function()
					{
						bool csret=CommitTransaction();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 提交事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool CommitTransaction()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte rollbackTransaction_CallBack_ev_bool();

					protected rollbackTransaction_CallBack_ev_bool m_rollbackTransaction_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 撤销事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool RollbackTransaction_NoVirtual()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Function()
					{
						bool csret=RollbackTransaction();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 撤销事务
					/// </summary>
					/// <returns>成功返回true，失败返回false</returns>
					public virtual bool RollbackTransaction()
					{
						byte ret=EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, ref IntPtr tableName, IntPtr rec, bool preparedStatement);

					protected sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool m_sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_NoVirtual(IntPtr pNativeObject, EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, IntPtr tableName, IntPtr rec, byte preparedStatement);

					///<summary>
					///根据所给参数信息，构造sql语句
					///</summary>
					///<param name="type">sql语句类型</param>
					///<param name="tablename">表名</param>
					///<param name="rec">表的元信息</param>
					///<param name="preparedStatement">是否是准备语句</param>
					///<returns>sql语句</returns>
					public virtual string SqlStatement_NoVirtual(EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, string tableName, EarthView.World.Core.Database.SqlRecord rec, bool preparedStatement)
					{
						IntPtr __ptrtableName=Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_NoVirtual(this.NativeObject, type, __ptrtableName, object.Equals(rec, null) ? IntPtr.Zero : rec.NativeObject, Convert.ToByte(preparedStatement));
						
						Marshal.FreeHGlobal(__ptrtableName);
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Function(EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, ref IntPtr tableName, IntPtr rec, bool preparedStatement)
					{
						string strtableName= Marshal.PtrToStringAnsi(tableName);
						ClassFactory.FreeString(ref tableName);
						EarthView.World.Core.Database.SqlRecord csobj_rec = new EarthView.World.Core.Database.SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rec.BindNativeObject(rec,"CSqlRecord");
						csobj_rec.Delegate = true;
						IClassFactory csobj_recClassFactory = GlobalClassFactoryMap.Get(csobj_rec.GetCppInstanceTypeName());
						if (csobj_recClassFactory != null)
						{
							csobj_rec.Delegate = true;
							csobj_rec = csobj_recClassFactory.Create() as EarthView.World.Core.Database.SqlRecord;
							csobj_rec.BindNativeObject(rec, "CSqlRecord");
							csobj_rec.Delegate = true;
						}
						
						string csret=SqlStatement(type, strtableName,csobj_rec, preparedStatement);
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(IntPtr pNativeObject, EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, IntPtr tableName, IntPtr rec, byte preparedStatement);

					///<summary>
					///根据所给参数信息，构造sql语句
					///</summary>
					///<param name="type">sql语句类型</param>
					///<param name="tablename">表名</param>
					///<param name="rec">表的元信息</param>
					///<param name="preparedStatement">是否是准备语句</param>
					///<returns>sql语句</returns>
					public virtual string SqlStatement(EarthView.World.Core.Database.SqlDriver.EVSTATEMENTTYPE type, string tableName, EarthView.World.Core.Database.SqlRecord rec, bool preparedStatement)
					{
						IntPtr __ptrtableName = Marshal.StringToHGlobalUni(tableName);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(this.NativeObject, type, __ptrtableName,object.Equals(rec, null) ? IntPtr.Zero : rec.NativeObject, Convert.ToByte(preparedStatement));
						
						Marshal.FreeHGlobal(__ptrtableName);
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType(ref IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					protected isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType m_isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType;

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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_NoVirtual(IntPtr pNativeObject, IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					///<summary>
					///是否为需要跳过的标示符
					///</summary>
					///<param name="identifier">标示符</param>
					///<param name="type">标示符类型</param>
					///<returns>是需要跳过的标示符返回true,否则返回false</returns>
					public virtual bool IsIdentifierEscaped_NoVirtual(string identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						IntPtr __ptridentifier=Marshal.StringToHGlobalUni(identifier);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_NoVirtual(this.NativeObject, __ptridentifier, type);
						
						Marshal.FreeHGlobal(__ptridentifier);
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Function(ref IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						string stridentifier= Marshal.PtrToStringAnsi(identifier);
						ClassFactory.FreeString(ref identifier);
						
						bool csret=IsIdentifierEscaped(stridentifier,type);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(IntPtr pNativeObject, IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					///<summary>
					///是否为需要跳过的标示符
					///</summary>
					///<param name="identifier">标示符</param>
					///<param name="type">标示符类型</param>
					///<returns>是需要跳过的标示符返回true,否则返回false</returns>
					public virtual bool IsIdentifierEscaped(string identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						IntPtr __ptridentifier = Marshal.StringToHGlobalUni(identifier);
						
						byte ret=EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(this.NativeObject, __ptridentifier,type);
						
						Marshal.FreeHGlobal(__ptridentifier);
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType(ref IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					protected escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType m_escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_NoVirtual(IntPtr pNativeObject, IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					///<summary>
					///跳过标示符
					///</summary>
					///<param name="identifier">标示符</param>
					///<param name="type">标示符类型</param>
					///<returns>跳过标示后的字符串</returns>
					public virtual string EscapeIdentifier_NoVirtual(string identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						IntPtr __ptridentifier=Marshal.StringToHGlobalUni(identifier);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_NoVirtual(this.NativeObject, __ptridentifier, type);
						
						Marshal.FreeHGlobal(__ptridentifier);
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Function(ref IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						string stridentifier= Marshal.PtrToStringAnsi(identifier);
						ClassFactory.FreeString(ref identifier);
						
						string csret=EscapeIdentifier(stridentifier,type);
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(IntPtr pNativeObject, IntPtr identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type);

					///<summary>
					///跳过标示符
					///</summary>
					///<param name="identifier">标示符</param>
					///<param name="type">标示符类型</param>
					///<returns>跳过标示后的字符串</returns>
					public virtual string EscapeIdentifier(string identifier, EarthView.World.Core.Database.SqlDriver.EVIDENTIFIERTYPE type)
					{
						IntPtr __ptridentifier = Marshal.StringToHGlobalUni(identifier);
						
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(this.NativeObject, __ptridentifier,type);
						
						Marshal.FreeHGlobal(__ptridentifier);
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeWString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string formatValue_CallBack_ev_wstring_CSqlField_ev_bool(IntPtr field, bool trimStrings);

					protected formatValue_CallBack_ev_wstring_CSqlField_ev_bool m_formatValue_CallBack_ev_wstring_CSqlField_ev_bool;

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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr field, byte trimStrings);

					///<summary>
					///格式化字段值
					///</summary>
					///<param name="field">字段</param>
					///<param name="trimStrings">是否截断filed尾部的所有空白字符</param>
					///<returns>格式化后的字符串</returns>
					public virtual string FormatValue_NoVirtual(EarthView.World.Core.Database.SqlField field, bool trimStrings)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_NoVirtual(this.NativeObject, object.Equals(field, null) ? IntPtr.Zero : field.NativeObject, Convert.ToByte(trimStrings));
						
						string ret = Marshal.PtrToStringUni(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Function(IntPtr field, bool trimStrings)
					{
						EarthView.World.Core.Database.SqlField csobj_field = new EarthView.World.Core.Database.SqlField(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_field.BindNativeObject(field,"CSqlField");
						csobj_field.Delegate = true;
						IClassFactory csobj_fieldClassFactory = GlobalClassFactoryMap.Get(csobj_field.GetCppInstanceTypeName());
						if (csobj_fieldClassFactory != null)
						{
							csobj_field.Delegate = true;
							csobj_field = csobj_fieldClassFactory.Create() as EarthView.World.Core.Database.SqlField;
							csobj_field.BindNativeObject(field, "CSqlField");
							csobj_field.Delegate = true;
						}
						
						string csret=FormatValue(csobj_field, trimStrings);
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(IntPtr pNativeObject, IntPtr field, byte trimStrings);

					///<summary>
					///格式化字段值
					///</summary>
					///<param name="field">字段</param>
					///<param name="trimStrings">是否截断filed尾部的所有空白字符</param>
					///<returns>格式化后的字符串</returns>
					public virtual string FormatValue(EarthView.World.Core.Database.SqlField field, bool trimStrings)
					{
						IntPtr __ptr = EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(this.NativeObject, object.Equals(field, null) ? IntPtr.Zero : field.NativeObject, Convert.ToByte(trimStrings));
						
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
					private static extern void EarthView_World_Core_Database_CSqlDriver_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(IntPtr pNativeObject, EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy);

					///<summary>
					///设置当前数据库的精度
					///</summary>
					///<param name="precisionPolicy">精度</param>
					///<returns></returns>
					public void SetNumericalPrecisionPolicy(EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY precisionPolicy)
					{
						EarthView_World_Core_Database_CSqlDriver_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(this.NativeObject, precisionPolicy);
						
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
					private static extern int EarthView_World_Core_Database_CSqlDriver_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(IntPtr pNativeObject);

					///<summary>
					///获取当前数据库的精度
					///</summary>
					///<param name=""></param>
					///<returns>精度值</returns>
					public EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY NumericalPrecisionPolicy()
					{
						int ret=EarthView_World_Core_Database_CSqlDriver_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(this.NativeObject);
						
						return (EarthView.World.Core.Database.EVNUMERICALPRECISIONPOLICY)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_d.so");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp_d.so");

						#else 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_d.dll");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility.so");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp.so");

						#else 
							private static bool bLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility.dll");
							private static bool csbLoadSqlDriver = LoadDll.Load("EV_DatabaseUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriver", new SqlDriverClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverProxy", new SqlDriverClassFactory());

					public SqlDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_handle_CVariant(IntPtr pObject, handle_CallBack_CVariant pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(IntPtr pObject, hasFeature_CallBack_ev_bool_EVDriverFeature pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(IntPtr pObject, isOpen_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(IntPtr pObject, exist_CallBack_ev_bool_ev_wstring pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(IntPtr pObject, tables_CallBack_CWStringArray_EVTableType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(IntPtr pObject, primaryIndex_CallBack_CSqlIndex_ev_wstring pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(IntPtr pObject, record_CallBack_CSqlRecord_ev_wstring pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(IntPtr pObject, open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_close_void(IntPtr pObject, close_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(IntPtr pObject, createResult_CallBack_CSqlResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(IntPtr pObject, beginTransaction_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(IntPtr pObject, commitTransaction_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(IntPtr pObject, rollbackTransaction_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(IntPtr pObject, sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(IntPtr pObject, isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(IntPtr pObject, escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(IntPtr pObject, formatValue_CallBack_ev_wstring_CSqlField_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handle_CallBack_CVariant = EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Function;
							GC.KeepAlive(m_handle_CallBack_CVariant);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_handle_CVariant(this.NativeObject, m_handle_CallBack_CVariant);
							m_hasFeature_CallBack_ev_bool_EVDriverFeature = EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Function;
							GC.KeepAlive(m_hasFeature_CallBack_ev_bool_EVDriverFeature);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(this.NativeObject, m_hasFeature_CallBack_ev_bool_EVDriverFeature);
							m_isOpen_CallBack_ev_bool = EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Function;
							GC.KeepAlive(m_isOpen_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(this.NativeObject, m_isOpen_CallBack_ev_bool);
							m_exist_CallBack_ev_bool_ev_wstring = EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Function;
							GC.KeepAlive(m_exist_CallBack_ev_bool_ev_wstring);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(this.NativeObject, m_exist_CallBack_ev_bool_ev_wstring);
							m_tables_CallBack_CWStringArray_EVTableType = EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Function;
							GC.KeepAlive(m_tables_CallBack_CWStringArray_EVTableType);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(this.NativeObject, m_tables_CallBack_CWStringArray_EVTableType);
							m_primaryIndex_CallBack_CSqlIndex_ev_wstring = EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Function;
							GC.KeepAlive(m_primaryIndex_CallBack_CSqlIndex_ev_wstring);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(this.NativeObject, m_primaryIndex_CallBack_CSqlIndex_ev_wstring);
							m_record_CallBack_CSqlRecord_ev_wstring = EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Function;
							GC.KeepAlive(m_record_CallBack_CSqlRecord_ev_wstring);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(this.NativeObject, m_record_CallBack_CSqlRecord_ev_wstring);
							m_open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring = EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Function;
							GC.KeepAlive(m_open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(this.NativeObject, m_open_CallBack_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring);
							m_close_CallBack_void = EarthView_World_Core_Database_CSqlDriver_close_void_Function;
							GC.KeepAlive(m_close_CallBack_void);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_close_void(this.NativeObject, m_close_CallBack_void);
							m_createResult_CallBack_CSqlResult = EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Function;
							GC.KeepAlive(m_createResult_CallBack_CSqlResult);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(this.NativeObject, m_createResult_CallBack_CSqlResult);
							m_beginTransaction_CallBack_ev_bool = EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Function;
							GC.KeepAlive(m_beginTransaction_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(this.NativeObject, m_beginTransaction_CallBack_ev_bool);
							m_commitTransaction_CallBack_ev_bool = EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Function;
							GC.KeepAlive(m_commitTransaction_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(this.NativeObject, m_commitTransaction_CallBack_ev_bool);
							m_rollbackTransaction_CallBack_ev_bool = EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Function;
							GC.KeepAlive(m_rollbackTransaction_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(this.NativeObject, m_rollbackTransaction_CallBack_ev_bool);
							m_sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool = EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Function;
							GC.KeepAlive(m_sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(this.NativeObject, m_sqlStatement_CallBack_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool);
							m_isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType = EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Function;
							GC.KeepAlive(m_isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(this.NativeObject, m_isIdentifierEscaped_CallBack_ev_bool_ev_wstring_EVIdentifierType);
							m_escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType = EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Function;
							GC.KeepAlive(m_escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(this.NativeObject, m_escapeIdentifier_CallBack_ev_wstring_ev_wstring_EVIdentifierType);
							m_formatValue_CallBack_ev_wstring_CSqlField_ev_bool = EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Function;
							GC.KeepAlive(m_formatValue_CallBack_ev_wstring_CSqlField_ev_bool);
							EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(this.NativeObject, m_formatValue_CallBack_ev_wstring_CSqlField_ev_bool);
						}
					}
					public static SqlDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SqlDriver obj = baseObj as  SqlDriver;
						if (object.Equals(obj, null))
						{
							obj = new SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SqlDriver emptyInstance = new SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
