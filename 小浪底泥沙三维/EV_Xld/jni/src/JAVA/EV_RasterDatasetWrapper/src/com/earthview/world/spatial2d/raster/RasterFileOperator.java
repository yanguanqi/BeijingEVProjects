package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CRasterFileOperator栅格数据集操作对象
 */
public class RasterFileOperator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterFileOperator", new RasterFileOperatorClassFactory());
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取Operator对应的数据集类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDataSourceType_void(long pNativeObject);
	/**
	 * 获取Operator对应的数据数据源类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDataSourceType getDataSourceType()
	{
		int returnValue = getDataSourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDataSourceType.toEnum(returnValue);
	}
	native private long open_EVString(long pNativeObject, String pszFullpathName);
	/**
	 * 打开数据集
	 * @param  
	 * @param  
	 */
	public com.earthview.world.spatial2d.raster.RasterDataSet open(String pszFullpathName)
	{
		String pszFullpathNameParamValue = pszFullpathName;
		long returnValue = open_EVString(this.nativeObject.pointer, pszFullpathNameParamValue);
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
	native private void deleteDataset_CRasterDataSet(long pNativeObject, long pobjDataSet);
	/**
	 * 删除数据集
	 * @param  
	 */
	public void deleteDataset(com.earthview.world.spatial2d.raster.RasterDataSet pobjDataSet)
	{
		long pobjDataSetParamValue = (pobjDataSet == null ? 0L : pobjDataSet.nativeObject.pointer);
		deleteDataset_CRasterDataSet(this.nativeObject.pointer, pobjDataSetParamValue);
	}
	/**
	 * 默认构造函数
	 */
	public RasterFileOperator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRasterFileOperator", null);
	}

	native private static long open_EVString_EVAccess(String pszFullpathName, int eAccess);
	///<summary>
	///根据给定路径打开一个数据集 
	///</summary>
	/// <param name="pszFullpathName">栅格数据的全路径</param>
	/// <param name="eAccess">栅格数据集的打开权限</param>
	/// <returns>栅格数据集指针<returns>
	public static com.earthview.world.spatial2d.raster.RasterDataSet open(String pszFullpathName, com.earthview.world.spatial2d.raster.EVAccess eAccess)
	{
		String pszFullpathNameParamValue = pszFullpathName;
		int eAccessParamValue = eAccess.getValue();
		long returnValue = open_EVString_EVAccess(pszFullpathNameParamValue, eAccessParamValue);
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
	native private static long create_EVString_ev_int32_ev_int32_ev_int32_EVRasterDataType_EVDataSetFormat(String pszpath, int iWidth, int iHeight, int ibandCount, int edatatype, int erasterType);
	///<summary>
	///根据给定参数创建相应的栅格数据集 
	///</summary>
	/// <param name="pszpath">栅格数据集的路径，可以为空字符串，当为空时创建虚拟对象</param>
	/// <param name="iWidth">栅格数据集的宽度</param>
	/// <param name="iHeight">栅格数据集的高度</param>
	/// <param name="ibandCount">栅格数据集之波段数</param>
	/// <param name="edatatype">数据类型</param>
	/// <param name="erasterType">创建相应对象选项,如Tif，img等(PNG\JPG CrateCopy)</param>
	/// <returns>栅格数据集指针<returns>
	public static com.earthview.world.spatial2d.raster.RasterDataSet create(String pszpath, int iWidth, int iHeight, int ibandCount, com.earthview.world.spatial.geodataset.EVRasterDataType edatatype, com.earthview.world.spatial2d.raster.EVDataSetFormat erasterType)
	{
		String pszpathParamValue = pszpath;
		int iWidthParamValue = iWidth;
		int iHeightParamValue = iHeight;
		int ibandCountParamValue = ibandCount;
		int edatatypeParamValue = edatatype.getValue();
		int erasterTypeParamValue = erasterType.getValue();
		long returnValue = create_EVString_ev_int32_ev_int32_ev_int32_EVRasterDataType_EVDataSetFormat(pszpathParamValue, iWidthParamValue, iHeightParamValue, ibandCountParamValue, edatatypeParamValue, erasterTypeParamValue);
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
	native private static long createFormStream_ev_uchar_ev_uint64_EVDataSetFormat(long pFileBuffer, long idataLenth, int erasterType);
	///<summary>
	///根据给定参数创建相应的栅格数据集 
	///</summary>
	/// <param name="pFileBuffer">数据集的二进制流</param>
	/// <param name="erasterType">创建相应对象选项,如JPEG，Tif，img Png等</param>
	/// <returns>栅格数据集指针<returns>
	public static com.earthview.world.spatial2d.raster.RasterDataSet createFormStream(UBytePointer pFileBuffer, ULongPointer idataLenth, com.earthview.world.spatial2d.raster.EVDataSetFormat erasterType)
	{
		long pFileBufferParamValue = (pFileBuffer == null ? 0L : pFileBuffer.nativeObject.pointer);
		long idataLenthParamValue = idataLenth.nativeObject.pointer;
		int erasterTypeParamValue = erasterType.getValue();
		long returnValue = createFormStream_ev_uchar_ev_uint64_EVDataSetFormat(pFileBufferParamValue, idataLenthParamValue, erasterTypeParamValue);
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
	native private static long createCopy_EVString_CRasterDataSet_EVDataSetFormat_CProgressInfo(String pszCopypath, long pSrcDataset, int erasterType, long pProssiInfo);
	/**
	 * 复制一个数据集
	 * @param pszCopypath 目标数据集路径，为""创建内存数据集
	 * @param pSrcDataset 源数据集对象
	 * @param erasterType 创建相应对象选项,如JPEG，Tif，imgPng等
	 * @param pfnProgress 进度函数
	 * @param pProssiInfo 进度信息类
	 * @return 返回一个数据集对象，要显示调用close函数才能将数据集刷到硬盘
	 */
	public static com.earthview.world.spatial2d.raster.RasterDataSet createCopy(String pszCopypath, com.earthview.world.spatial2d.raster.RasterDataSet pSrcDataset, com.earthview.world.spatial2d.raster.EVDataSetFormat erasterType, com.earthview.world.spatial2d.raster.ProgressInfo pProssiInfo)
	{
		String pszCopypathParamValue = pszCopypath;
		long pSrcDatasetParamValue = (pSrcDataset == null ? 0L : pSrcDataset.nativeObject.pointer);
		int erasterTypeParamValue = erasterType.getValue();
		long pProssiInfoParamValue = (pProssiInfo == null ? 0L : pProssiInfo.nativeObject.pointer);
		long returnValue = createCopy_EVString_CRasterDataSet_EVDataSetFormat_CProgressInfo(pszCopypathParamValue, pSrcDatasetParamValue, erasterTypeParamValue, pProssiInfoParamValue);
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
	native private static void close_CRasterDataSet(long pobjDataSet);
	/**
	 * 释放数据集指针
	 * @param pobjDataSet 栅格数据集指针
	 */
	public static void close(com.earthview.world.spatial2d.raster.RasterDataSet pobjDataSet)
	{
		long pobjDataSetParamValue = (pobjDataSet == null ? 0L : pobjDataSet.nativeObject.pointer);
		close_CRasterDataSet(pobjDataSetParamValue);
	}
	public RasterFileOperator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterFileOperator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RasterFileOperator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterFileOperator obj = null;
 		if(baseObj instanceof RasterFileOperator)
		{
			obj = (RasterFileOperator)baseObj;
		} else {
			obj = new RasterFileOperator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterFileOperator");
			obj.increaseCast();
		}

		return obj;
	}
}
