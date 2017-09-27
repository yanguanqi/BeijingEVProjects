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
			namespace Convertor
			{
				/// <summary>
				/// 数据交换字段名检查器(平台内部保留字段，sql关键字等)
				/// 判断传入名称是否与关键字冲突
				/// </summary>
				public class Sqlkeychecker : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_CSQLKeyChecker_getInstance_CSQLKeyChecker();

					/// <summary>
					/// 获取检查器单例
					/// </summary>
					/// <returns></returns>
					public static EarthView.World.Spatial.Convertor.Sqlkeychecker GetInstance()
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_CSQLKeyChecker_getInstance_CSQLKeyChecker();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Convertor.Sqlkeychecker csObj = new EarthView.World.Spatial.Convertor.Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSQLKeyChecker");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Convertor.Sqlkeychecker;
							csObj.BindNativeObject(__ptr, "CSQLKeyChecker");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_CSQLKeyChecker_reloadKeyValue_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 重新加载关键字
					/// </summary>
					/// <returns></returns>
					public int ReloadKeyValue()
					{
						int ret=EarthView_World_Spatial_Convertor_CSQLKeyChecker_reloadKeyValue_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Convertor_CSQLKeyChecker_isNameConflict_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 检查名称是否与关键字冲突
					/// </summary>
					/// <returns>冲突返回true</returns>
					public bool IsNameConflict(string name)
					{
						byte ret=EarthView_World_Spatial_Convertor_CSQLKeyChecker_isNameConflict_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_d.so");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange.so");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.so");

						#else 
							private static bool bLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadSqlkeychecker = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CSQLKeyChecker", new SqlkeycheckerClassFactory());

					public Sqlkeychecker(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Sqlkeychecker FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Sqlkeychecker obj = baseObj as  Sqlkeychecker;
						if (object.Equals(obj, null))
						{
							obj = new Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSQLKeyChecker");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlkeycheckerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Sqlkeychecker emptyInstance = new Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
