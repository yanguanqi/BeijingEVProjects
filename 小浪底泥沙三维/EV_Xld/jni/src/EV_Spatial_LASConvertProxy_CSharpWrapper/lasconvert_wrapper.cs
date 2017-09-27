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
		}
		namespace SpatialLASConvertProxy
		{
			/// <summary>				
			/// 管理点云对象类
			/// </summary>
			public class Lasconverter : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Lasconverter() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLASConverter",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverter_setLASPaths_void_StringVector(IntPtr pNativeObject, IntPtr lasPaths);

				/// <summary>
				/// 设置las点云文件路径
				/// </summary>
				/// <param name="lasPaths">点云文件路径</param>
				/// <returns></returns>
				public void SetLASPaths(EarthView.World.Core.StringVector lasPaths)
				{
					EarthView_World_SpatialLASConvertProxy_CLASConverter_setLASPaths_void_StringVector(this.NativeObject, object.Equals(lasPaths, null) ? IntPtr.Zero : lasPaths.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverter_setConvertListener_void_CLASConverterListener(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 设置转换进度的监听
				/// </summary>
				/// <param name="listener">监听</param>
				/// <returns></returns>
				public void SetConvertListener(EarthView.World.SpatialLASConvertProxy.Lasconverterlistener listener)
				{
					EarthView_World_SpatialLASConvertProxy_CLASConverter_setConvertListener_void_CLASConverterListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_SpatialLASConvertProxy_CLASConverter_getSpatialReference_CSpatialReference_EVString(string lasPath);

				/// <summary>
				/// 静态函数：获取点云数据文件的源参考系
				/// </summary>
				/// <param name="lasPath">点云数据文件</param>
				/// <returns>点云文件的源参考系</returns>
				public static EarthView.World.Spatial.Utility.SpatialReference GetSpatialReference(string lasPath)
				{
					IntPtr __ptr = EarthView_World_SpatialLASConvertProxy_CLASConverter_getSpatialReference_CSpatialReference_EVString(lasPath);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSpatialReference");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
						csObj.BindNativeObject(__ptr, "CSpatialReference");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverter_stopConvert_void(IntPtr pNativeObject);

				/// <summary>
				/// 终止转换
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void StopConvert()
				{
					EarthView_World_SpatialLASConvertProxy_CLASConverter_stopConvert_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLASConverter_convertLas_ev_bool_CSpatialReference_EVString_ev_bool_EVString_ev_bool_CLasLODParam(IntPtr pNativeObject, IntPtr srcSr, string outPath, byte isMerge, string name, byte isLod, IntPtr param);

				/// <summary>
				/// 把点云数据转换并输出
				/// </summary>
				/// <param name="srcSr">源数据参考系</param>
				/// <param name="outPath">mesh输出路径</param>
				/// <param name="isMerge">多个点云数据转换时是否合并</param>
				/// <param name="name">合并时输出的mesh前缀名称(仅在isMerge为true时有效)</param>
				/// <param name="isLod">输出的mesh是否生成LOD</param>
				/// <param name="param">生成LOD时的参数(仅在isLod为true时有效)</param>
				/// <returns>是否成功</returns>
				public bool ConvertLas(EarthView.World.Spatial.Utility.SpatialReference srcSr, string outPath, bool isMerge, string name, bool isLod, ref EarthView.World.SpatialLASConvertProxy.LasLODParam param)
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLASConverter_convertLas_ev_bool_CSpatialReference_EVString_ev_bool_EVString_ev_bool_CLasLODParam(this.NativeObject, object.Equals(srcSr, null) ? IntPtr.Zero : srcSr.NativeObject, outPath, Convert.ToByte(isMerge), name, Convert.ToByte(isLod), object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasconverter = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverter", new LasconverterClassFactory());

				public Lasconverter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Lasconverter FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Lasconverter obj = baseObj as  Lasconverter;
					if (object.Equals(obj, null))
					{
						obj = new Lasconverter(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLASConverter");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasconverterClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Lasconverter emptyInstance = new Lasconverter(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 点云数据转换进度监听类
			/// </summary>
			public class Lasconverterlistener : EarthView.World.SpatialLASConvertProxy.LasLODGenerateListener
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Lasconverterlistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLASConverterListenerProxy", null);
					if (!"EarthView.World.SpatialLASConvertProxy.Lasconverterlistener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32(ref IntPtr totalInfo, int totalPercent, ref IntPtr lasInfo, int lasPercent);

				protected setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 m_setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(IntPtr pNativeObject, string totalInfo, int totalPercent, string lasInfo, int lasPercent);

				/// <summary>
				/// 消息传出
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				public virtual void SetInformation_NoVirtual(string totalInfo, int totalPercent, string lasInfo, int lasPercent)
				{
					EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(this.NativeObject, totalInfo, totalPercent, lasInfo, lasPercent);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Function(ref IntPtr totalInfo, int totalPercent, ref IntPtr lasInfo, int lasPercent)
				{
					string strtotalInfo= Marshal.PtrToStringAnsi(totalInfo);
					ClassFactory.FreeString(ref totalInfo);
					string strlasInfo= Marshal.PtrToStringAnsi(lasInfo);
					ClassFactory.FreeString(ref lasInfo);
					
					SetInformation(strtotalInfo,totalPercent, strlasInfo,lasPercent);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(IntPtr pNativeObject, string totalInfo, int totalPercent, string lasInfo, int lasPercent);

				/// <summary>
				/// 消息传出
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				public virtual void SetInformation(string totalInfo, int totalPercent, string lasInfo, int lasPercent)
				{
					EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(this.NativeObject, totalInfo, totalPercent, lasInfo, lasPercent);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32(ref IntPtr totalInfo, ref int totalPercent, ref IntPtr lasInfo, ref int lasPercent);

				protected getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 m_getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(IntPtr pNativeObject, ref IntPtr totalInfo, ref int totalPercent, ref IntPtr lasInfo, ref int lasPercent);

				/// <summary>
				/// 消息接收
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				public virtual void GetInformation_NoVirtual(ref string totalInfo, ref int totalPercent, ref string lasInfo, ref int lasPercent)
				{
					IntPtr __ptrtotalInfo=Marshal.StringToHGlobalAnsi(totalInfo);
					IntPtr pTmptotalInfo=__ptrtotalInfo;
					IntPtr __ptrlasInfo=Marshal.StringToHGlobalAnsi(lasInfo);
					IntPtr pTmplasInfo=__ptrlasInfo;
					
					EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(this.NativeObject, ref __ptrtotalInfo,ref totalPercent, ref __ptrlasInfo,ref lasPercent);
					
					 Marshal.FreeHGlobal(pTmptotalInfo);
					totalInfo= Marshal.PtrToStringAnsi(__ptrtotalInfo);
					ClassFactory.FreeString(ref __ptrtotalInfo);
					 Marshal.FreeHGlobal(pTmplasInfo);
					lasInfo= Marshal.PtrToStringAnsi(__ptrlasInfo);
					ClassFactory.FreeString(ref __ptrlasInfo);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Function(ref IntPtr totalInfo, ref int totalPercent, ref IntPtr lasInfo, ref int lasPercent)
				{
					string strtotalInfo= Marshal.PtrToStringAnsi(totalInfo);
					ClassFactory.FreeString(ref totalInfo);
					string strlasInfo= Marshal.PtrToStringAnsi(lasInfo);
					ClassFactory.FreeString(ref lasInfo);
					
					GetInformation(ref strtotalInfo,ref totalPercent, ref strlasInfo,ref lasPercent);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(IntPtr pNativeObject, ref IntPtr totalInfo, ref int totalPercent, ref IntPtr lasInfo, ref int lasPercent);

				/// <summary>
				/// 消息接收
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				public virtual void GetInformation(ref string totalInfo, ref int totalPercent, ref string lasInfo, ref int lasPercent)
				{
					IntPtr __ptrtotalInfo = Marshal.StringToHGlobalAnsi(totalInfo);
					IntPtr pTmptotalInfo = __ptrtotalInfo;
					IntPtr __ptrlasInfo = Marshal.StringToHGlobalAnsi(lasInfo);
					IntPtr pTmplasInfo = __ptrlasInfo;
					
					EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(this.NativeObject, ref __ptrtotalInfo,ref totalPercent, ref __ptrlasInfo,ref lasPercent);
					
					 Marshal.FreeHGlobal(pTmptotalInfo);
					totalInfo= Marshal.PtrToStringAnsi(__ptrtotalInfo);
					ClassFactory.FreeString(ref __ptrtotalInfo);
					 Marshal.FreeHGlobal(pTmplasInfo);
					lasInfo= Marshal.PtrToStringAnsi(__ptrlasInfo);
					ClassFactory.FreeString(ref __ptrlasInfo);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasconverterlistener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverterListener", new LasconverterlistenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverterListenerProxy", new LasconverterlistenerClassFactory());

				public Lasconverterlistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(IntPtr pObject, setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(IntPtr pObject, getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString(IntPtr pObject, processMsg_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void(IntPtr pObject, paused_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void(IntPtr pObject, finished_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32(IntPtr pObject, processProgress_CallBack_void_ev_uint32_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 = EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Function;
						GC.KeepAlive(m_setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(this.NativeObject, m_setInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32);
						m_getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32 = EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Function;
						GC.KeepAlive(m_getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(this.NativeObject, m_getInformation_CallBack_void_EVString_ev_int32_EVString_ev_int32);
						m_processMsg_CallBack_void_EVString = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Function;
						GC.KeepAlive(m_processMsg_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString(this.NativeObject, m_processMsg_CallBack_void_EVString);
						m_paused_CallBack_void = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Function;
						GC.KeepAlive(m_paused_CallBack_void);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void(this.NativeObject, m_paused_CallBack_void);
						m_finished_CallBack_void = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Function;
						GC.KeepAlive(m_finished_CallBack_void);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void(this.NativeObject, m_finished_CallBack_void);
						m_processProgress_CallBack_void_ev_uint32_ev_uint32 = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_processProgress_CallBack_void_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32(this.NativeObject, m_processProgress_CallBack_void_ev_uint32_ev_uint32);
					}
				}
				public override void ProcessMsg(string msg)
				{
					base.ProcessMsg_NoVirtual(msg);
				}
				public override void Paused()
				{
					base.Paused_NoVirtual();
				}
				public override void Finished()
				{
					base.Finished_NoVirtual();
				}
				public override void ProcessProgress(uint total, uint current)
				{
					base.ProcessProgress_NoVirtual(total,current);
				}
				public static Lasconverterlistener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Lasconverterlistener obj = baseObj as  Lasconverterlistener;
					if (object.Equals(obj, null))
					{
						obj = new Lasconverterlistener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLASConverterListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasconverterlistenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Lasconverterlistener emptyInstance = new Lasconverterlistener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
