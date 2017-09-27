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
			namespace Utility
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				///////////////////////////////////////////////////////////
				//CReprojectAlg
				//////////////////////////////////////////////////////////
				///<summary>
				///重投影变换类
				///<summary>
				public class ReprojectAlg : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					public ReprojectAlg() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CReprojectAlg",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectImage_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_CProgressInfo(IntPtr pSrcDS, byte[] pszSrcWKT, IntPtr pDstDS, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, IntPtr pProgressArg);

					///<summary>
					///重投影影像，一幅影像转换到另一
					///投影下的一幅影像
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="pszSrcWKT">源数据集坐标（WKT）描述，为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="pDstDS">目标数据集</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述,为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="eResampleMthd">采样方法</param>
					/// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
					/// <param name="pfnProgress">进度解析函数 ,可为NULL</param>
					/// <param name="pProgressArg">进度反馈对象，可为NULL</param>
					///<returns>1,表示投影成功，0表示变换失败</returns>
					public static bool ReprojectImage(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszSrcWKT, EarthView.World.Spatial2D.Raster.RasterDataSet pDstDS, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectImage_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_CProgressInfo(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszSrcWKT, object.Equals(pDstDS, null) ? IntPtr.Zero : pDstDS.NativeObject, pszDstWKT, eResampleMthd, dfMaxErro, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Raster_CReprojectAlg_DefineProjectImage_ev_bool_CRasterDataSet_ev_char_ev_char_EVDataSetFormat_CProgressInfo(IntPtr pSrcDS, byte[] pszDstFilename, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, IntPtr pProgressArg);

					///<summary>
					///重投影影像，一幅无投影影像转换到
					///一幅有投影的影像上
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					///将从pSrcDS读出相应信息</param>
					/// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
					/// <param name="eDatasetFormat">要创建的目标数据集类型</param>
					/// <param name="pfnProgress">进度解析函数 ,可为NULL</param>
					/// <param name="pProgressArg">进度反馈对象，可为NULL</param>
					///<returns>1,表示投影成功，0表示变换失败</returns>
					public static bool DefineProjectImage(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszDstFilename, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CReprojectAlg_DefineProjectImage_ev_bool_CRasterDataSet_ev_char_ev_char_EVDataSetFormat_CProgressInfo(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszDstFilename, pszDstWKT, eDatasetFormat, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_ev_char_ev_char_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(IntPtr pSrcDS, byte[] pszSrcWKT, byte[] pszDstFilename, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, IntPtr pProgressArg);

					///<summary>
					///重投影影像，一幅影像转换到创建指定
					///投影的一幅影像
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
					/// <param name="eDatasetFormat">要创建的目标数据集类型</param>
					/// <param name="eResampleMthd">采样方法</param>
					/// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
					/// <param name="pfnProgress">进度解析函数 </param>
					/// <param name="pProgressArg">进度反馈对象</param>
					///<returns>1,表示投影成功，0表示变换失败</returns>
					public static bool CreateAndReprojectImage(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszSrcWKT, byte[] pszDstFilename, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_ev_char_ev_char_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszSrcWKT, pszDstFilename, pszDstWKT, eDatasetFormat, eResampleMthd, dfMaxErro, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_CCoordinateTransformation_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(IntPtr pSrcDS, IntPtr ptans, byte[] pszDstFilename, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, IntPtr pProgressArg);

					///<summary>///////////////////////////////////////////////////////////////////////
					///重投影影像，一幅影像转换到创建指定
					///投影的一幅影像
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="ptans">变换类</param>
					/// <param name="pszDstFilename">指定创建后目标数据集的文件夹</param>
					/// <param name="eDatasetFormat">要创建的目标数据集类型</param>
					/// <param name="eResampleMthd">采样方法</param>
					/// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
					/// <param name="pfnProgress">进度解析函数 </param>
					/// <param name="pProgressArg">进度反馈对象</param>
					///<returns>1,表示投影成功，0表示变换失败</returns>
					public static bool CreateAndReprojectImage(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, EarthView.World.Spatial.Utility.CoordinateTransformation ptans, byte[] pszDstFilename, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT eDatasetFormat, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_CCoordinateTransformation_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, object.Equals(ptans, null) ? IntPtr.Zero : ptans.NativeObject, pszDstFilename, eDatasetFormat, eResampleMthd, dfMaxErro, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectBlock_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_ev_uchar_CProgressInfo(IntPtr pSrcDS, byte[] pszSrcWKT, IntPtr pDstDS, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, IntPtr pBuffer, IntPtr pProgressArg);

					///<summary>
					///重投影影像中的某一块，投影后的数据放在buffer中
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="pDstDS">目标数据集，如果为NULL，函数内部将创建一个用于计算</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
					/// <param name="eResampleMthd">采样方法</param>
					/// <param name="dfMaxErro">最大误差单位是pixel，用于创建近似变换</param>
					/// <param name="pBuffer">保存投影结果缓存</param>
					/// <param name="pfnProgress">进度解析函数 </param>
					/// <param name="pProgressArg">进度反馈对象</param>
					///<returns>1,表示投影成功，0表示变换失败</returns>
					public static bool ReprojectBlock(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszSrcWKT, EarthView.World.Spatial2D.Raster.RasterDataSet pDstDS, byte[] pszDstWKT, EarthView.World.Spatial2D.Raster.EVRESAMPLEMETHOD eResampleMthd, double dfMaxErro, IntPtr pBuffer, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectBlock_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_ev_uchar_CProgressInfo(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszSrcWKT, object.Equals(pDstDS, null) ? IntPtr.Zero : pDstDS.NativeObject, pszDstWKT, eResampleMthd, dfMaxErro, pBuffer, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CReprojectAlg_createDatasetForProj_CRasterDataSet_CRasterDataSet_ev_char_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(IntPtr pSrcDS, byte[] pszSrcWKT, byte[] pszDstWKT, byte[] pszDstFilePath, int iWidth, int iHeight, IntPtr pAffine);

					///<summary>
					///创建指定投影的数据集,只创建Tif格式的数据集
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
					/// <param name="pszDstFilePath">目标数据集所在位置，为NULL创建虚拟数据集</param>
					/// <param name="iWidth">目标数据集宽度，为0时用源图像对应的宽度</param>
					/// <param name="iHeight">目标数据集高度，为0时用源图像对应的高度</param>
					/// <param name="pAffine">仿射变换参数，为NULL时用源图像对应的参数，必须与width跟hieght
					///相适应</param>
					public static EarthView.World.Spatial2D.Raster.RasterDataSet CreateDatasetForProj(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszSrcWKT, byte[] pszDstWKT, byte[] pszDstFilePath, int iWidth, int iHeight, EarthView.World.Spatial2D.Raster.AffineTransform pAffine)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CReprojectAlg_createDatasetForProj_CRasterDataSet_CRasterDataSet_ev_char_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszSrcWKT, pszDstWKT, pszDstFilePath, iWidth, iHeight, object.Equals(pAffine, null) ? IntPtr.Zero : pAffine.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CReprojectAlg_getSuggestedOutput_void_CRasterDataSet_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(IntPtr pSrcDS, byte[] pszSrcWKT, byte[] pszDstWKT, ref int iWidth, ref int iheight, IntPtr objAffine);

					///<summary>
					///根据给定的数据集和投影参数，计算输出数据集的大小和仿射变换参数
					///</summary>
					/// <param name="pSrcDS">源数据集</param>
					/// <param name="pszSrcWKT">源数据集坐标（WKT）描述,为NULL
					///将从pSrcDS读出相应信息</param>
					/// <param name="pszDstWKT">目标数据集坐标（WKT）描述</param>
					/// <param name="iWidth">目标数据集宽度</param>
					/// <param name="iHeight">目标数据集高度</param>
					/// <param name="objAffine">仿射变换参数</param>
					public static void GetSuggestedOutput(EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDS, byte[] pszSrcWKT, byte[] pszDstWKT, ref int iWidth, ref int iheight, ref EarthView.World.Spatial2D.Raster.AffineTransform objAffine)
					{
						EarthView_World_Spatial2D_Raster_CReprojectAlg_getSuggestedOutput_void_CRasterDataSet_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(object.Equals(pSrcDS, null) ? IntPtr.Zero : pSrcDS.NativeObject, pszSrcWKT, pszDstWKT, ref iWidth, ref iheight, object.Equals(objAffine, null) ? IntPtr.Zero : objAffine.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_d.so");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp_d.so");

						#else 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset.so");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp.so");

						#else 
							private static bool bLoadReprojectAlg = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadReprojectAlg = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CReprojectAlg", new ReprojectAlgClassFactory());

					public ReprojectAlg(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ReprojectAlg FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ReprojectAlg obj = baseObj as  ReprojectAlg;
						if (object.Equals(obj, null))
						{
							obj = new ReprojectAlg(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CReprojectAlg");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ReprojectAlgClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ReprojectAlg emptyInstance = new ReprojectAlg(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
