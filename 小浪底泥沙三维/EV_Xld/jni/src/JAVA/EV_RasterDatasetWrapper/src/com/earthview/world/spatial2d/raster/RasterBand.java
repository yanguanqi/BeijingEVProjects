package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CRasterBand波段对象
 */
public class RasterBand extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterBand", new RasterBandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterBandProxy", new RasterBandClassFactory());
	}

	protected  long getBandHistogram_void_callback()
	{
		com.earthview.world.spatial2d.raster.BandHistogram returnValue = getBandHistogram();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBandHistogram_void(long pNativeObject);
	/**
	 * 获取波段统计直方图
	 */
	public com.earthview.world.spatial2d.raster.BandHistogram getBandHistogram()
	{
		long returnValue = getBandHistogram_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.BandHistogram __returnValue = new com.earthview.world.spatial2d.raster.BandHistogram(CreatedWhenConstruct.CWC_NotToCreate, "CBandHistogram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.BandHistogram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBandHistogram");
		}
		return __returnValue;
	}
	native private long getBandHistogram_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.BandHistogram getBandHistogram_NoVirtual()
	{
		long returnValue = getBandHistogram_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.BandHistogram __returnValue = new com.earthview.world.spatial2d.raster.BandHistogram(CreatedWhenConstruct.CWC_NotToCreate, "CBandHistogram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.BandHistogram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBandHistogram");
		}
		return __returnValue;
	}

	protected  long getHistogram_void_callback()
	{
		com.earthview.world.spatial2d.raster.RasterHistogram returnValue = getHistogram();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getHistogram_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.RasterHistogram getHistogram()
	{
		long returnValue = getHistogram_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterHistogram __returnValue = new com.earthview.world.spatial2d.raster.RasterHistogram(CreatedWhenConstruct.CWC_NotToCreate, "CRasterHistogram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterHistogram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterHistogram");
		}
		return __returnValue;
	}
	native private long getHistogram_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.RasterHistogram getHistogram_NoVirtual()
	{
		long returnValue = getHistogram_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterHistogram __returnValue = new com.earthview.world.spatial2d.raster.RasterHistogram(CreatedWhenConstruct.CWC_NotToCreate, "CRasterHistogram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterHistogram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterHistogram");
		}
		return __returnValue;
	}

	protected  long getColorTable_void_callback()
	{
		com.earthview.world.spatial.display.ColorTable returnValue = getColorTable();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColorTable_void(long pNativeObject);
	public com.earthview.world.spatial.display.ColorTable getColorTable()
	{
		long returnValue = getColorTable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorTable __returnValue = new com.earthview.world.spatial.display.ColorTable(CreatedWhenConstruct.CWC_NotToCreate, "CColorTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColorTable");
		}
		return __returnValue;
	}
	native private long getColorTable_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.ColorTable getColorTable_NoVirtual()
	{
		long returnValue = getColorTable_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorTable __returnValue = new com.earthview.world.spatial.display.ColorTable(CreatedWhenConstruct.CWC_NotToCreate, "CColorTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColorTable");
		}
		return __returnValue;
	}

	protected  long getAttributeTable_void_callback()
	{
		com.earthview.world.spatial2d.raster.RasterAttributeTable returnValue = getAttributeTable();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAttributeTable_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.RasterAttributeTable getAttributeTable()
	{
		long returnValue = getAttributeTable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterAttributeTable __returnValue = new com.earthview.world.spatial2d.raster.RasterAttributeTable(CreatedWhenConstruct.CWC_NotToCreate, "CRasterAttributeTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterAttributeTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterAttributeTable");
		}
		return __returnValue;
	}
	native private long getAttributeTable_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.RasterAttributeTable getAttributeTable_NoVirtual()
	{
		long returnValue = getAttributeTable_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterAttributeTable __returnValue = new com.earthview.world.spatial2d.raster.RasterAttributeTable(CreatedWhenConstruct.CWC_NotToCreate, "CRasterAttributeTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterAttributeTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterAttributeTable");
		}
		return __returnValue;
	}

	protected  long getBandStatistics_ev_bool_callback(boolean isApprox)
	{
		boolean isApproxParamValue = isApprox;
		com.earthview.world.spatial2d.raster.BandStatisticsInfo returnValue = getBandStatistics(isApproxParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBandStatistics_ev_bool(long pNativeObject, boolean isApprox);
	/**
	 * 获取波段统计参数
	 * @return 波段统计参数对象指针
	 */
	public com.earthview.world.spatial2d.raster.BandStatisticsInfo getBandStatistics(boolean isApprox)
	{
		boolean isApproxParamValue = isApprox;
		long returnValue = getBandStatistics_ev_bool(this.nativeObject.pointer, isApproxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.BandStatisticsInfo __returnValue = new com.earthview.world.spatial2d.raster.BandStatisticsInfo(CreatedWhenConstruct.CWC_NotToCreate, "CBandStatisticsInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.BandStatisticsInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBandStatisticsInfo");
		}
		return __returnValue;
	}
	native private long getBandStatistics_ev_bool_NoVirtual(long pNativeObject, boolean isApprox);
	protected com.earthview.world.spatial2d.raster.BandStatisticsInfo getBandStatistics_NoVirtual(boolean isApprox)
	{
		boolean isApproxParamValue = isApprox;
		long returnValue = getBandStatistics_ev_bool_NoVirtual(this.nativeObject.pointer, isApproxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.BandStatisticsInfo __returnValue = new com.earthview.world.spatial2d.raster.BandStatisticsInfo(CreatedWhenConstruct.CWC_NotToCreate, "CBandStatisticsInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.BandStatisticsInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBandStatisticsInfo");
		}
		return __returnValue;
	}

	protected  boolean iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback(int bFlag, long pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, int eDataType, int iBufferX, int iBufferY)
	{
		com.earthview.world.spatial2d.raster.EVIOFlag bFlagParamValue = com.earthview.world.spatial2d.raster.EVIOFlag.toEnum(bFlag);
		VoidPointer pDstBufferParamValue = (pDstBuffer == 0L ? null : new VoidPointer(new InstancePointer(pDstBuffer)));
		int iOffsetXParamValue = iOffsetX;
		int iOffsetYParamValue = iOffsetY;
		int iWidthParamValue = iWidth;
		int iHeightParamValue = iHeight;
		com.earthview.world.spatial.geodataset.EVRasterDataType eDataTypeParamValue = com.earthview.world.spatial.geodataset.EVRasterDataType.toEnum(eDataType);
		int iBufferXParamValue = iBufferX;
		int iBufferYParamValue = iBufferY;
		boolean returnValue = iRasterIO(bFlagParamValue, pDstBufferParamValue, iOffsetXParamValue, iOffsetYParamValue, iWidthParamValue, iHeightParamValue, eDataTypeParamValue, iBufferXParamValue, iBufferYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(long pNativeObject, int bFlag, long pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, int eDataType, int iBufferX, int iBufferY);
	/**
	 * 读写图像数据指针
	 * @param bFlag 0表示读，1表示写
	 * @param pDstBuffer 外部开辟的内存块
	 * @param iOffsetX x方向像素坐标偏移
	 * @param iOffsetY y方向像素坐标偏移
	 * @param iWidth x方向宽度
	 * @param iHeight y方向高度
	 * @param eDataType 数据类型
	 * @return 0失败，1成功
	 */
	public boolean iRasterIO(com.earthview.world.spatial2d.raster.EVIOFlag bFlag, VoidPointer pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, int iBufferX, int iBufferY)
	{
		int bFlagParamValue = bFlag.getValue();
		long pDstBufferParamValue = (pDstBuffer == null ? 0L : pDstBuffer.nativeObject.pointer);
		int iOffsetXParamValue = iOffsetX;
		int iOffsetYParamValue = iOffsetY;
		int iWidthParamValue = iWidth;
		int iHeightParamValue = iHeight;
		int eDataTypeParamValue = eDataType.getValue();
		int iBufferXParamValue = iBufferX;
		int iBufferYParamValue = iBufferY;
		boolean returnValue = iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(this.nativeObject.pointer, bFlagParamValue, pDstBufferParamValue, iOffsetXParamValue, iOffsetYParamValue, iWidthParamValue, iHeightParamValue, eDataTypeParamValue, iBufferXParamValue, iBufferYParamValue);
		return returnValue;
	}
	native private boolean iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_NoVirtual(long pNativeObject, int bFlag, long pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, int eDataType, int iBufferX, int iBufferY);
	protected boolean iRasterIO_NoVirtual(com.earthview.world.spatial2d.raster.EVIOFlag bFlag, VoidPointer pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, int iBufferX, int iBufferY)
	{
		int bFlagParamValue = bFlag.getValue();
		long pDstBufferParamValue = (pDstBuffer == null ? 0L : pDstBuffer.nativeObject.pointer);
		int iOffsetXParamValue = iOffsetX;
		int iOffsetYParamValue = iOffsetY;
		int iWidthParamValue = iWidth;
		int iHeightParamValue = iHeight;
		int eDataTypeParamValue = eDataType.getValue();
		int iBufferXParamValue = iBufferX;
		int iBufferYParamValue = iBufferY;
		boolean returnValue = iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, bFlagParamValue, pDstBufferParamValue, iOffsetXParamValue, iOffsetYParamValue, iWidthParamValue, iHeightParamValue, eDataTypeParamValue, iBufferXParamValue, iBufferYParamValue);
		return returnValue;
	}

	protected  long asDataset_void_callback()
	{
		com.earthview.world.spatial2d.raster.RasterDataSet returnValue = asDataset();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long asDataset_void(long pNativeObject);
	/**
	 * 栅格数据集,外部不能释放这个指针
	 * @return EarthView::World::Spatial2D::Raster::CRasterDataSet*dataset
	 */
	public com.earthview.world.spatial2d.raster.RasterDataSet asDataset()
	{
		long returnValue = asDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterDataSet __returnValue = new com.earthview.world.spatial2d.raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate, "CRasterDataSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterDataSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterDataSet");
		}
		return __returnValue;
	}
	native private long asDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.RasterDataSet asDataset_NoVirtual()
	{
		long returnValue = asDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterDataSet __returnValue = new com.earthview.world.spatial2d.raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate, "CRasterDataSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterDataSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterDataSet");
		}
		return __returnValue;
	}

	protected  void setNodatavalue_ev_real64_callback(double dfNodataValue)
	{
		double dfNodataValueParamValue = dfNodataValue;
		setNodatavalue(dfNodataValueParamValue);
	}

	native private void setNodatavalue_ev_real64(long pNativeObject, double dfNodataValue);
	/**
	 * 设置NodataValue
	 * @param dfNodataValue 影像数据的无效值
	 */
	public void setNodatavalue(double dfNodataValue)
	{
		double dfNodataValueParamValue = dfNodataValue;
		setNodatavalue_ev_real64(this.nativeObject.pointer, dfNodataValueParamValue);
	}
	native private void setNodatavalue_ev_real64_NoVirtual(long pNativeObject, double dfNodataValue);
	protected void setNodatavalue_NoVirtual(double dfNodataValue)
	{
		double dfNodataValueParamValue = dfNodataValue;
		setNodatavalue_ev_real64_NoVirtual(this.nativeObject.pointer, dfNodataValueParamValue);
	}

	protected  double getNodatavalue_void_callback()
	{
		double returnValue = getNodatavalue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getNodatavalue_void(long pNativeObject);
	/**
	 * 获取NodataValue
	 * @param dfNodataValue 影像数据的无效值,-1表示获取失败
	 * @return 影像的无效值
	 */
	public double getNodatavalue()
	{
		double returnValue = getNodatavalue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getNodatavalue_void_NoVirtual(long pNativeObject);
	protected double getNodatavalue_NoVirtual()
	{
		double returnValue = getNodatavalue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public RasterBand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterBand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getBandHistogram_void(long pNativeObject, String method);
	native protected void register_getHistogram_void(long pNativeObject, String method);
	native protected void register_getColorTable_void(long pNativeObject, String method);
	native protected void register_getAttributeTable_void(long pNativeObject, String method);
	native protected void register_getBandStatistics_ev_bool(long pNativeObject, String method);
	native protected void register_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_asDataset_void(long pNativeObject, String method);
	native protected void register_setNodatavalue_ev_real64(long pNativeObject, String method);
	native protected void register_getNodatavalue_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getBandHistogram_void(this.nativeObject.pointer, "getBandHistogram_void_callback");
			this.register_getHistogram_void(this.nativeObject.pointer, "getHistogram_void_callback");
			this.register_getColorTable_void(this.nativeObject.pointer, "getColorTable_void_callback");
			this.register_getAttributeTable_void(this.nativeObject.pointer, "getAttributeTable_void_callback");
			this.register_getBandStatistics_ev_bool(this.nativeObject.pointer, "getBandStatistics_ev_bool_callback");
			this.register_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(this.nativeObject.pointer, "iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback");
			this.register_asDataset_void(this.nativeObject.pointer, "asDataset_void_callback");
			this.register_setNodatavalue_ev_real64(this.nativeObject.pointer, "setNodatavalue_ev_real64_callback");
			this.register_getNodatavalue_void(this.nativeObject.pointer, "getNodatavalue_void_callback");
		}
	}
	
	public static RasterBand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterBand obj = null;
 		if(baseObj instanceof RasterBand)
		{
			obj = (RasterBand)baseObj;
		} else {
			obj = new RasterBand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterBand");
			obj.increaseCast();
		}

		return obj;
	}
}
