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
		namespace Spatial2D
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// EarthView数据交换驱动
				///导出时到其他数据格式时，字段名为 "EVID" "Shape" "GEOM_LENGTH" "GEOM_AREA"不导出；
				///从其他数据格式导入时，上述字段名改为_1，如_1名称已存在，改为_2，依此类推。
				/// </summary>
				public class EarthViewDataDriver : EarthView.World.Spatial.Convertor.DataDriver
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
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 写入数据完成
					/// </summary>
					/// <returns></returns>
					public new void FinishWrite_NoVirtual()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void(IntPtr pNativeObject);

					/// <summary>
					/// 写入数据完成
					/// </summary>
					/// <returns></returns>
					public override void FinishWrite()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					public new void Close_NoVirtual()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					public override void Close()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void(this.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream_NoVirtual(IntPtr pNativeObject, uint index, IntPtr stream);

					/// <summary>
					/// 读取第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					public new int Read_NoVirtual(uint index, ref  EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream_NoVirtual(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream(IntPtr pNativeObject, uint index, IntPtr stream);

					/// <summary>
					/// 读取第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					public override int Read(uint index, ref  EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream_NoVirtual(IntPtr pNativeObject, uint index, IntPtr stream);

					/// <summary>
					/// 写入第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					public new int Write_NoVirtual(uint index, EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream_NoVirtual(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream(IntPtr pNativeObject, uint index, IntPtr stream);

					/// <summary>
					/// 写入第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					public override int Write(uint index, EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr pPropertySet, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, IntPtr ref_param, ref uint featurecount, IntPtr stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					public new int Open_NoVirtual(EarthView.World.Spatial.GeoDataset.Ipropertyset pPropertySet, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.NativeObject, object.Equals(pPropertySet, null) ? IntPtr.Zero : pPropertySet.NativeObject, mode, object.Equals(ref_param, null) ? IntPtr.Zero : ref_param.NativeObject, ref featurecount, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pNativeObject, IntPtr pPropertySet, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, IntPtr ref_param, ref uint featurecount, IntPtr stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					public override int Open(EarthView.World.Spatial.GeoDataset.Ipropertyset pPropertySet, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, object.Equals(pPropertySet, null) ? IntPtr.Zero : pPropertySet.NativeObject, mode, object.Equals(ref_param, null) ? IntPtr.Zero : ref_param.NativeObject, ref featurecount, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr ref_dataSource, string dataname, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, IntPtr ref_param, ref uint featurecount, IntPtr stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetname">数据集名称</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					public new int Open_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource ref_dataSource, string dataname, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.NativeObject, object.Equals(ref_dataSource, null) ? IntPtr.Zero : ref_dataSource.NativeObject, dataname, mode, object.Equals(ref_param, null) ? IntPtr.Zero : ref_param.NativeObject, ref featurecount, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pNativeObject, IntPtr ref_dataSource, string dataname, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, IntPtr ref_param, ref uint featurecount, IntPtr stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetname">数据集名称</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					public override int Open(EarthView.World.Spatial.GeoDataset.Idatasource ref_dataSource, string dataname, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, object.Equals(ref_dataSource, null) ? IntPtr.Zero : ref_dataSource.NativeObject, dataname, mode, object.Equals(ref_param, null) ? IntPtr.Zero : ref_param.NativeObject, ref featurecount, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_d.so");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange.so");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.so");

						#else 
							private static bool bLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadEarthViewDataDriver = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver", new EarthViewDataDriverClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriverProxy", new EarthViewDataDriverClassFactory());

					public EarthViewDataDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void(IntPtr pObject, finishWrite_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void(IntPtr pObject, close_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_canRead_ev_bool(IntPtr pObject, canRead_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_canWrite_ev_bool(IntPtr pObject, canWrite_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream(IntPtr pObject, read_CallBack_ev_int32_ev_uint32_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream(IntPtr pObject, write_CallBack_ev_int32_ev_uint32_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pObject, open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pObject, open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_finishWrite_CallBack_void = EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Function;
							GC.KeepAlive(m_finishWrite_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_finishWrite_void(this.NativeObject, m_finishWrite_CallBack_void);
							m_close_CallBack_void = EarthView_World_Spatial_Convertor_CDataDriver_close_void_Function;
							GC.KeepAlive(m_close_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_close_void(this.NativeObject, m_close_CallBack_void);
							m_canRead_CallBack_ev_bool = EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Function;
							GC.KeepAlive(m_canRead_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_canRead_ev_bool(this.NativeObject, m_canRead_CallBack_ev_bool);
							m_canWrite_CallBack_ev_bool = EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Function;
							GC.KeepAlive(m_canWrite_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_canWrite_ev_bool(this.NativeObject, m_canWrite_CallBack_ev_bool);
							m_read_CallBack_ev_int32_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_read_CallBack_ev_int32_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_read_ev_int32_ev_uint32_CDataStream(this.NativeObject, m_read_CallBack_ev_int32_ev_uint32_CDataStream);
							m_write_CallBack_ev_int32_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_write_CallBack_ev_int32_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_write_ev_int32_ev_uint32_CDataStream(this.NativeObject, m_write_CallBack_ev_int32_ev_uint32_CDataStream);
							m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
						}
					}
					public override bool CanRead()
					{
						return base.CanRead_NoVirtual();
					}
					public override bool CanWrite()
					{
						return base.CanWrite_NoVirtual();
					}
					public static EarthViewDataDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EarthViewDataDriver obj = baseObj as  EarthViewDataDriver;
						if (object.Equals(obj, null))
						{
							obj = new EarthViewDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEarthViewDataDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EarthViewDataDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EarthViewDataDriver emptyInstance = new EarthViewDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
