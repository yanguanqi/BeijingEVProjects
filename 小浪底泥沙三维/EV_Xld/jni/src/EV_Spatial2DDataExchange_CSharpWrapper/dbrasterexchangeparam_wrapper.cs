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
				/// 栅格数据交换参数类
				/// </summary>
				public class Dbrasterexchangeparam : EarthView.World.Spatial.Convertor.DataExchangeParam
				{
					///<summary>
					///默认构造函数
					///<summary>
					public Dbrasterexchangeparam() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDBRasterExchangeParam",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern byte EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_isBuildOverView_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否创建金字塔
					/// </summary>
					/// <returns></returns>
					public bool IsBuildOverView()
					{
						byte ret=EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_isBuildOverView_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBuildOverView_void_bool(IntPtr pNativeObject, byte bValue);

					/// <summary>
					/// 设置是否创建金字塔
					/// </summary>
					/// <returns></returns>
					public void SetBuildOverView(bool bValue)
					{
						EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBuildOverView_void_bool(this.NativeObject, Convert.ToByte(bValue));
						
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
					private static extern int EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getMaxOverViewLevel_int(IntPtr pNativeObject);

					/// <summary>
					/// 获取最高金字塔等级
					/// </summary>
					/// <returns></returns>
					public int GetMaxOverViewLevel()
					{
						int ret=EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getMaxOverViewLevel_int(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setMaxOverViewLevel_void_int(IntPtr pNativeObject, int nValue);

					/// <summary>
					/// 设置最高金字塔等级
					/// </summary>
					/// <returns></returns>
					public void SetMaxOverViewLevel(int nValue)
					{
						EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setMaxOverViewLevel_void_int(this.NativeObject, nValue);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getCompressType_int(IntPtr pNativeObject);

					/// <summary>
					/// 获取压缩方式
					/// </summary>
					/// <returns></returns>
					public int GetCompressType()
					{
						int ret=EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getCompressType_int(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setCompressType_void_int(IntPtr pNativeObject, int nValue);

					/// <summary>
					/// 设置压缩方式
					/// </summary>
					/// <returns></returns>
					public void SetCompressType(int nValue)
					{
						EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setCompressType_void_int(this.NativeObject, nValue);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getBlockSize_int(IntPtr pNativeObject);

					/// <summary>
					/// 获取分块大小
					/// </summary>
					/// <returns></returns>
					public int GetBlockSize()
					{
						int ret=EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getBlockSize_int(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBlockSize_void_int(IntPtr pNativeObject, int nValue);

					/// <summary>
					/// 设置分块大小
					/// </summary>
					/// <returns></returns>
					public void SetBlockSize(int nValue)
					{
						EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBlockSize_void_int(this.NativeObject, nValue);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_d.so");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange.so");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.so");

						#else 
							private static bool bLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadDbrasterexchangeparam = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDBRasterExchangeParam", new DbrasterexchangeparamClassFactory());

					public Dbrasterexchangeparam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Dbrasterexchangeparam FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Dbrasterexchangeparam obj = baseObj as  Dbrasterexchangeparam;
						if (object.Equals(obj, null))
						{
							obj = new Dbrasterexchangeparam(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDBRasterExchangeParam");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DbrasterexchangeparamClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Dbrasterexchangeparam emptyInstance = new Dbrasterexchangeparam(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
