package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CDBRasterBand波段对象
 */
public class Dbrasterband extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterBand", new DbrasterbandClassFactory());
	}

	/**
	 * 赋值构造函数
	 */
	public Dbrasterband(int iband) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ibandPtr = new BasePointer(iband);
		list.add("iband", ibandPtr.get());
		Create("CDBRasterBand", list);
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
	native private long getOverview_ev_int32(long pNativeObject, int level);
	public com.earthview.world.spatial2d.raster.Dbrasterband getOverview(int level)
	{
		int levelParamValue = level;
		long returnValue = getOverview_ev_int32(this.nativeObject.pointer, levelParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Dbrasterband __returnValue = new com.earthview.world.spatial2d.raster.Dbrasterband(CreatedWhenConstruct.CWC_NotToCreate, "CDBRasterBand");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Dbrasterband)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDBRasterBand");
		}
		return __returnValue;
	}
	native private int getBandWidth_void(long pNativeObject);
	///ev_void setOverviewLevel(ev_int32 level);
	public int getBandWidth()
	{
		int returnValue = getBandWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBandHeight_void(long pNativeObject);
	public int getBandHeight()
	{
		int returnValue = getBandHeight_void(this.nativeObject.pointer);
		return returnValue;
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
	native private boolean iRasterIO_EVIOFlag_ev_byte_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(long pNativeObject, int bFlag, long pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, int eDataType, int iBufferX, int iBufferY);
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
	public boolean iRasterIO(com.earthview.world.spatial2d.raster.EVIOFlag bFlag, UBytePointer pDstBuffer, int iOffsetX, int iOffsetY, int iWidth, int iHeight, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, int iBufferX, int iBufferY)
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
		boolean returnValue = iRasterIO_EVIOFlag_ev_byte_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(this.nativeObject.pointer, bFlagParamValue, pDstBufferParamValue, iOffsetXParamValue, iOffsetYParamValue, iWidthParamValue, iHeightParamValue, eDataTypeParamValue, iBufferXParamValue, iBufferYParamValue);
		return returnValue;
	}
	native private long asDataset_void(long pNativeObject);
	/**
	 * 栅格数据集,外部不能释放这个指针
	 * @return EarthView::World::Spatial2D::Raster::CDBRasterDataset*dataset
	 */
	public com.earthview.world.spatial2d.raster.Dbrasterdataset asDataset()
	{
		long returnValue = asDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Dbrasterdataset __returnValue = new com.earthview.world.spatial2d.raster.Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate, "CDBRasterDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Dbrasterdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDBRasterDataset");
		}
		return __returnValue;
	}
	native private void setNodataValue_ev_real64(long pNativeObject, double dfNodataValue);
	/**
	 * 设置NodataValue
	 * @param dfNodataValue 影像数据的无效值
	 */
	public void setNodataValue(double dfNodataValue)
	{
		double dfNodataValueParamValue = dfNodataValue;
		setNodataValue_ev_real64(this.nativeObject.pointer, dfNodataValueParamValue);
	}
	native private void setLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置金字塔级别
	 * @param dfNodataValue 影像数据的无效值
	 */
	public void setLevel(int level)
	{
		int levelParamValue = level;
		setLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private double getNodataValue_void(long pNativeObject);
	/**
	 * 获取NodataValue
	 * @param dfNodataValue 影像数据的无效值,-1表示获取失败
	 * @return 影像的无效值
	 */
	public double getNodataValue()
	{
		double returnValue = getNodataValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Dbrasterband(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dbrasterband(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Dbrasterband fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dbrasterband obj = null;
 		if(baseObj instanceof Dbrasterband)
		{
			obj = (Dbrasterband)baseObj;
		} else {
			obj = new Dbrasterband(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBRasterBand");
			obj.increaseCast();
		}

		return obj;
	}
}
