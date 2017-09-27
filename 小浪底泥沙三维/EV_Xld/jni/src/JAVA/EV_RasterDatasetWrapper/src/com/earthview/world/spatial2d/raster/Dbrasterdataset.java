package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CDBRasterDataset数据库栅格数据集类
 */
public class Dbrasterdataset extends com.earthview.world.spatial.geodataset.Irasterdataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterDataset", new DbrasterdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterDatasetProxy", new DbrasterdatasetClassFactory());
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private long getGeoEnvelope_void(long pNativeObject);
	/**
	 * 获取栅格数据集的地理范围
	 * @return 地理范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getGeoEnvelope()
	{
		long returnValue = getGeoEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private int getRasterWidth_void(long pNativeObject);
	/**
	 * 获取栅格之宽度
	 */
	public int getRasterWidth()
	{
		int returnValue = getRasterWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getRasterWidth_void_NoVirtual(long pNativeObject);
	protected int getRasterWidth_NoVirtual()
	{
		int returnValue = getRasterWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getRasterHeight_void(long pNativeObject);
	/**
	 * 获取栅格之高度
	 */
	public int getRasterHeight()
	{
		int returnValue = getRasterHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getRasterHeight_void_NoVirtual(long pNativeObject);
	protected int getRasterHeight_NoVirtual()
	{
		int returnValue = getRasterHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getBandCount_void(long pNativeObject);
	/**
	 * 获取波段数
	 */
	public int getBandCount()
	{
		int returnValue = getBandCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBandCount_void_NoVirtual(long pNativeObject);
	protected int getBandCount_NoVirtual()
	{
		int returnValue = getBandCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getBlockCount_void(long pNativeObject);
	/**
	 * 获取分块数
	 */
	public int getBlockCount()
	{
		int returnValue = getBlockCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBlockSize_void(long pNativeObject);
	/**
	 * 获取分块大小
	 */
	public int getBlockSize()
	{
		int returnValue = getBlockSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSensorInfo_void(long pNativeObject);
	/**
	 * 获取传感器信息
	 */
	public com.earthview.world.spatial2d.raster.SensorInfo getSensorInfo()
	{
		long returnValue = getSensorInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.SensorInfo __returnValue = new com.earthview.world.spatial2d.raster.SensorInfo(CreatedWhenConstruct.CWC_NotToCreate, "CSensorInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.SensorInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSensorInfo");
		}
		return __returnValue;
	}
	native private long getRasterBand_ev_int32(long pNativeObject, int iband);
	/**
	 * 获取某一波段
	 * @param iband 波段索引，从1开始
	 * @return 波段对象指针，外部需释放
	 */
	public com.earthview.world.spatial2d.raster.Dbrasterband getRasterBand(int iband)
	{
		int ibandParamValue = iband;
		long returnValue = getRasterBand_ev_int32(this.nativeObject.pointer, ibandParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Dbrasterband __returnValue = new com.earthview.world.spatial2d.raster.Dbrasterband(CreatedWhenConstruct.CWC_NotToCreate, "CDBRasterBand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Dbrasterband)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDBRasterBand");
		}
		return __returnValue;
	}
	native private int getRasterDataType_void(long pNativeObject);
	/**
	 * 获取数据类型
	 */
	public com.earthview.world.spatial.geodataset.EVRasterDataType getRasterDataType()
	{
		int returnValue = getRasterDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVRasterDataType.toEnum(returnValue);
	}
	native private int getRasterDataType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVRasterDataType getRasterDataType_NoVirtual()
	{
		int returnValue = getRasterDataType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVRasterDataType.toEnum(returnValue);
	}

	native private void getSpatialReferenceWkt_EVString(long pNativeObject, long strWKT);
	/**
	 * 获取数据集的空间参考
	 * @param strWKT 空间参考的字符串表示
	 */
	public void getSpatialReferenceWkt(StringPointer strWKT)
	{
		long strWKTParamValue = strWKT.nativeObject.pointer;
		getSpatialReferenceWkt_EVString(this.nativeObject.pointer, strWKTParamValue);
	}
	native private void getSpatialReferenceWkt_EVString_NoVirtual(long pNativeObject, long strWKT);
	protected void getSpatialReferenceWkt_NoVirtual(StringPointer strWKT)
	{
		long strWKTParamValue = strWKT.nativeObject.pointer;
		getSpatialReferenceWkt_EVString_NoVirtual(this.nativeObject.pointer, strWKTParamValue);
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取数据集的空间参考（该接口取代getSpatialReferenceWkt接口）
	 * @return 空间参考对象（内部释放）
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getGeoTransform_void(long pNativeObject);
	/**
	 * 获取仿射变换参数
	 */
	public com.earthview.world.spatial2d.raster.AffineTransform getGeoTransform()
	{
		long returnValue = getGeoTransform_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.AffineTransform __returnValue = new com.earthview.world.spatial2d.raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate, "CAffineTransform");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.AffineTransform)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAffineTransform");
		}
		return __returnValue;
	}
	native private long getGeoTransform_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.AffineTransform getGeoTransform_NoVirtual()
	{
		long returnValue = getGeoTransform_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.AffineTransform __returnValue = new com.earthview.world.spatial2d.raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate, "CAffineTransform");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.AffineTransform)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAffineTransform");
		}
		return __returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_bool_NoVirtual(long pNativeObject, boolean withUndo);
	protected boolean startEditing_NoVirtual(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool_NoVirtual(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}

	native private boolean stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}
	native private boolean stopEditing_ev_bool_NoVirtual(long pNativeObject, boolean isSave);
	protected boolean stopEditing_NoVirtual(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool_NoVirtual(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}

	native private void setSensorInfo_CSensorInfo(long pNativeObject, long objSensorInfo);
	/**
	 * 设置传感器信息类
	 * @param objSensorInfo 传感器信息类
	 */
	public void setSensorInfo(com.earthview.world.spatial2d.raster.SensorInfo objSensorInfo)
	{
		long objSensorInfoParamValue = objSensorInfo.nativeObject.pointer;
		setSensorInfo_CSensorInfo(this.nativeObject.pointer, objSensorInfoParamValue);
	}
	native private void setGeoTransform_CAffineTransform(long pNativeObject, long objGeoTransForm);
	/**
	 * 设置仿射变换参数
	 * @param objGeoTransForm 仿射变换指针
	 */
	public void setGeoTransform(com.earthview.world.spatial2d.raster.AffineTransform objGeoTransForm)
	{
		long objGeoTransFormParamValue = objGeoTransForm.nativeObject.pointer;
		setGeoTransform_CAffineTransform(this.nativeObject.pointer, objGeoTransFormParamValue);
	}
	native private void setSpatialReference_EVString(long pNativeObject, String strWKT);
	/**
	 * 设置栅格数据集的空间参考
	 * @param strWKT 空间参考的WKT字符串描述
	 */
	public void setSpatialReference(String strWKT)
	{
		String strWKTParamValue = strWKT;
		setSpatialReference_EVString(this.nativeObject.pointer, strWKTParamValue);
	}
	native private void setSpatialReference_EVString_NoVirtual(long pNativeObject, String strWKT);
	protected void setSpatialReference_NoVirtual(String strWKT)
	{
		String strWKTParamValue = strWKT;
		setSpatialReference_EVString_NoVirtual(this.nativeObject.pointer, strWKTParamValue);
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long pSpatialRef);
	/**
	 * 设置栅格数据集的空间参考
	 * @param pSpatialRef 空间参考对象（外部释放）
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference pSpatialRef)
	{
		long pSpatialRefParamValue = (pSpatialRef == null ? 0L : pSpatialRef.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, pSpatialRefParamValue);
	}
	native private boolean buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(long pNativeObject, int ibandCount, long piBandIndex, int nLevelCount, long piLevelIndex, long pDataProgress);
	/**
	 * 创建金字塔影像,img格式影像要求打开时候为Update，否则创建金子塔会失败
	 * @param ibandCount 波段数
	 * @param piBandIndex 波段索引
	 * @param nLevelCount 金字塔级别数
	 * @param piLevelIndex 金字塔级别索引
	 * @param pfnProgress 函数指针
	 * @param pDataProgress 进度相关数据
	 * @return 1,成功0，失败
	 */
	public boolean buildOverViews(int ibandCount, IntegerPointer piBandIndex, int nLevelCount, IntegerPointer piLevelIndex, com.earthview.world.spatial2d.raster.ProgressInfo pDataProgress)
	{
		int ibandCountParamValue = ibandCount;
		long piBandIndexParamValue = (piBandIndex == null ? 0L : piBandIndex.nativeObject.pointer);
		int nLevelCountParamValue = nLevelCount;
		long piLevelIndexParamValue = (piLevelIndex == null ? 0L : piLevelIndex.nativeObject.pointer);
		long pDataProgressParamValue = (pDataProgress == null ? 0L : pDataProgress.nativeObject.pointer);
		boolean returnValue = buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(this.nativeObject.pointer, ibandCountParamValue, piBandIndexParamValue, nLevelCountParamValue, piLevelIndexParamValue, pDataProgressParamValue);
		return returnValue;
	}
	native private boolean buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(long pNativeObject, int ibandCount, long piBandIndex, int nLevelCount, long piLevelIndex, long pDataProgress);
	protected boolean buildOverViews_NoVirtual(int ibandCount, IntegerPointer piBandIndex, int nLevelCount, IntegerPointer piLevelIndex, com.earthview.world.spatial2d.raster.ProgressInfo pDataProgress)
	{
		int ibandCountParamValue = ibandCount;
		long piBandIndexParamValue = (piBandIndex == null ? 0L : piBandIndex.nativeObject.pointer);
		int nLevelCountParamValue = nLevelCount;
		long piLevelIndexParamValue = (piLevelIndex == null ? 0L : piLevelIndex.nativeObject.pointer);
		long pDataProgressParamValue = (pDataProgress == null ? 0L : pDataProgress.nativeObject.pointer);
		boolean returnValue = buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(this.nativeObject.pointer, ibandCountParamValue, piBandIndexParamValue, nLevelCountParamValue, piLevelIndexParamValue, pDataProgressParamValue);
		return returnValue;
	}

	native private int getOverViewLevels_void(long pNativeObject);
	///<summary>
	///获取金子塔的级别数
	///</summary>
	///<returns>金字塔级别数，0表示未有金字塔</summary>
	public int getOverViewLevels()
	{
		int returnValue = getOverViewLevels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean buildDefaultOverViews_CProgressInfo(long pNativeObject, long pDataProgress);
	/**
	 * 创建默认级别的金字塔
	 * @param pfnProgress 进度条解析函数
	 * @param pDataProgress 进度条传出类
	 * @return 1,表示成功，0标识失败
	 */
	public boolean buildDefaultOverViews(com.earthview.world.spatial2d.raster.ProgressInfo pDataProgress)
	{
		long pDataProgressParamValue = (pDataProgress == null ? 0L : pDataProgress.nativeObject.pointer);
		boolean returnValue = buildDefaultOverViews_CProgressInfo(this.nativeObject.pointer, pDataProgressParamValue);
		return returnValue;
	}
	native private boolean buildDefaultOverViews_CProgressInfo_NoVirtual(long pNativeObject, long pDataProgress);
	protected boolean buildDefaultOverViews_NoVirtual(com.earthview.world.spatial2d.raster.ProgressInfo pDataProgress)
	{
		long pDataProgressParamValue = (pDataProgress == null ? 0L : pDataProgress.nativeObject.pointer);
		boolean returnValue = buildDefaultOverViews_CProgressInfo_NoVirtual(this.nativeObject.pointer, pDataProgressParamValue);
		return returnValue;
	}

	native private boolean read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long pDstRaster, long upRow, long leftCol, long downRow, long rightCol);
	/**
	 * 读取栅格数据如果栅格对象设置了地理参数，则根据地理范围读取数据（行列号可设置为0），否则，根据行列号范围读取
	 * @param pDstRaster 目标栅格块对象
	 * @param upRow 左上角像素行号（从0开始）
	 * @param leftCol 左上角像素列号（从0开始）
	 * @param downRow 右下角行号
	 * @param rightCol 右下角列号
	 */
	public boolean read(com.earthview.world.spatial2d.raster.Irasterblock pDstRaster, long upRow, long leftCol, long downRow, long rightCol)
	{
		long pDstRasterParamValue = (pDstRaster == null ? 0L : pDstRaster.nativeObject.pointer);
		long upRowParamValue = upRow;
		long leftColParamValue = leftCol;
		long downRowParamValue = downRow;
		long rightColParamValue = rightCol;
		boolean returnValue = read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, pDstRasterParamValue, upRowParamValue, leftColParamValue, downRowParamValue, rightColParamValue);
		return returnValue;
	}
	native private boolean read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pDstRaster, long upRow, long leftCol, long downRow, long rightCol);
	protected boolean read_NoVirtual(com.earthview.world.spatial2d.raster.Irasterblock pDstRaster, long upRow, long leftCol, long downRow, long rightCol)
	{
		long pDstRasterParamValue = (pDstRaster == null ? 0L : pDstRaster.nativeObject.pointer);
		long upRowParamValue = upRow;
		long leftColParamValue = leftCol;
		long downRowParamValue = downRow;
		long rightColParamValue = rightCol;
		boolean returnValue = read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pDstRasterParamValue, upRowParamValue, leftColParamValue, downRowParamValue, rightColParamValue);
		return returnValue;
	}

	native private void read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(long pNativeObject, String strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, long pBuffer);
	/**
	 * 从栅格数据集中读取一块指定坐标系、大小、分辨率、左上角坐标以及波段的数据
	 * @param spatialRef 目标坐标系的WKT格式字符串
	 * @param lefttopX 目标数据的左上角X坐标
	 * @param lefttopY 目标数据的左上角Y坐标
	 * @param resolutionX X方向分辨率
	 * @param resolutionY Y方向分辨率
	 * @param xSize X方向大小（宽度）
	 * @param ySize Y方向大小（高度）
	 * @param pBuffer 存放读取数据的缓冲区(缓冲区大小为xSize×ySize×像素大小×波段数
	 */
	public void read(String strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, UBytePointer pBuffer)
	{
		String strWKTParamValue = strWKT;
		double lefttopXParamValue = lefttopX;
		double lefttopYParamValue = lefttopY;
		double resolutionXParamValue = resolutionX;
		double resolutionYParamValue = resolutionY;
		int xSizeParamValue = xSize;
		int ySizeParamValue = ySize;
		long pBufferParamValue = (pBuffer == null ? 0L : pBuffer.nativeObject.pointer);
		read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(this.nativeObject.pointer, strWKTParamValue, lefttopXParamValue, lefttopYParamValue, resolutionXParamValue, resolutionYParamValue, xSizeParamValue, ySizeParamValue, pBufferParamValue);
	}
	native private void read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(long pNativeObject, String strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, long pBuffer);
	protected void read_NoVirtual(String strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, UBytePointer pBuffer)
	{
		String strWKTParamValue = strWKT;
		double lefttopXParamValue = lefttopX;
		double lefttopYParamValue = lefttopY;
		double resolutionXParamValue = resolutionX;
		double resolutionYParamValue = resolutionY;
		int xSizeParamValue = xSize;
		int ySizeParamValue = ySize;
		long pBufferParamValue = (pBuffer == null ? 0L : pBuffer.nativeObject.pointer);
		read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(this.nativeObject.pointer, strWKTParamValue, lefttopXParamValue, lefttopYParamValue, resolutionXParamValue, resolutionYParamValue, xSizeParamValue, ySizeParamValue, pBufferParamValue);
	}

	native private boolean write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long pSrcRaster, long upRow, long leftCol, long downRow, long rightCol);
	/**
	 * 将栅格块对象中的数据写入栅格数据集
	 * @param pSrcRaster 待写入的栅格块对象
	 * @param upRow 左上角像素行号（从0开始）
	 * @param leftCol 左上角像素列号（从0开始）
	 * @param downRow 右下角行号
	 * @param rightCol 右下角列号
	 */
	public boolean write(com.earthview.world.spatial2d.raster.Irasterblock pSrcRaster, long upRow, long leftCol, long downRow, long rightCol)
	{
		long pSrcRasterParamValue = (pSrcRaster == null ? 0L : pSrcRaster.nativeObject.pointer);
		long upRowParamValue = upRow;
		long leftColParamValue = leftCol;
		long downRowParamValue = downRow;
		long rightColParamValue = rightCol;
		boolean returnValue = write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, pSrcRasterParamValue, upRowParamValue, leftColParamValue, downRowParamValue, rightColParamValue);
		return returnValue;
	}
	native private boolean write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pSrcRaster, long upRow, long leftCol, long downRow, long rightCol);
	protected boolean write_NoVirtual(com.earthview.world.spatial2d.raster.Irasterblock pSrcRaster, long upRow, long leftCol, long downRow, long rightCol)
	{
		long pSrcRasterParamValue = (pSrcRaster == null ? 0L : pSrcRaster.nativeObject.pointer);
		long upRowParamValue = upRow;
		long leftColParamValue = leftCol;
		long downRowParamValue = downRow;
		long rightColParamValue = rightCol;
		boolean returnValue = write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pSrcRasterParamValue, upRowParamValue, leftColParamValue, downRowParamValue, rightColParamValue);
		return returnValue;
	}

	native private boolean rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(long pNativeObject, int bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, long pIbandIndex, long pDstBuffer, int iBufferWidth, int iBufferHeight, int eDataType);
	/**
	 * 读写栅格数据集图像数据
	 * @param bflag 0,表示读；1，表示写
	 * @param iOffsetX X方向起点坐标
	 * @param iOffsetY Y方向起点坐标
	 * @param iImageWidth 读取图像块的宽度
	 * @param iImageHeight 读取图像块的高度
	 * @param iBandCount 波段数
	 * @param pIbandIndex 波段索引指针
	 * @param pDstBuffer 目标缓存，用来存储读取的图像数据
	 * @param iBufferWidth 缓存宽度
	 * @param iBufferHeight 缓存高度
	 * @param eDataType 缓存数据类型
	 * @return 0，表示失败；1，表示成功
	 */
	public boolean rasterIO(com.earthview.world.spatial2d.raster.EVIOFlag bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntegerPointer pIbandIndex, VoidPointer pDstBuffer, int iBufferWidth, int iBufferHeight, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType)
	{
		int bflagParamValue = bflag.getValue();
		int iOffsetXParamValue = iOffsetX;
		int iOffsetYParamValue = iOffsetY;
		int iImageWidthParamValue = iImageWidth;
		int iImageHeightParamValue = iImageHeight;
		int iBandCountParamValue = iBandCount;
		long pIbandIndexParamValue = (pIbandIndex == null ? 0L : pIbandIndex.nativeObject.pointer);
		long pDstBufferParamValue = (pDstBuffer == null ? 0L : pDstBuffer.nativeObject.pointer);
		int iBufferWidthParamValue = iBufferWidth;
		int iBufferHeightParamValue = iBufferHeight;
		int eDataTypeParamValue = eDataType.getValue();
		boolean returnValue = rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(this.nativeObject.pointer, bflagParamValue, iOffsetXParamValue, iOffsetYParamValue, iImageWidthParamValue, iImageHeightParamValue, iBandCountParamValue, pIbandIndexParamValue, pDstBufferParamValue, iBufferWidthParamValue, iBufferHeightParamValue, eDataTypeParamValue);
		return returnValue;
	}
	native private boolean rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(long pNativeObject, int bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, long pIbandIndex, long pDstBuffer, int iBufferWidth, int iBufferHeight, int eDataType);
	protected boolean rasterIO_NoVirtual(com.earthview.world.spatial2d.raster.EVIOFlag bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntegerPointer pIbandIndex, VoidPointer pDstBuffer, int iBufferWidth, int iBufferHeight, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType)
	{
		int bflagParamValue = bflag.getValue();
		int iOffsetXParamValue = iOffsetX;
		int iOffsetYParamValue = iOffsetY;
		int iImageWidthParamValue = iImageWidth;
		int iImageHeightParamValue = iImageHeight;
		int iBandCountParamValue = iBandCount;
		long pIbandIndexParamValue = (pIbandIndex == null ? 0L : pIbandIndex.nativeObject.pointer);
		long pDstBufferParamValue = (pDstBuffer == null ? 0L : pDstBuffer.nativeObject.pointer);
		int iBufferWidthParamValue = iBufferWidth;
		int iBufferHeightParamValue = iBufferHeight;
		int eDataTypeParamValue = eDataType.getValue();
		boolean returnValue = rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(this.nativeObject.pointer, bflagParamValue, iOffsetXParamValue, iOffsetYParamValue, iImageWidthParamValue, iImageHeightParamValue, iBandCountParamValue, pIbandIndexParamValue, pDstBufferParamValue, iBufferWidthParamValue, iBufferHeightParamValue, eDataTypeParamValue);
		return returnValue;
	}

	native private boolean fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流读取栅格数据集
	 * @param stream 流
	 * @return 若成功返回true；否则返回false
	 */
	public boolean fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	protected  boolean readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_callback(long pDstRasterBlock, int level, long row, long col)
	{
		com.earthview.world.spatial2d.raster.Irasterblock pDstRasterBlockParamValue = (pDstRasterBlock == 0L ? null : new com.earthview.world.spatial2d.raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDstRasterBlockParamValue != null)
		{
		pDstRasterBlockParamValue.setDelegate(true);
		pDstRasterBlockParamValue.setInstancePointer(new InstancePointer(pDstRasterBlock));
		IClassFactory pDstRasterBlockParamValueClassFactory = GlobalClassFactoryMap.get(pDstRasterBlockParamValue.getCppInstanceTypeName());
		if (pDstRasterBlockParamValueClassFactory != null)
		{
			pDstRasterBlockParamValue.setDelegate(true);
			pDstRasterBlockParamValue = (com.earthview.world.spatial2d.raster.Irasterblock)pDstRasterBlockParamValueClassFactory.create();
			pDstRasterBlockParamValue.setDelegate(true);
			pDstRasterBlockParamValue.setInstancePointer(new InstancePointer(pDstRasterBlock));
		}
		}
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock(pDstRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(long pNativeObject, long pDstRasterBlock, int level, long row, long col);
	/**
	 * 读取栅格数据
	 * @param pSrcRaster 目标栅格块对象
	 * @param level 所读取的金字塔级别
	 * @param Row 行号（从0开始）
	 * @param Col 列号（从0开始）
	 */
	public boolean readBlock(com.earthview.world.spatial2d.raster.Irasterblock pDstRasterBlock, int level, long row, long col)
	{
		long pDstRasterBlockParamValue = (pDstRasterBlock == null ? 0L : pDstRasterBlock.nativeObject.pointer);
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, pDstRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private boolean readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pDstRasterBlock, int level, long row, long col);
	protected boolean readBlock_NoVirtual(com.earthview.world.spatial2d.raster.Irasterblock pDstRasterBlock, int level, long row, long col)
	{
		long pDstRasterBlockParamValue = (pDstRasterBlock == null ? 0L : pDstRasterBlock.nativeObject.pointer);
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pDstRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}

	protected  boolean readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_callback(long data, int bandID, int level, long row, long col)
	{
		com.earthview.world.core.DataStream dataParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.core.DataStream)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
		}
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock(dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(long pNativeObject, long data, int bandID, int level, long row, long col);
	/**
	 * 读取栅格数据
	 * @param pSrcRaster 目标栅格块对象
	 * @param bandID 所读取的波段ID
	 * @param level 所读取的金字塔级别
	 * @param Row 行号（从0开始）
	 * @param Col 列号（从0开始）
	 */
	public boolean readBlock(com.earthview.world.core.DataStream data, int bandID, int level, long row, long col)
	{
		long dataParamValue = data.nativeObject.pointer;
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private boolean readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long data, int bandID, int level, long row, long col);
	protected boolean readBlock_NoVirtual(com.earthview.world.core.DataStream data, int bandID, int level, long row, long col)
	{
		long dataParamValue = data.nativeObject.pointer;
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}

	protected  boolean writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_callback(long pSrcRasterBlock, int level, long row, long col)
	{
		com.earthview.world.spatial2d.raster.Irasterblock pSrcRasterBlockParamValue = (pSrcRasterBlock == 0L ? null : new com.earthview.world.spatial2d.raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSrcRasterBlockParamValue != null)
		{
		pSrcRasterBlockParamValue.setDelegate(true);
		pSrcRasterBlockParamValue.setInstancePointer(new InstancePointer(pSrcRasterBlock));
		IClassFactory pSrcRasterBlockParamValueClassFactory = GlobalClassFactoryMap.get(pSrcRasterBlockParamValue.getCppInstanceTypeName());
		if (pSrcRasterBlockParamValueClassFactory != null)
		{
			pSrcRasterBlockParamValue.setDelegate(true);
			pSrcRasterBlockParamValue = (com.earthview.world.spatial2d.raster.Irasterblock)pSrcRasterBlockParamValueClassFactory.create();
			pSrcRasterBlockParamValue.setDelegate(true);
			pSrcRasterBlockParamValue.setInstancePointer(new InstancePointer(pSrcRasterBlock));
		}
		}
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock(pSrcRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(long pNativeObject, long pSrcRasterBlock, int level, long row, long col);
	/**
	 * 将栅格块对象中的数据写入栅格数据集
	 * @param pSrcRaster 待写入的栅格块对象
	 * @param level 所写入的金字塔级别
	 * @param Row 行号（从0开始）
	 * @param Col 列号（从0开始）
	 */
	public boolean writeBlock(com.earthview.world.spatial2d.raster.Irasterblock pSrcRasterBlock, int level, long row, long col)
	{
		long pSrcRasterBlockParamValue = (pSrcRasterBlock == null ? 0L : pSrcRasterBlock.nativeObject.pointer);
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, pSrcRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private boolean writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pSrcRasterBlock, int level, long row, long col);
	protected boolean writeBlock_NoVirtual(com.earthview.world.spatial2d.raster.Irasterblock pSrcRasterBlock, int level, long row, long col)
	{
		long pSrcRasterBlockParamValue = (pSrcRasterBlock == null ? 0L : pSrcRasterBlock.nativeObject.pointer);
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pSrcRasterBlockParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}

	protected  boolean writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_callback(long data, int bandID, int level, long row, long col)
	{
		com.earthview.world.core.DataStream dataParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.core.DataStream)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
		}
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock(dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(long pNativeObject, long data, int bandID, int level, long row, long col);
	/**
	 * 将栅格块对象中的数据写入栅格数据集
	 * @param pRasterBuffer 待写入的光栅数据
	 * @param bandID 所写入的波段ID
	 * @param level 所写入的金字塔级别
	 * @param Row 行号（从0开始）
	 * @param Col 列号（从0开始）
	 */
	public boolean writeBlock(com.earthview.world.core.DataStream data, int bandID, int level, long row, long col)
	{
		long dataParamValue = data.nativeObject.pointer;
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private boolean writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long data, int bandID, int level, long row, long col);
	protected boolean writeBlock_NoVirtual(com.earthview.world.core.DataStream data, int bandID, int level, long row, long col)
	{
		long dataParamValue = data.nativeObject.pointer;
		int bandIDParamValue = bandID;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean returnValue = writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, dataParamValue, bandIDParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}

	public Dbrasterdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dbrasterdataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取栅格数据集的地理矩形
	 * @param dfUpleftX 左上角X坐标
	 * @param dfUpleftY 左上角Y坐标
	 * @param dfDownRightX 左上角X坐标
	 * @param dfDownRightY 左上角Y坐标
	 */
	public void getRasterRect(DoublePointer dfUpleftX, DoublePointer dfUpleftY, DoublePointer dfDownRightX, DoublePointer dfDownRightY)
	{
		super.getRasterRect_NoVirtual(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		return super.hasSubDataset_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		return super.isBeginEditingOperation_NoVirtual();
	}
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		return super.beginEditingOperation_NoVirtual();
	}
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		return super.endEditingOperation_NoVirtual(isConfirm);
	}
	
	native protected void register_readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getRasterWidth_void(long pNativeObject, String method);
	native protected void register_getRasterHeight_void(long pNativeObject, String method);
	native protected void register_getBandCount_void(long pNativeObject, String method);
	native protected void register_getGeoTransform_void(long pNativeObject, String method);
	native protected void register_getRasterDataType_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceWkt_EVString(long pNativeObject, String method);
	native protected void register_setSpatialReference_EVString(long pNativeObject, String method);
	native protected void register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(long pNativeObject, String method);
	native protected void register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(long pNativeObject, String method);
	native protected void register_buildDefaultOverViews_CProgressInfo(long pNativeObject, String method);
	native protected void register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_hasSubDataset_void(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isBeginEditingOperation_void(long pNativeObject, String method);
	native protected void register_beginEditingOperation_void(long pNativeObject, String method);
	native protected void register_endEditingOperation_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, "readBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_callback");
			this.register_readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, "readBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_callback");
			this.register_writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, "writeBlock_IRasterBlock_ev_int32_ev_uint32_ev_uint32_callback");
			this.register_writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(this.nativeObject.pointer, "writeBlock_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_callback");
			this.register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getRasterWidth_void(this.nativeObject.pointer, "getRasterWidth_void_callback");
			this.register_getRasterHeight_void(this.nativeObject.pointer, "getRasterHeight_void_callback");
			this.register_getBandCount_void(this.nativeObject.pointer, "getBandCount_void_callback");
			this.register_getGeoTransform_void(this.nativeObject.pointer, "getGeoTransform_void_callback");
			this.register_getRasterDataType_void(this.nativeObject.pointer, "getRasterDataType_void_callback");
			this.register_getSpatialReferenceWkt_EVString(this.nativeObject.pointer, "getSpatialReferenceWkt_EVString_callback");
			this.register_setSpatialReference_EVString(this.nativeObject.pointer, "setSpatialReference_EVString_callback");
			this.register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(this.nativeObject.pointer, "read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback");
			this.register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(this.nativeObject.pointer, "buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback");
			this.register_buildDefaultOverViews_CProgressInfo(this.nativeObject.pointer, "buildDefaultOverViews_CProgressInfo_callback");
			this.register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(this.nativeObject.pointer, "rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_hasSubDataset_void(this.nativeObject.pointer, "hasSubDataset_void_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_isBeginEditingOperation_void(this.nativeObject.pointer, "isBeginEditingOperation_void_callback");
			this.register_beginEditingOperation_void(this.nativeObject.pointer, "beginEditingOperation_void_callback");
			this.register_endEditingOperation_ev_bool(this.nativeObject.pointer, "endEditingOperation_ev_bool_callback");
		}
	}
	
	public static Dbrasterdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dbrasterdataset obj = null;
 		if(baseObj instanceof Dbrasterdataset)
		{
			obj = (Dbrasterdataset)baseObj;
		} else {
			obj = new Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBRasterDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
