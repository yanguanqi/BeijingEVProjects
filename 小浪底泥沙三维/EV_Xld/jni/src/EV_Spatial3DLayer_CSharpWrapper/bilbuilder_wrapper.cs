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
		namespace Spatial3D
		{
			public class BilBuilder : EarthView.World.Core.AllocatedObject
			{
				public BilBuilder() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBilBuilder",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CBilBuilder_setRasterDataset_void_IRasterDataset(IntPtr pNativeObject, IntPtr ref_pRasterDataset);

				/// <summary>
				/// 设置切割dem的源RasterDataset，数据集波段数必须为1
				/// </summary>
				/// <param name="pRasterDataset">源数据集</param>
				/// <return></return>
				public void SetRasterDataset(EarthView.World.Spatial.GeoDataset.Irasterdataset ref_pRasterDataset)
				{
					EarthView_World_Spatial3D_CBilBuilder_setRasterDataset_void_IRasterDataset(this.NativeObject, object.Equals(ref_pRasterDataset, null) ? IntPtr.Zero : ref_pRasterDataset.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CBilBuilder_getRowColRange_void_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int level, ref int minRow, ref int maxRow, ref int minCol, ref int maxCol);

				/// <summary>
				/// 获取源栅格数据集在指定级别所覆盖的行列号范围
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="minRow">最小行号</param>
				/// <param name="maxRow">最大行号</param>
				/// <param name="minCol">最小列号</param>
				/// <param name="maxCol">最大列号</param>
				/// <return></return>
				public void GetRowColRange(int level, ref int minRow, ref int maxRow, ref int minCol, ref int maxCol)
				{
					EarthView_World_Spatial3D_CBilBuilder_getRowColRange_void_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, level, ref minRow, ref maxRow, ref minCol, ref maxCol);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CBilBuilder_getTile_void_ev_int32_ev_int32_ev_int32_ev_byte(IntPtr pNativeObject, int level, int row, int col, byte[] pBuffer);

				/// <summary>
				/// 获取指定级别行列号的dem瓦片的数据
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="pBuffer">数据缓冲区（大小为瓦片宽度×高度×像素占字节数）</param>
				/// <return></return>
				public void GetTile(int level, int row, int col, byte[] pBuffer)
				{
					EarthView_World_Spatial3D_CBilBuilder_getTile_void_ev_int32_ev_int32_ev_int32_ev_byte(this.NativeObject, level, row, col, pBuffer);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CBilBuilder_getTileWidth_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取dem瓦片宽度
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片宽度</return>
				public int GetTileWidth()
				{
					int ret=EarthView_World_Spatial3D_CBilBuilder_getTileWidth_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CBilBuilder_getTileHeight_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取dem瓦片高度
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片高度</return>
				public int GetTileHeight()
				{
					int ret=EarthView_World_Spatial3D_CBilBuilder_getTileHeight_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CBilBuilder_getTileDataLength_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取瓦片数据长度(瓦片数据类型与源数据集类型一致，
				/// 因此设置新的源数据集后瓦片数据长度可能改变)
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片数据长度</return>
				public int GetTileDataLength()
				{
					int ret=EarthView_World_Spatial3D_CBilBuilder_getTileDataLength_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CBilBuilder_getSpatialRef_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取dem瓦片的坐标系，用WKT字符串描述
				/// </summary>
				/// <param name=""></param>
				/// <return>坐标系字符串</return>
				public string GetSpatialRef()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CBilBuilder_getSpatialRef_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CBilBuilder_getLowestLevel_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取最低级别号（分辨率最低）
				/// </summary>
				/// <param name=""></param>
				/// <return>级别号</return>
				public int GetLowestLevel()
				{
					int ret=EarthView_World_Spatial3D_CBilBuilder_getLowestLevel_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CBilBuilder_getHighestLevel_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取最高级别号（分辨率最高）
				/// </summary>
				/// <param name=""></param>
				/// <return>级别号</return>
				public int GetHighestLevel()
				{
					int ret=EarthView_World_Spatial3D_CBilBuilder_getHighestLevel_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Spatial3D_CBilBuilder_getLevelSpan_ev_real64_ev_int32(IntPtr pNativeObject, int level);

				/// <summary>
				/// 获取指定级别的瓦片的地理宽度
				/// </summary>
				/// <param name="level">级别</param>
				/// <return>地理宽度</return>
				public double GetLevelSpan(int level)
				{
					double ret=EarthView_World_Spatial3D_CBilBuilder_getLevelSpan_ev_real64_ev_int32(this.NativeObject, level);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CBilBuilder_getRowColByCoord_void_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr pNativeObject, int level, double X, double Y, ref int row, ref int col);

				/// <summary>
				/// 获取指定坐标（必须是dem瓦片的坐标系下的坐标）在某一级别所属的瓦片的行列号
				/// </summary>
				/// <param name="level">指定级别号</param>
				/// <param name="X">X坐标</param>
				/// <param name="Y">Y坐标</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <return></return>
				public void GetRowColByCoord(int level, double X, double Y, ref int row, ref int col)
				{
					EarthView_World_Spatial3D_CBilBuilder_getRowColByCoord_void_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(this.NativeObject, level, X, Y, ref row, ref col);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CBilBuilder_getTileCoordRange_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, int level, int row, int col, ref double minX, ref double maxX, ref double minY, ref double maxY);

				/// <summary>
				/// 获取指定级别行列号的瓦片的地理范围
				/// </summary>
				/// <param name="level">级别号</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="minX">最小X</param>
				/// <param name="maxX">最大X</param>
				/// <param name="minY">最小Y</param>
				/// <param name="maxY">最大Y</param>
				/// <return></return>
				public void GetTileCoordRange(int level, int row, int col, ref double minX, ref double maxX, ref double minY, ref double maxY)
				{
					EarthView_World_Spatial3D_CBilBuilder_getTileCoordRange_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, level, row, col, ref minX, ref maxX, ref minY, ref maxY);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_d.dll");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_d.so");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

					#else 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_d.dll");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer.dll");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

					#elif Linux 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer.so");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

					#else 
						private static bool bLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer.dll");
						private static bool csbLoadBilBuilder = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CBilBuilder", new BilBuilderClassFactory());

				public BilBuilder(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static BilBuilder FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BilBuilder obj = baseObj as  BilBuilder;
					if (object.Equals(obj, null))
					{
						obj = new BilBuilder(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBilBuilder");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BilBuilderClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BilBuilder emptyInstance = new BilBuilder(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
