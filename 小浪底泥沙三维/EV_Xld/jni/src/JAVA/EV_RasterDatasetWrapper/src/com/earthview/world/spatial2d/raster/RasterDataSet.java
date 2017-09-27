package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CRasterDataSet栅格数据集对象
 */
public class RasterDataSet extends com.earthview.world.spatial.geodataset.Irasterdataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterDataSet", new RasterDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterDataSetProxy", new RasterDataSetClassFactory());
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

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean hasSubDataset_void(long pNativeObject);
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		boolean returnValue = hasSubDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSubDataset_void_NoVirtual(long pNativeObject);
	protected boolean hasSubDataset_NoVirtual()
	{
		boolean returnValue = hasSubDataset_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setDataSourceRef_IDataSource_callback(long ref_pDataSrc)
	{
		com.earthview.world.spatial.geodataset.Idatasource ref_pDataSrcParamValue = (ref_pDataSrc == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pDataSrcParamValue != null)
		{
		ref_pDataSrcParamValue.setDelegate(true);
		ref_pDataSrcParamValue.setInstancePointer(new InstancePointer(ref_pDataSrc));
		IClassFactory ref_pDataSrcParamValueClassFactory = GlobalClassFactoryMap.get(ref_pDataSrcParamValue.getCppInstanceTypeName());
		if (ref_pDataSrcParamValueClassFactory != null)
		{
			ref_pDataSrcParamValue.setDelegate(true);
			ref_pDataSrcParamValue = (com.earthview.world.spatial.geodataset.Idatasource)ref_pDataSrcParamValueClassFactory.create();
			ref_pDataSrcParamValue.setDelegate(true);
			ref_pDataSrcParamValue.setInstancePointer(new InstancePointer(ref_pDataSrc));
		}
		}
		setDataSourceRef(ref_pDataSrcParamValue);
	}

	native private void setDataSourceRef_IDataSource(long pNativeObject, long ref_pDataSrc);
	/**
	 * 设置数据源指针
	 */
	public void setDataSourceRef(com.earthview.world.spatial.geodataset.Idatasource ref_pDataSrc)
	{
		long ref_pDataSrcParamValue = (ref_pDataSrc == null ? 0L : ref_pDataSrc.nativeObject.pointer);
		setDataSourceRef_IDataSource(this.nativeObject.pointer, ref_pDataSrcParamValue);
	}
	native private void setDataSourceRef_IDataSource_NoVirtual(long pNativeObject, long ref_pDataSrc);
	protected void setDataSourceRef_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ref_pDataSrc)
	{
		long ref_pDataSrcParamValue = (ref_pDataSrc == null ? 0L : ref_pDataSrc.nativeObject.pointer);
		setDataSourceRef_IDataSource_NoVirtual(this.nativeObject.pointer, ref_pDataSrcParamValue);
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

	native private boolean isBeginEditingOperation_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		boolean returnValue = isBeginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBeginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean isBeginEditingOperation_NoVirtual()
	{
		boolean returnValue = isBeginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean beginEditingOperation_void(long pNativeObject);
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		boolean returnValue = beginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean beginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean beginEditingOperation_NoVirtual()
	{
		boolean returnValue = beginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean endEditingOperation_ev_bool(long pNativeObject, boolean isConfirm);
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}
	native private boolean endEditingOperation_ev_bool_NoVirtual(long pNativeObject, boolean isConfirm);
	protected boolean endEditingOperation_NoVirtual(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool_NoVirtual(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}

	native private void getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long dfUpleftX, long dfUpleftY, long dfDownRightX, long dfDownRightY);
	/**
	 * 获取栅格数据集的地理矩形
	 * @param dfUpleftX 左上角X坐标
	 * @param dfUpleftY 左上角Y坐标
	 * @param dfDownRightX 左上角X坐标
	 * @param dfDownRightY 左上角Y坐标
	 */
	public void getRasterRect(DoublePointer dfUpleftX, DoublePointer dfUpleftY, DoublePointer dfDownRightX, DoublePointer dfDownRightY)
	{
		long dfUpleftXParamValue = dfUpleftX.nativeObject.pointer;
		long dfUpleftYParamValue = dfUpleftY.nativeObject.pointer;
		long dfDownRightXParamValue = dfDownRightX.nativeObject.pointer;
		long dfDownRightYParamValue = dfDownRightY.nativeObject.pointer;
		getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, dfUpleftXParamValue, dfUpleftYParamValue, dfDownRightXParamValue, dfDownRightYParamValue);
	}
	native private void getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long dfUpleftX, long dfUpleftY, long dfDownRightX, long dfDownRightY);
	protected void getRasterRect_NoVirtual(DoublePointer dfUpleftX, DoublePointer dfUpleftY, DoublePointer dfDownRightX, DoublePointer dfDownRightY)
	{
		long dfUpleftXParamValue = dfUpleftX.nativeObject.pointer;
		long dfUpleftYParamValue = dfUpleftY.nativeObject.pointer;
		long dfDownRightXParamValue = dfDownRightX.nativeObject.pointer;
		long dfDownRightYParamValue = dfDownRightY.nativeObject.pointer;
		getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, dfUpleftXParamValue, dfUpleftYParamValue, dfDownRightXParamValue, dfDownRightYParamValue);
	}

	protected  long getGeoEnvelope_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getGeoEnvelope();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeoEnvelope_void(long pNativeObject);
	/**
	 * 获取栅格数据集的地理范围（该接口取代getRasterRect接口）
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
	native private long getGeoEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getGeoEnvelope_NoVirtual()
	{
		long returnValue = getGeoEnvelope_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getSensorInfo_void_callback()
	{
		com.earthview.world.spatial2d.raster.SensorInfo returnValue = getSensorInfo();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.SensorInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSensorInfo");
		}
		return __returnValue;
	}
	native private long getSensorInfo_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.SensorInfo getSensorInfo_NoVirtual()
	{
		long returnValue = getSensorInfo_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.SensorInfo __returnValue = new com.earthview.world.spatial2d.raster.SensorInfo(CreatedWhenConstruct.CWC_NotToCreate, "CSensorInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.SensorInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSensorInfo");
		}
		return __returnValue;
	}

	protected  long getRasterBand_ev_int32_callback(int iband)
	{
		int ibandParamValue = iband;
		com.earthview.world.spatial2d.raster.RasterBand returnValue = getRasterBand(ibandParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRasterBand_ev_int32(long pNativeObject, int iband);
	/**
	 * 获取某一波段
	 * @param iband 波段索引，从1开始
	 * @return 波段对象指针
	 */
	public com.earthview.world.spatial2d.raster.RasterBand getRasterBand(int iband)
	{
		int ibandParamValue = iband;
		long returnValue = getRasterBand_ev_int32(this.nativeObject.pointer, ibandParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterBand __returnValue = new com.earthview.world.spatial2d.raster.RasterBand(CreatedWhenConstruct.CWC_NotToCreate, "CRasterBand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterBand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterBand");
		}
		return __returnValue;
	}
	native private long getRasterBand_ev_int32_NoVirtual(long pNativeObject, int iband);
	protected com.earthview.world.spatial2d.raster.RasterBand getRasterBand_NoVirtual(int iband)
	{
		int ibandParamValue = iband;
		long returnValue = getRasterBand_ev_int32_NoVirtual(this.nativeObject.pointer, ibandParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.RasterBand __returnValue = new com.earthview.world.spatial2d.raster.RasterBand(CreatedWhenConstruct.CWC_NotToCreate, "CRasterBand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.RasterBand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRasterBand");
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

	native private static int getDataTypeSize_EVRasterDataType(int dataType);
	/**
	 * 获取数据类型所占字节数
	 */
	public static int getDataTypeSize(com.earthview.world.spatial.geodataset.EVRasterDataType dataType)
	{
		int dataTypeParamValue = dataType.getValue();
		int returnValue = getDataTypeSize_EVRasterDataType(dataTypeParamValue);
		return returnValue;
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

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setSensorInfo_CSensorInfo_callback(long objSensorInfo)
	{
		com.earthview.world.spatial2d.raster.SensorInfo objSensorInfoParamValue = new com.earthview.world.spatial2d.raster.SensorInfo(CreatedWhenConstruct.CWC_NotToCreate);
		objSensorInfoParamValue.setDelegate(true);
		objSensorInfoParamValue.setInstancePointer(new InstancePointer(objSensorInfo));
		IClassFactory objSensorInfoParamValueClassFactory = GlobalClassFactoryMap.get(objSensorInfoParamValue.getCppInstanceTypeName());
		if (objSensorInfoParamValueClassFactory != null)
		{
			objSensorInfoParamValue.setDelegate(true);
			objSensorInfoParamValue = (com.earthview.world.spatial2d.raster.SensorInfo)objSensorInfoParamValueClassFactory.create();
			objSensorInfoParamValue.setDelegate(true);
			objSensorInfoParamValue.setInstancePointer(new InstancePointer(objSensorInfo));
		}
		setSensorInfo(objSensorInfoParamValue);
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
	native private void setSensorInfo_CSensorInfo_NoVirtual(long pNativeObject, long objSensorInfo);
	protected void setSensorInfo_NoVirtual(com.earthview.world.spatial2d.raster.SensorInfo objSensorInfo)
	{
		long objSensorInfoParamValue = objSensorInfo.nativeObject.pointer;
		setSensorInfo_CSensorInfo_NoVirtual(this.nativeObject.pointer, objSensorInfoParamValue);
	}

	protected  void setGeoTransform_CAffineTransform_callback(long objGeoTransForm)
	{
		com.earthview.world.spatial2d.raster.AffineTransform objGeoTransFormParamValue = new com.earthview.world.spatial2d.raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
		objGeoTransFormParamValue.setDelegate(true);
		objGeoTransFormParamValue.setInstancePointer(new InstancePointer(objGeoTransForm));
		IClassFactory objGeoTransFormParamValueClassFactory = GlobalClassFactoryMap.get(objGeoTransFormParamValue.getCppInstanceTypeName());
		if (objGeoTransFormParamValueClassFactory != null)
		{
			objGeoTransFormParamValue.setDelegate(true);
			objGeoTransFormParamValue = (com.earthview.world.spatial2d.raster.AffineTransform)objGeoTransFormParamValueClassFactory.create();
			objGeoTransFormParamValue.setDelegate(true);
			objGeoTransFormParamValue.setInstancePointer(new InstancePointer(objGeoTransForm));
		}
		setGeoTransform(objGeoTransFormParamValue);
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
	native private void setGeoTransform_CAffineTransform_NoVirtual(long pNativeObject, long objGeoTransForm);
	protected void setGeoTransform_NoVirtual(com.earthview.world.spatial2d.raster.AffineTransform objGeoTransForm)
	{
		long objGeoTransFormParamValue = objGeoTransForm.nativeObject.pointer;
		setGeoTransform_CAffineTransform_NoVirtual(this.nativeObject.pointer, objGeoTransFormParamValue);
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

	protected  void setSpatialReference_ISpatialReference_callback(long pSpatialRef)
	{
		com.earthview.world.spatial.geometry.Ispatialreference pSpatialRefParamValue = (pSpatialRef == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSpatialRefParamValue != null)
		{
		pSpatialRefParamValue.setDelegate(true);
		pSpatialRefParamValue.setInstancePointer(new InstancePointer(pSpatialRef));
		IClassFactory pSpatialRefParamValueClassFactory = GlobalClassFactoryMap.get(pSpatialRefParamValue.getCppInstanceTypeName());
		if (pSpatialRefParamValueClassFactory != null)
		{
			pSpatialRefParamValue.setDelegate(true);
			pSpatialRefParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)pSpatialRefParamValueClassFactory.create();
			pSpatialRefParamValue.setDelegate(true);
			pSpatialRefParamValue.setInstancePointer(new InstancePointer(pSpatialRef));
		}
		}
		setSpatialReference(pSpatialRefParamValue);
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
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long pSpatialRef);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference pSpatialRef)
	{
		long pSpatialRefParamValue = (pSpatialRef == null ? 0L : pSpatialRef.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, pSpatialRefParamValue);
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

	native private boolean rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(long pNativeObject, int bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, long pIbandIndex, long pDstBuffer, int iBufferWidth, int iBufferHeight, int eDataType);
	/**
	 * 读取栅格数据集图像数据
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

	protected  int reference_void_callback()
	{
		int returnValue = reference();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int reference_void(long pNativeObject);
	/**
	 * 关联引用，引用计数加一
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
	 * @return 引用计数的次数
	 */
	public int reference()
	{
		int returnValue = reference_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int reference_void_NoVirtual(long pNativeObject);
	protected int reference_NoVirtual()
	{
		int returnValue = reference_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int deReference_void_callback()
	{
		int returnValue = deReference();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int deReference_void(long pNativeObject);
	/**
	 * 取消关联引用，引用计数减一
	 * @return 引用计数的次数
	 */
	public int deReference()
	{
		int returnValue = deReference_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int deReference_void_NoVirtual(long pNativeObject);
	protected int deReference_NoVirtual()
	{
		int returnValue = deReference_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void toStream_ev_uchar_ev_uint64_callback(long pBuffer, long longLenth)
	{
		NativeObjectPointer<UBytePointer> pBufferParamValue = new NativeObjectPointer<UBytePointer>(new InstancePointer(pBuffer));
		ULongPointer longLenthParamValue = new ULongPointer(new InstancePointer(longLenth));
		toStream(pBufferParamValue, longLenthParamValue);
	}

	native private void toStream_ev_uchar_ev_uint64(long pNativeObject, long pBuffer, long longLenth);
	/**
	 * 数据集导出成流
	 * @param pBuffer 二进制流，图像数据（包括图像头，像素等信息）调用处传入pBuffer=NULL，不是NULL将重新分配内存，由外部free（）
	 * @param longLenth 二进制流的长度
	 */
	public void toStream(NativeObjectPointer<UBytePointer> pBuffer, ULongPointer longLenth)
	{
		long pBufferParamValue = pBuffer.nativeObject.pointer;
		long longLenthParamValue = longLenth.nativeObject.pointer;
		toStream_ev_uchar_ev_uint64(this.nativeObject.pointer, pBufferParamValue, longLenthParamValue);
	}
	native private void toStream_ev_uchar_ev_uint64_NoVirtual(long pNativeObject, long pBuffer, long longLenth);
	protected void toStream_NoVirtual(NativeObjectPointer<UBytePointer> pBuffer, ULongPointer longLenth)
	{
		long pBufferParamValue = pBuffer.nativeObject.pointer;
		long longLenthParamValue = longLenth.nativeObject.pointer;
		toStream_ev_uchar_ev_uint64_NoVirtual(this.nativeObject.pointer, pBufferParamValue, longLenthParamValue);
	}

	protected  int getOverViewLevels_void_callback()
	{
		int returnValue = getOverViewLevels();
		int __returnValue = returnValue;
		return __returnValue;
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
	native private int getOverViewLevels_void_NoVirtual(long pNativeObject);
	protected int getOverViewLevels_NoVirtual()
	{
		int returnValue = getOverViewLevels_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean buildDefaultOverViews_CProgressInfo(long pNativeObject, long pDataProgress);
	/**
	 * 创建默认级别的金字塔，默认最高级别大小为256*256图像小于256不创建金字塔
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

	protected  String getDatasetFullpath_void_callback()
	{
		String returnValue = getDatasetFullpath();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDatasetFullpath_void(long pNativeObject);
	/**
	 * 获取图像目标路径
	 */
	public String getDatasetFullpath()
	{
		String returnValue = getDatasetFullpath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDatasetFullpath_void_NoVirtual(long pNativeObject);
	protected String getDatasetFullpath_NoVirtual()
	{
		String returnValue = getDatasetFullpath_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public RasterDataSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterDataSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setDataSourceRef_IDataSource(long pNativeObject, String method);
	native protected void register_getGeoEnvelope_void(long pNativeObject, String method);
	native protected void register_getSensorInfo_void(long pNativeObject, String method);
	native protected void register_getRasterBand_ev_int32(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSensorInfo_CSensorInfo(long pNativeObject, String method);
	native protected void register_setGeoTransform_CAffineTransform(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_reference_void(long pNativeObject, String method);
	native protected void register_deReference_void(long pNativeObject, String method);
	native protected void register_toStream_ev_uchar_ev_uint64(long pNativeObject, String method);
	native protected void register_getOverViewLevels_void(long pNativeObject, String method);
	native protected void register_getDatasetFullpath_void(long pNativeObject, String method);
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
			this.register_setDataSourceRef_IDataSource(this.nativeObject.pointer, "setDataSourceRef_IDataSource_callback");
			this.register_getGeoEnvelope_void(this.nativeObject.pointer, "getGeoEnvelope_void_callback");
			this.register_getSensorInfo_void(this.nativeObject.pointer, "getSensorInfo_void_callback");
			this.register_getRasterBand_ev_int32(this.nativeObject.pointer, "getRasterBand_ev_int32_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSensorInfo_CSensorInfo(this.nativeObject.pointer, "setSensorInfo_CSensorInfo_callback");
			this.register_setGeoTransform_CAffineTransform(this.nativeObject.pointer, "setGeoTransform_CAffineTransform_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_reference_void(this.nativeObject.pointer, "reference_void_callback");
			this.register_deReference_void(this.nativeObject.pointer, "deReference_void_callback");
			this.register_toStream_ev_uchar_ev_uint64(this.nativeObject.pointer, "toStream_ev_uchar_ev_uint64_callback");
			this.register_getOverViewLevels_void(this.nativeObject.pointer, "getOverViewLevels_void_callback");
			this.register_getDatasetFullpath_void(this.nativeObject.pointer, "getDatasetFullpath_void_callback");
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
	
	public static RasterDataSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterDataSet obj = null;
 		if(baseObj instanceof RasterDataSet)
		{
			obj = (RasterDataSet)baseObj;
		} else {
			obj = new RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterDataSet");
			obj.increaseCast();
		}

		return obj;
	}
}
