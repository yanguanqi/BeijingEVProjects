package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////
//CReprojectAlg
//////////////////////////////////////////////////////////
///<summary>
///重投影变换类
///<summary>
public class ReprojectAlg extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CReprojectAlg", new ReprojectAlgClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ReprojectAlg() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CReprojectAlg", null);
	}

	native private static boolean reprojectImage_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_CProgressInfo(long pSrcDS, long pszSrcWKT, long pDstDS, long pszDstWKT, int eResampleMthd, double dfMaxErro, long pProgressArg);
	/**
	 * 重投影影像，一幅影像转换到另一投影下的一幅影像
	 * @param pSrcDS 源数据集
	 * @param pszSrcWKT 源数据集坐标（WKT）描述，为NULL将从pSrcDS读出相应信息
	 * @param pDstDS 目标数据集
	 * @param pszDstWKT 目标数据集坐标（WKT）描述,为NULL将从pSrcDS读出相应信息
	 * @param eResampleMthd 采样方法
	 * @param dfMaxErro 最大误差单位是pixel，用于创建近似变换
	 * @param pfnProgress 进度解析函数,可为NULL
	 * @param pProgressArg 进度反馈对象，可为NULL
	 * @return 1,表示投影成功，0表示变换失败
	 */
	public static boolean reprojectImage(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszSrcWKT, com.earthview.world.spatial2d.raster.RasterDataSet pDstDS, BytePointer pszDstWKT, com.earthview.world.spatial2d.raster.EVResampleMethod eResampleMthd, double dfMaxErro, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszSrcWKTParamValue = (pszSrcWKT == null ? 0L : pszSrcWKT.nativeObject.pointer);
		long pDstDSParamValue = (pDstDS == null ? 0L : pDstDS.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		int eResampleMthdParamValue = eResampleMthd.getValue();
		double dfMaxErroParamValue = dfMaxErro;
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = reprojectImage_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_CProgressInfo(pSrcDSParamValue, pszSrcWKTParamValue, pDstDSParamValue, pszDstWKTParamValue, eResampleMthdParamValue, dfMaxErroParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private static boolean DefineProjectImage_CRasterDataSet_ev_char_ev_char_EVDataSetFormat_CProgressInfo(long pSrcDS, long pszDstFilename, long pszDstWKT, int eDatasetFormat, long pProgressArg);
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
	public static boolean DefineProjectImage(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszDstFilename, BytePointer pszDstWKT, com.earthview.world.spatial2d.raster.EVDataSetFormat eDatasetFormat, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszDstFilenameParamValue = (pszDstFilename == null ? 0L : pszDstFilename.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		int eDatasetFormatParamValue = eDatasetFormat.getValue();
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = DefineProjectImage_CRasterDataSet_ev_char_ev_char_EVDataSetFormat_CProgressInfo(pSrcDSParamValue, pszDstFilenameParamValue, pszDstWKTParamValue, eDatasetFormatParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private static boolean createAndReprojectImage_CRasterDataSet_ev_char_ev_char_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(long pSrcDS, long pszSrcWKT, long pszDstFilename, long pszDstWKT, int eDatasetFormat, int eResampleMthd, double dfMaxErro, long pProgressArg);
	/**
	 * 重投影影像，一幅影像转换到创建指定投影的一幅影像
	 * @param pSrcDS 源数据集
	 * @param pszSrcWKT 源数据集坐标（WKT）描述,为NULL将从pSrcDS读出相应信息
	 * @param pszDstFilename 指定创建后目标数据集的文件夹
	 * @param pszDstWKT 目标数据集坐标（WKT）描述
	 * @param eDatasetFormat 要创建的目标数据集类型
	 * @param eResampleMthd 采样方法
	 * @param dfMaxErro 最大误差单位是pixel，用于创建近似变换
	 * @param pfnProgress 进度解析函数
	 * @param pProgressArg 进度反馈对象
	 * @return 1,表示投影成功，0表示变换失败
	 */
	public static boolean createAndReprojectImage(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszSrcWKT, BytePointer pszDstFilename, BytePointer pszDstWKT, com.earthview.world.spatial2d.raster.EVDataSetFormat eDatasetFormat, com.earthview.world.spatial2d.raster.EVResampleMethod eResampleMthd, double dfMaxErro, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszSrcWKTParamValue = (pszSrcWKT == null ? 0L : pszSrcWKT.nativeObject.pointer);
		long pszDstFilenameParamValue = (pszDstFilename == null ? 0L : pszDstFilename.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		int eDatasetFormatParamValue = eDatasetFormat.getValue();
		int eResampleMthdParamValue = eResampleMthd.getValue();
		double dfMaxErroParamValue = dfMaxErro;
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = createAndReprojectImage_CRasterDataSet_ev_char_ev_char_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(pSrcDSParamValue, pszSrcWKTParamValue, pszDstFilenameParamValue, pszDstWKTParamValue, eDatasetFormatParamValue, eResampleMthdParamValue, dfMaxErroParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private static boolean createAndReprojectImage_CRasterDataSet_CCoordinateTransformation_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(long pSrcDS, long ptans, long pszDstFilename, int eDatasetFormat, int eResampleMthd, double dfMaxErro, long pProgressArg);
	/**
	 * //重投影影像，一幅影像转换到创建指定投影的一幅影像
	 * @param pSrcDS 源数据集
	 * @param ptans 变换类
	 * @param pszDstFilename 指定创建后目标数据集的文件夹
	 * @param eDatasetFormat 要创建的目标数据集类型
	 * @param eResampleMthd 采样方法
	 * @param dfMaxErro 最大误差单位是pixel，用于创建近似变换
	 * @param pfnProgress 进度解析函数
	 * @param pProgressArg 进度反馈对象
	 * @return 1,表示投影成功，0表示变换失败
	 */
	public static boolean createAndReprojectImage(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, com.earthview.world.spatial.utility.CoordinateTransformation ptans, BytePointer pszDstFilename, com.earthview.world.spatial2d.raster.EVDataSetFormat eDatasetFormat, com.earthview.world.spatial2d.raster.EVResampleMethod eResampleMthd, double dfMaxErro, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long ptansParamValue = (ptans == null ? 0L : ptans.nativeObject.pointer);
		long pszDstFilenameParamValue = (pszDstFilename == null ? 0L : pszDstFilename.nativeObject.pointer);
		int eDatasetFormatParamValue = eDatasetFormat.getValue();
		int eResampleMthdParamValue = eResampleMthd.getValue();
		double dfMaxErroParamValue = dfMaxErro;
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = createAndReprojectImage_CRasterDataSet_CCoordinateTransformation_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(pSrcDSParamValue, ptansParamValue, pszDstFilenameParamValue, eDatasetFormatParamValue, eResampleMthdParamValue, dfMaxErroParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private static boolean reprojectBlock_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_ev_uchar_CProgressInfo(long pSrcDS, long pszSrcWKT, long pDstDS, long pszDstWKT, int eResampleMthd, double dfMaxErro, long pBuffer, long pProgressArg);
	/**
	 * 重投影影像中的某一块，投影后的数据放在buffer中
	 * @param pSrcDS 源数据集
	 * @param pszSrcWKT 源数据集坐标（WKT）描述,为NULL将从pSrcDS读出相应信息
	 * @param pDstDS 目标数据集，如果为NULL，函数内部将创建一个用于计算
	 * @param pszDstWKT 目标数据集坐标（WKT）描述
	 * @param eResampleMthd 采样方法
	 * @param dfMaxErro 最大误差单位是pixel，用于创建近似变换
	 * @param pBuffer 保存投影结果缓存
	 * @param pfnProgress 进度解析函数
	 * @param pProgressArg 进度反馈对象
	 * @return 1,表示投影成功，0表示变换失败
	 */
	public static boolean reprojectBlock(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszSrcWKT, com.earthview.world.spatial2d.raster.RasterDataSet pDstDS, BytePointer pszDstWKT, com.earthview.world.spatial2d.raster.EVResampleMethod eResampleMthd, double dfMaxErro, UBytePointer pBuffer, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszSrcWKTParamValue = (pszSrcWKT == null ? 0L : pszSrcWKT.nativeObject.pointer);
		long pDstDSParamValue = (pDstDS == null ? 0L : pDstDS.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		int eResampleMthdParamValue = eResampleMthd.getValue();
		double dfMaxErroParamValue = dfMaxErro;
		long pBufferParamValue = (pBuffer == null ? 0L : pBuffer.nativeObject.pointer);
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = reprojectBlock_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_ev_uchar_CProgressInfo(pSrcDSParamValue, pszSrcWKTParamValue, pDstDSParamValue, pszDstWKTParamValue, eResampleMthdParamValue, dfMaxErroParamValue, pBufferParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private static long createDatasetForProj_CRasterDataSet_ev_char_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(long pSrcDS, long pszSrcWKT, long pszDstWKT, long pszDstFilePath, int iWidth, int iHeight, long pAffine);
	/**
	 * 创建指定投影的数据集,只创建Tif格式的数据集
	 * @param pSrcDS 源数据集
	 * @param pszSrcWKT 源数据集坐标（WKT）描述,为NULL将从pSrcDS读出相应信息
	 * @param pszDstWKT 目标数据集坐标（WKT）描述
	 * @param pszDstFilePath 目标数据集所在位置，为NULL创建虚拟数据集
	 * @param iWidth 目标数据集宽度，为0时用源图像对应的宽度
	 * @param iHeight 目标数据集高度，为0时用源图像对应的高度
	 * @param pAffine 仿射变换参数，为NULL时用源图像对应的参数，必须与width跟hieght相适应
	 */
	public static com.earthview.world.spatial2d.raster.RasterDataSet createDatasetForProj(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszSrcWKT, BytePointer pszDstWKT, BytePointer pszDstFilePath, int iWidth, int iHeight, com.earthview.world.spatial2d.raster.AffineTransform pAffine)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszSrcWKTParamValue = (pszSrcWKT == null ? 0L : pszSrcWKT.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		long pszDstFilePathParamValue = (pszDstFilePath == null ? 0L : pszDstFilePath.nativeObject.pointer);
		int iWidthParamValue = iWidth;
		int iHeightParamValue = iHeight;
		long pAffineParamValue = (pAffine == null ? 0L : pAffine.nativeObject.pointer);
		long returnValue = createDatasetForProj_CRasterDataSet_ev_char_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(pSrcDSParamValue, pszSrcWKTParamValue, pszDstWKTParamValue, pszDstFilePathParamValue, iWidthParamValue, iHeightParamValue, pAffineParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterDataSet __returnValue = new com.earthview.world.spatial2d.raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate, "CRasterDataSet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterDataSet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRasterDataSet");
		}
		return __returnValue;
	}
	native private static void getSuggestedOutput_CRasterDataSet_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(long pSrcDS, long pszSrcWKT, long pszDstWKT, long iWidth, long iheight, long objAffine);
	/**
	 * 根据给定的数据集和投影参数，计算输出数据集的大小和仿射变换参数
	 * @param pSrcDS 源数据集
	 * @param pszSrcWKT 源数据集坐标（WKT）描述,为NULL将从pSrcDS读出相应信息
	 * @param pszDstWKT 目标数据集坐标（WKT）描述
	 * @param iWidth 目标数据集宽度
	 * @param iHeight 目标数据集高度
	 * @param objAffine 仿射变换参数
	 */
	public static void getSuggestedOutput(com.earthview.world.spatial2d.raster.RasterDataSet pSrcDS, BytePointer pszSrcWKT, BytePointer pszDstWKT, IntegerPointer iWidth, IntegerPointer iheight, com.earthview.world.spatial2d.raster.AffineTransform objAffine)
	{
		long pSrcDSParamValue = (pSrcDS == null ? 0L : pSrcDS.nativeObject.pointer);
		long pszSrcWKTParamValue = (pszSrcWKT == null ? 0L : pszSrcWKT.nativeObject.pointer);
		long pszDstWKTParamValue = (pszDstWKT == null ? 0L : pszDstWKT.nativeObject.pointer);
		long iWidthParamValue = iWidth.nativeObject.pointer;
		long iheightParamValue = iheight.nativeObject.pointer;
		long objAffineParamValue = objAffine.nativeObject.pointer;
		getSuggestedOutput_CRasterDataSet_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(pSrcDSParamValue, pszSrcWKTParamValue, pszDstWKTParamValue, iWidthParamValue, iheightParamValue, objAffineParamValue);
	}
	public ReprojectAlg(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ReprojectAlg(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ReprojectAlg fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ReprojectAlg obj = null;
 		if(baseObj instanceof ReprojectAlg)
		{
			obj = (ReprojectAlg)baseObj;
		} else {
			obj = new ReprojectAlg(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CReprojectAlg");
			obj.increaseCast();
		}

		return obj;
	}
}
