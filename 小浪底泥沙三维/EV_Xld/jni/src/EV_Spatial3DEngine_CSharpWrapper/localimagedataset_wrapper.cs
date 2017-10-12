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
			public class ImageCacheReader : EarthView.World.Core.AllocatedObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CImageCacheReader_readTileByType_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerName, int tilelevel, int row, int col, int type);

				/// <summary> 
				/// 
				/// </summary>
				/// <param name="type">JPG = 0;EVG = 1;</param>
				/// <returns></returns>		
				public EarthView.World.Core.MemoryDataStreamPtr ReadTileByType(EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerName, int tilelevel, int row, int col, int type)
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CImageCacheReader_readTileByType_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, tilemode, layerName, tilelevel, row, col, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CImageCacheReader_readTile_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref int type);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Core.MemoryDataStreamPtr ReadTile(EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref int type)
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CImageCacheReader_readTile_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, tilemode, layerPath, tilelevel, row, col, ref type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CImageCacheReader_readTile_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_MemoryDataStreamPtr(IntPtr pNativeObject, EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref int tileType, IntPtr dataValue, IntPtr property);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool ReadTile(EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref int tileType, ref  EarthView.World.Core.MemoryDataStreamPtr dataValue, ref  EarthView.World.Core.MemoryDataStreamPtr property)
				{
					byte ret=EarthView_World_Spatial3D_CImageCacheReader_readTile_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_MemoryDataStreamPtr(this.NativeObject, tilemode, layerPath, tilelevel, row, col, ref tileType, object.Equals(dataValue, null) ? IntPtr.Zero : dataValue.NativeObject, object.Equals(property, null) ? IntPtr.Zero : property.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CImageCacheReader_readTileInfo_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_MemoryDataStreamPtr(IntPtr pNativeObject, EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref bool isLastest, IntPtr updateTime, IntPtr dateTime, IntPtr property);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool ReadTileInfo(EarthView.World.Spatial.EVTILEMODETYPE tilemode, string layerPath, int tilelevel, int row, int col, ref bool isLastest, ref  EarthView.World.Core.CoreTime updateTime, ref  EarthView.World.Core.CoreTime dateTime, ref  EarthView.World.Core.MemoryDataStreamPtr property)
				{
					byte ret=EarthView_World_Spatial3D_CImageCacheReader_readTileInfo_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_MemoryDataStreamPtr(this.NativeObject, tilemode, layerPath, tilelevel, row, col, ref isLastest, object.Equals(updateTime, null) ? IntPtr.Zero : updateTime.NativeObject, object.Equals(dateTime, null) ? IntPtr.Zero : dateTime.NativeObject, object.Equals(property, null) ? IntPtr.Zero : property.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CImageCacheReader_getSinglePtr_CImageCacheReader();

				public static EarthView.World.Spatial3D.ImageCacheReader GetSinglePtr()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CImageCacheReader_getSinglePtr_CImageCacheReader();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ImageCacheReader csObj = new EarthView.World.Spatial3D.ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CImageCacheReader");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ImageCacheReader;
						csObj.BindNativeObject(__ptr, "CImageCacheReader");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadImageCacheReader = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CImageCacheReader", new ImageCacheReaderClassFactory());

				public ImageCacheReader(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ImageCacheReader FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ImageCacheReader obj = baseObj as  ImageCacheReader;
					if (object.Equals(obj, null))
					{
						obj = new ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CImageCacheReader");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ImageCacheReaderClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ImageCacheReader emptyInstance = new ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class LocalImageDataset : EarthView.World.Spatial.Evwmtsdataset
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(ref IntPtr style, ref IntPtr format, int level, uint row, uint col, bool getoriginformat, bool gettime, IntPtr tileInfo);

				protected getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo m_getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_NoVirtual(IntPtr pNativeObject, string style, string format, int level, uint row, uint col, byte getoriginformat, byte gettime, IntPtr tileInfo);

				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="style">渲染风格</param>
				/// <param name="format">瓦片格式</param>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="getoriginformat">true表示获取对应瓦片的原始格式信息</param>
				/// <param name="gettime">true表示获取对应瓦片的时间信息</param>
				/// <param name="tileInfo">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetTile_NoVirtual(string style, string format, int level, uint row, uint col, bool getoriginformat, bool gettime, ref  EarthView.World.Spatial.Evtileinfo tileInfo)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_NoVirtual(this.NativeObject, style, format, level, row, col, Convert.ToByte(getoriginformat), Convert.ToByte(gettime), object.Equals(tileInfo, null) ? IntPtr.Zero : tileInfo.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Function(ref IntPtr style, ref IntPtr format, int level, uint row, uint col, bool getoriginformat, bool gettime, IntPtr tileInfo)
				{
					string strstyle= Marshal.PtrToStringAnsi(style);
					ClassFactory.FreeString(ref style);
					string strformat= Marshal.PtrToStringAnsi(format);
					ClassFactory.FreeString(ref format);
					EarthView.World.Spatial.Evtileinfo csobj_tileInfo = new EarthView.World.Spatial.Evtileinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_tileInfo.BindNativeObject(tileInfo,"CEVTileInfo");
					csobj_tileInfo.Delegate = true;
					IClassFactory csobj_tileInfoClassFactory = GlobalClassFactoryMap.Get(csobj_tileInfo.GetCppInstanceTypeName());
					if (csobj_tileInfoClassFactory != null)
					{
						csobj_tileInfo.Delegate = true;
						csobj_tileInfo = csobj_tileInfoClassFactory.Create() as EarthView.World.Spatial.Evtileinfo;
						csobj_tileInfo.BindNativeObject(tileInfo, "CEVTileInfo");
						csobj_tileInfo.Delegate = true;
					}
					
					int csret=GetTile(strstyle,strformat,level, row, col, getoriginformat, gettime, ref csobj_tileInfo);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(IntPtr pNativeObject, string style, string format, int level, uint row, uint col, byte getoriginformat, byte gettime, IntPtr tileInfo);

				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="style">渲染风格</param>
				/// <param name="format">瓦片格式</param>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="getoriginformat">true表示获取对应瓦片的原始格式信息</param>
				/// <param name="gettime">true表示获取对应瓦片的时间信息</param>
				/// <param name="tileInfo">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetTile(string style, string format, int level, uint row, uint col, bool getoriginformat, bool gettime, ref  EarthView.World.Spatial.Evtileinfo tileInfo)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(this.NativeObject, style, format, level, row, col, Convert.ToByte(getoriginformat), Convert.ToByte(gettime), object.Equals(tileInfo, null) ? IntPtr.Zero : tileInfo.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(int level, uint row, uint col, ref IntPtr fieldname, IntPtr serverresult);

				protected getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult m_getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_NoVirtual(IntPtr pNativeObject, int level, uint row, uint col, string fieldname, IntPtr serverresult);

				/// <summary>
				/// 获取瓦片属性
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetTileProperty_NoVirtual(int level, uint row, uint col, string fieldname, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_NoVirtual(this.NativeObject, level, row, col, fieldname, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Function(int level, uint row, uint col, ref IntPtr fieldname, IntPtr serverresult)
				{
					string strfieldname= Marshal.PtrToStringAnsi(fieldname);
					ClassFactory.FreeString(ref fieldname);
					EarthView.World.Spatial.MemoryStreamResult csobj_serverresult = new EarthView.World.Spatial.MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_serverresult.BindNativeObject(serverresult,"CMemoryStreamResult");
					csobj_serverresult.Delegate = true;
					IClassFactory csobj_serverresultClassFactory = GlobalClassFactoryMap.Get(csobj_serverresult.GetCppInstanceTypeName());
					if (csobj_serverresultClassFactory != null)
					{
						csobj_serverresult.Delegate = true;
						csobj_serverresult = csobj_serverresultClassFactory.Create() as EarthView.World.Spatial.MemoryStreamResult;
						csobj_serverresult.BindNativeObject(serverresult, "CMemoryStreamResult");
						csobj_serverresult.Delegate = true;
					}
					
					int csret=GetTileProperty(level, row, col, strfieldname,ref csobj_serverresult);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(IntPtr pNativeObject, int level, uint row, uint col, string fieldname, IntPtr serverresult);

				/// <summary>
				/// 获取瓦片属性
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetTileProperty(int level, uint row, uint col, string fieldname, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(this.NativeObject, level, row, col, fieldname, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(int level, uint tilerow, uint tilecol, int x, int y, ref IntPtr infoformat, IntPtr serverresult);

				protected getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult m_getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_NoVirtual(IntPtr pNativeObject, int level, uint tilerow, uint tilecol, int x, int y, string infoformat, IntPtr serverresult);

				/// <summary>
				/// 查询某瓦片某像素点的几何要素的信息
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="tilerow">行</param>
				/// <param name="tilecol">列</param>
				/// <param name="x">查询像素点x</param>
				/// <param name="y">查询像素点y</param>
				/// <param name="infoformat">返回数据格式</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetFeatureInfo_NoVirtual(int level, uint tilerow, uint tilecol, int x, int y, string infoformat, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_NoVirtual(this.NativeObject, level, tilerow, tilecol, x, y, infoformat, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Function(int level, uint tilerow, uint tilecol, int x, int y, ref IntPtr infoformat, IntPtr serverresult)
				{
					string strinfoformat= Marshal.PtrToStringAnsi(infoformat);
					ClassFactory.FreeString(ref infoformat);
					EarthView.World.Spatial.MemoryStreamResult csobj_serverresult = new EarthView.World.Spatial.MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_serverresult.BindNativeObject(serverresult,"CMemoryStreamResult");
					csobj_serverresult.Delegate = true;
					IClassFactory csobj_serverresultClassFactory = GlobalClassFactoryMap.Get(csobj_serverresult.GetCppInstanceTypeName());
					if (csobj_serverresultClassFactory != null)
					{
						csobj_serverresult.Delegate = true;
						csobj_serverresult = csobj_serverresultClassFactory.Create() as EarthView.World.Spatial.MemoryStreamResult;
						csobj_serverresult.BindNativeObject(serverresult, "CMemoryStreamResult");
						csobj_serverresult.Delegate = true;
					}
					
					int csret=GetFeatureInfo(level, tilerow, tilecol, x, y, strinfoformat,ref csobj_serverresult);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(IntPtr pNativeObject, int level, uint tilerow, uint tilecol, int x, int y, string infoformat, IntPtr serverresult);

				/// <summary>
				/// 查询某瓦片某像素点的几何要素的信息
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="tilerow">行</param>
				/// <param name="tilecol">列</param>
				/// <param name="x">查询像素点x</param>
				/// <param name="y">查询像素点y</param>
				/// <param name="infoformat">返回数据格式</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetFeatureInfo(int level, uint tilerow, uint tilecol, int x, int y, string infoformat, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(this.NativeObject, level, tilerow, tilecol, x, y, infoformat, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo();

				protected getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo m_getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取OGC元数据对象
				/// </summary>
				/// <returns>OGC格式的源数据对象指针</returns>
				public virtual EarthView.World.Spatial.Wmtsserverinfo GetOGCWMTSCapabilitiesRef_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmtsserverinfo csObj = new EarthView.World.Spatial.Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmtsserverinfo;
						csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Function()
				{
					EarthView.World.Spatial.Wmtsserverinfo csret=GetOGCWMTSCapabilitiesRef();
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(IntPtr pNativeObject);

				/// <summary>
				/// 获取OGC元数据对象
				/// </summary>
				/// <returns>OGC格式的源数据对象指针</returns>
				public virtual EarthView.World.Spatial.Wmtsserverinfo GetOGCWMTSCapabilitiesRef()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmtsserverinfo csObj = new EarthView.World.Spatial.Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmtsserverinfo;
						csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getEVWMTSCapabilities_CallBack_ev_int32_EVString(ref IntPtr value);

				protected getEVWMTSCapabilities_CallBack_ev_int32_EVString m_getEVWMTSCapabilities_CallBack_ev_int32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_NoVirtual(IntPtr pNativeObject, ref IntPtr value);

				/// <summary>
				/// 获取xml格式的EarthView元数据
				/// </summary>
				/// <param name="value">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetEVWMTSCapabilities_NoVirtual(ref string value)
				{
					IntPtr __ptrvalue=Marshal.StringToHGlobalAnsi(value);
					IntPtr pTmpvalue=__ptrvalue;
					
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_NoVirtual(this.NativeObject, ref __ptrvalue);
					
					 Marshal.FreeHGlobal(pTmpvalue);
					value= Marshal.PtrToStringAnsi(__ptrvalue);
					ClassFactory.FreeString(ref __ptrvalue);
					return ret;
					
				}

				protected  int EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Function(ref IntPtr value)
				{
					string strvalue= Marshal.PtrToStringAnsi(value);
					ClassFactory.FreeString(ref value);
					
					int csret=GetEVWMTSCapabilities(ref strvalue);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(IntPtr pNativeObject, ref IntPtr value);

				/// <summary>
				/// 获取xml格式的EarthView元数据
				/// </summary>
				/// <param name="value">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				public virtual int GetEVWMTSCapabilities(ref string value)
				{
					IntPtr __ptrvalue = Marshal.StringToHGlobalAnsi(value);
					IntPtr pTmpvalue = __ptrvalue;
					
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(this.NativeObject, ref __ptrvalue);
					
					 Marshal.FreeHGlobal(pTmpvalue);
					value= Marshal.PtrToStringAnsi(__ptrvalue);
					ClassFactory.FreeString(ref __ptrvalue);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getLayerInfoRef_CallBack_CEVWMTSLayerInfo();

				protected getLayerInfoRef_CallBack_CEVWMTSLayerInfo m_getLayerInfoRef_CallBack_CEVWMTSLayerInfo;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取EarthView元数据对象
				/// </summary>
				/// <returns>元数据对象指针</returns>
				public virtual EarthView.World.Spatial.Evwmtslayerinfo GetLayerInfoRef_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmtslayerinfo csObj = new EarthView.World.Spatial.Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMTSLayerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmtslayerinfo;
						csObj.BindNativeObject(__ptr, "CEVWMTSLayerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Function()
				{
					EarthView.World.Spatial.Evwmtslayerinfo csret=GetLayerInfoRef();
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(IntPtr pNativeObject);

				/// <summary>
				/// 获取EarthView元数据对象
				/// </summary>
				/// <returns>元数据对象指针</returns>
				public virtual EarthView.World.Spatial.Evwmtslayerinfo GetLayerInfoRef()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmtslayerinfo csObj = new EarthView.World.Spatial.Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMTSLayerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmtslayerinfo;
						csObj.BindNativeObject(__ptr, "CEVWMTSLayerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取更新时间
				/// </summary>
				/// <returns>更新时间</returns>
				public new string GetUpdateTime_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取更新时间
				/// </summary>
				/// <returns>更新时间</returns>
				public override string GetUpdateTime()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getCacheDataType_CallBack_EVSSCCacheDataType();

				protected getCacheDataType_CallBack_EVSSCCacheDataType m_getCacheDataType_CallBack_EVSSCCacheDataType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取缓存数据类型
				/// </summary>
				/// <returns>vector/image/dem</returns>
				public virtual EarthView.World.Spatial.EVSSCCACHEDATATYPE GetCacheDataType_NoVirtual()
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial.EVSSCCACHEDATATYPE)ret;
					
				}

				protected  int EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Function()
				{
					EarthView.World.Spatial.EVSSCCACHEDATATYPE csret=GetCacheDataType();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(IntPtr pNativeObject);

				/// <summary>
				/// 获取缓存数据类型
				/// </summary>
				/// <returns>vector/image/dem</returns>
				public virtual EarthView.World.Spatial.EVSSCCACHEDATATYPE GetCacheDataType()
				{
					int ret=EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(this.NativeObject);
					
					return (EarthView.World.Spatial.EVSSCCACHEDATATYPE)ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLocalImageDataset = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CLocalImageDataset", new LocalImageDatasetClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CLocalImageDatasetProxy", new LocalImageDatasetClassFactory());

				public LocalImageDataset(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(IntPtr pObject, getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(IntPtr pObject, getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(IntPtr pObject, getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(IntPtr pObject, getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(IntPtr pObject, getEVWMTSCapabilities_CallBack_ev_int32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(IntPtr pObject, getLayerInfoRef_CallBack_CEVWMTSLayerInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(IntPtr pObject, getCacheDataType_CallBack_EVSSCCacheDataType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType(IntPtr pObject, getType_CallBack_EVDatasetType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64(IntPtr pObject, getDataVersion_CallBack_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(IntPtr pObject, getUpdateTime_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool(IntPtr pObject, hasSubDataset_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource(IntPtr pObject, getDataSourceRef_CallBack_IDataSource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool(IntPtr pObject, canEdit_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool(IntPtr pObject, startEditing_CallBack_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool(IntPtr pObject, stopEditing_CallBack_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool(IntPtr pObject, isBeginEditingOperation_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool(IntPtr pObject, beginEditingOperation_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool(IntPtr pObject, endEditingOperation_CallBack_ev_bool_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo = EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Function;
						GC.KeepAlive(m_getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(this.NativeObject, m_getTile_CallBack_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo);
						m_getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult = EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Function;
						GC.KeepAlive(m_getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(this.NativeObject, m_getTileProperty_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult);
						m_getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult = EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Function;
						GC.KeepAlive(m_getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(this.NativeObject, m_getFeatureInfo_CallBack_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult);
						m_getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo = EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Function;
						GC.KeepAlive(m_getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(this.NativeObject, m_getOGCWMTSCapabilitiesRef_CallBack_CWMTSServerInfo);
						m_getEVWMTSCapabilities_CallBack_ev_int32_EVString = EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Function;
						GC.KeepAlive(m_getEVWMTSCapabilities_CallBack_ev_int32_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(this.NativeObject, m_getEVWMTSCapabilities_CallBack_ev_int32_EVString);
						m_getLayerInfoRef_CallBack_CEVWMTSLayerInfo = EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Function;
						GC.KeepAlive(m_getLayerInfoRef_CallBack_CEVWMTSLayerInfo);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(this.NativeObject, m_getLayerInfoRef_CallBack_CEVWMTSLayerInfo);
						m_getCacheDataType_CallBack_EVSSCCacheDataType = EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Function;
						GC.KeepAlive(m_getCacheDataType_CallBack_EVSSCCacheDataType);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(this.NativeObject, m_getCacheDataType_CallBack_EVSSCCacheDataType);
						m_getType_CallBack_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Function;
						GC.KeepAlive(m_getType_CallBack_EVDatasetType);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType(this.NativeObject, m_getType_CallBack_EVDatasetType);
						m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_getDataVersion_CallBack_ev_uint64 = EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Function;
						GC.KeepAlive(m_getDataVersion_CallBack_ev_uint64);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64(this.NativeObject, m_getDataVersion_CallBack_ev_uint64);
						m_getDescription_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
						m_getUpdateTime_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Function;
						GC.KeepAlive(m_getUpdateTime_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(this.NativeObject, m_getUpdateTime_CallBack_EVString);
						m_hasSubDataset_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Function;
						GC.KeepAlive(m_hasSubDataset_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool(this.NativeObject, m_hasSubDataset_CallBack_ev_bool);
						m_getDataSourceRef_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Function;
						GC.KeepAlive(m_getDataSourceRef_CallBack_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource(this.NativeObject, m_getDataSourceRef_CallBack_IDataSource);
						m_canEdit_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Function;
						GC.KeepAlive(m_canEdit_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool(this.NativeObject, m_canEdit_CallBack_ev_bool);
						m_isEditing_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Function;
						GC.KeepAlive(m_isEditing_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
						m_startEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_bool);
						m_stopEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_stopEditing_CallBack_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool(this.NativeObject, m_stopEditing_CallBack_ev_bool_ev_bool);
						m_isBeginEditingOperation_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Function;
						GC.KeepAlive(m_isBeginEditingOperation_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool(this.NativeObject, m_isBeginEditingOperation_CallBack_ev_bool);
						m_beginEditingOperation_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Function;
						GC.KeepAlive(m_beginEditingOperation_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool(this.NativeObject, m_beginEditingOperation_CallBack_ev_bool);
						m_endEditingOperation_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_endEditingOperation_CallBack_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool(this.NativeObject, m_endEditingOperation_CallBack_ev_bool_ev_bool);
					}
				}
				public override EarthView.World.Spatial.GeoDataset.EVDATASETTYPE GetType()
				{
					return base.GetType_NoVirtual();
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override ulong GetDataVersion()
				{
					return base.GetDataVersion_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public override bool HasSubDataset()
				{
					return base.HasSubDataset_NoVirtual();
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource GetDataSourceRef()
				{
					return base.GetDataSourceRef_NoVirtual();
				}
				public override bool CanEdit()
				{
					return base.CanEdit_NoVirtual();
				}
				public override bool IsEditing()
				{
					return base.IsEditing_NoVirtual();
				}
				public override bool StartEditing(bool withUndo)
				{
					return base.StartEditing_NoVirtual(withUndo);
				}
				public override bool StopEditing(bool isSave)
				{
					return base.StopEditing_NoVirtual(isSave);
				}
				public override bool IsBeginEditingOperation()
				{
					return base.IsBeginEditingOperation_NoVirtual();
				}
				public override bool BeginEditingOperation()
				{
					return base.BeginEditingOperation_NoVirtual();
				}
				public override bool EndEditingOperation(bool isConfirm)
				{
					return base.EndEditingOperation_NoVirtual(isConfirm);
				}
				public static LocalImageDataset FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LocalImageDataset obj = baseObj as  LocalImageDataset;
					if (object.Equals(obj, null))
					{
						obj = new LocalImageDataset(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLocalImageDataset");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LocalImageDatasetClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LocalImageDataset emptyInstance = new LocalImageDataset(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
