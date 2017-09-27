package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 二维矢量要素集类
 */
public class VectorFeatureClass extends com.earthview.world.spatial.geodataset.Ifeatureclass2 {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass", new VectorFeatureClassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCVectorFeatureClassProxy", new VectorFeatureClassClassFactory());
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

	native private int getFeatureClassType_void(long pNativeObject);
	/**
	 * 获取要素集类型
	 * @param  
	 * @return 返回要素集类型
	 */
	public com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType()
	{
		int returnValue = getFeatureClassType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
	}
	native private int getFeatureClassType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType_NoVirtual()
	{
		int returnValue = getFeatureClassType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取要素集几何体类型
	 * @param  
	 * @return 返回要素集几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * 获取要素集字段信息
	 * @param  
	 * @return 返回要素集字段信息
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFieldsRef()
	{
		long returnValue = getFieldsRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long getFieldsRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getFieldsRef_NoVirtual()
	{
		long returnValue = getFieldsRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取要素集字段数量
	 * @param  
	 * @return 返回要素集字段数量
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 通过索引获取字段
	 * @param index 索引处
	 * @return 返回索引处要素集字段
	 */
	public com.earthview.world.spatial.geodataset.Ifield getFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getFieldRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getFieldRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * 通过名称查找字段
	 * @param fieldName 字段名
	 * @return 返回字段索引
	 */
	public int findField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private int findField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected int findField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	native private long getGeometryField_void(long pNativeObject);
	/**
	 * 获取记录要素集几何体信息的字段
	 * @param  
	 * @return 返回要素集几何体信息字段
	 */
	public com.earthview.world.spatial.geodataset.Ifield getGeometryField()
	{
		long returnValue = getGeometryField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getGeometryField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getGeometryField_NoVirtual()
	{
		long returnValue = getGeometryField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private long getIDField_void(long pNativeObject);
	/**
	 * 获取记录要素集ID信息的字段
	 * @param  
	 * @return 返回要素集ID信息字段
	 */
	public com.earthview.world.spatial.geodataset.Ifield getIDField()
	{
		long returnValue = getIDField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getIDField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getIDField_NoVirtual()
	{
		long returnValue = getIDField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private int getSpatialIndexEnum_void(long pNativeObject);
	/**
	 * 获取要素集空间索引类型
	 * @param  
	 * @return 返回要素集空间索引类型
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum()
	{
		int returnValue = getSpatialIndexEnum_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialIndexEnum.toEnum(returnValue);
	}
	native private int getSpatialIndexEnum_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum_NoVirtual()
	{
		int returnValue = getSpatialIndexEnum_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialIndexEnum.toEnum(returnValue);
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取要素集最小外接矩形
	 * @param  
	 * @return 返回要素集最小外接矩形
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
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
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getSpatialReferenceRef_void(long pNativeObject);
	/**
	 * 获取要素集空间参考信息
	 * @param  
	 * @return 返回要素集空间参考信息
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		long returnValue = getSpatialReferenceRef_void(this.nativeObject.pointer);
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
	native private long getSpatialReferenceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef_NoVirtual()
	{
		long returnValue = getSpatialReferenceRef_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean setSpatialReference_ISpatialReference_callback(long sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		boolean returnValue = setSpatialReference(srParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 获取要素集空间参考信息
	 * @param  
	 * @return 返回要素集空间参考信息
	 */
	public boolean setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		boolean returnValue = setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
		return returnValue;
	}
	native private boolean setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long sr);
	protected boolean setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		boolean returnValue = setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, srParamValue);
		return returnValue;
	}

	native private long getFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过ID号获取要素
	 * @param id ID号
	 * @return 返回要素
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long getFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.spatial.geodataset.Ifeature getFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private long getFeatureCount_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 通过过滤添加获取要素数量
	 * @param filter 过滤器
	 * @return 返回要素数量
	 */
	public long getFeatureCount(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}
	native private long getFeatureCount_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected long getFeatureCount_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}

	native private long createFeatureBuffer_void(long pNativeObject);
	/**
	 * 在内存中创建要素
	 * @param  
	 * @return 返回创建的要素
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer()
	{
		long returnValue = createFeatureBuffer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long createFeatureBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer_NoVirtual()
	{
		long returnValue = createFeatureBuffer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private boolean insert_IFeature(long pNativeObject, long feature);
	/**
	 * 插入要素
	 * @param feature 要素
	 * @return 若成功返回true；否则返回false
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}
	native private boolean insert_IFeature_NoVirtual(long pNativeObject, long feature);
	protected boolean insert_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}

	native private long insertFeatureBuffer_IFeature(long pNativeObject, long buffer);
	/**
	 * 插入内存缓冲区要素
	 * @param buffer 要素
	 * @return 返回结果代码
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private long insertFeatureBuffer_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected long insertFeatureBuffer_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	native private boolean update_IFeature(long pNativeObject, long buffer);
	/**
	 * 更新要素
	 * @param buffer 要素
	 * @return 若成功返回true；否则返回false
	 */
	public boolean update(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private boolean update_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected boolean update_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过ID删除要素
	 * @param id ID号
	 * @return 若成功返回true；否则返回false
	 */
	public boolean deleteFeature(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean deleteFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 查询
	 * @param filter 过滤器
	 * @return 返回迭代器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureiterator query(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}
	native private long query_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureiterator query_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}

	native private long nextFeature_CFeatureIterator(long pNativeObject, long iterator);
	/**
	 * 通过迭代器查询下一条要素
	 * @param iterator 迭代器
	 * @return 返回要素
	 */
	public com.earthview.world.spatial.geodataset.Ifeature nextFeature(com.earthview.world.spatial2d.geodataset.FeatureIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		long returnValue = nextFeature_CFeatureIterator(this.nativeObject.pointer, iteratorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long select_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 通过过滤器选择
	 * @param filter 过滤器
	 * @return 返回选择集
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection select(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}
	native private long select_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureselection select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}

	protected  void endQuery_CFeatureIterator_callback(long iterator)
	{
		com.earthview.world.spatial2d.geodataset.FeatureIterator iteratorParamValue = (iterator == 0L ? null : new com.earthview.world.spatial2d.geodataset.FeatureIterator(CreatedWhenConstruct.CWC_NotToCreate));
		if(iteratorParamValue != null)
		{
		iteratorParamValue.setDelegate(true);
		iteratorParamValue.setInstancePointer(new InstancePointer(iterator));
		IClassFactory iteratorParamValueClassFactory = GlobalClassFactoryMap.get(iteratorParamValue.getCppInstanceTypeName());
		if (iteratorParamValueClassFactory != null)
		{
			iteratorParamValue.setDelegate(true);
			iteratorParamValue = (com.earthview.world.spatial2d.geodataset.FeatureIterator)iteratorParamValueClassFactory.create();
			iteratorParamValue.setDelegate(true);
			iteratorParamValue.setInstancePointer(new InstancePointer(iterator));
		}
		}
		endQuery(iteratorParamValue);
	}

	native private void endQuery_CFeatureIterator(long pNativeObject, long iterator);
	/**
	 * 停止指定迭代器的查询
	 * @param iterator 迭代器
	 */
	public void endQuery(com.earthview.world.spatial2d.geodataset.FeatureIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		endQuery_CFeatureIterator(this.nativeObject.pointer, iteratorParamValue);
	}
	native private void endQuery_CFeatureIterator_NoVirtual(long pNativeObject, long iterator);
	protected void endQuery_NoVirtual(com.earthview.world.spatial2d.geodataset.FeatureIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		endQuery_CFeatureIterator_NoVirtual(this.nativeObject.pointer, iteratorParamValue);
	}

	native private boolean createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, int spaIndex);
	/**
	 * 创建空间索引（此接口无效）
	 * @param spaIndex 空间索引枚举类型
	 * @return 若成功返回true；否则返回false
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		int spaIndexParamValue = spaIndex.getValue();
		boolean returnValue = createSpatialIndex_EVSpatialIndexEnum(this.nativeObject.pointer, spaIndexParamValue);
		return returnValue;
	}
	native private boolean createSpatialIndex_EVSpatialIndexEnum_NoVirtual(long pNativeObject, int spaIndex);
	protected boolean createSpatialIndex_NoVirtual(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		int spaIndexParamValue = spaIndex.getValue();
		boolean returnValue = createSpatialIndex_EVSpatialIndexEnum_NoVirtual(this.nativeObject.pointer, spaIndexParamValue);
		return returnValue;
	}

	native private boolean createSpatialIndex_ISpatialIndexParam(long pNativeObject, long param);
	/**
	 * 创建空间索引
	 * @param param 空间索引参数类
	 * @return 若成功返回true；否则返回false
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.Ispatialindexparam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		boolean returnValue = createSpatialIndex_ISpatialIndexParam(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}
	native private boolean createSpatialIndex_ISpatialIndexParam_NoVirtual(long pNativeObject, long param);
	protected boolean createSpatialIndex_NoVirtual(com.earthview.world.spatial.geodataset.Ispatialindexparam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		boolean returnValue = createSpatialIndex_ISpatialIndexParam_NoVirtual(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}

	native private boolean rebulidSpatialIndex_void(long pNativeObject);
	/**
	 * 重建空间索引
	 * @param  
	 * @return 若成功返回true；否则返回false
	 */
	public boolean rebulidSpatialIndex()
	{
		boolean returnValue = rebulidSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebulidSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean rebulidSpatialIndex_NoVirtual()
	{
		boolean returnValue = rebulidSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean deleteSpatialIndex_void(long pNativeObject);
	/**
	 * 删除空间索引
	 * @param  
	 * @return 若成功返回true；否则返回false
	 */
	public boolean deleteSpatialIndex()
	{
		boolean returnValue = deleteSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deleteSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean deleteSpatialIndex_NoVirtual()
	{
		boolean returnValue = deleteSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getOCTree_void(long pNativeObject);
	/**
	 * 获取八叉树索引
	 * @return 返回八叉树索引
	 */
	public VoidPointer getOCTree()
	{
		long returnValue = getOCTree_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long createTableProxy_void(long pNativeObject);
	/**
	 * 创建一个数据表的代理对象。
	 * @return 返回数据表
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		long returnValue = createTableProxy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}
	native private long createTableProxy_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Itableproxy createTableProxy_NoVirtual()
	{
		long returnValue = createTableProxy_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}

	native private boolean addField_IField(long pNativeObject, long field);
	/**
	 * 添加字段
	 * @param field 指定字段
	 * @return ture，成功；false，失败
	 */
	public boolean addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = addField_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private boolean addField_IField_NoVirtual(long pNativeObject, long field);
	protected boolean addField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = addField_IField_NoVirtual(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}

	native private boolean deleteField_IField(long pNativeObject, long field);
	/**
	 * 删除指定的字段
	 * @param field 指定字段
	 * @return 若成功返回true；否则返回false
	 */
	public boolean deleteField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = deleteField_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private boolean deleteField_IField_NoVirtual(long pNativeObject, long field);
	protected boolean deleteField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = deleteField_IField_NoVirtual(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}

	native private boolean fromBinary_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流获取要素集信息
	 * @param  
	 * @return 若成功返回true；否则返回false
	 */
	public boolean fromBinary(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = fromBinary_CDataStream(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	public VectorFeatureClass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorFeatureClass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_endQuery_CFeatureIterator(long pNativeObject, String method);
	native protected void register_createSpatialIndex_ISpatialIndexParam(long pNativeObject, String method);
	native protected void register_getFeatureClassType_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getFieldsRef_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_getGeometryField_void(long pNativeObject, String method);
	native protected void register_getIDField_void(long pNativeObject, String method);
	native protected void register_getSpatialIndexEnum_void(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_query_IQueryFilter(long pNativeObject, String method);
	native protected void register_select_IQueryFilter(long pNativeObject, String method);
	native protected void register_getFeatureCount_IQueryFilter(long pNativeObject, String method);
	native protected void register_createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, String method);
	native protected void register_rebulidSpatialIndex_void(long pNativeObject, String method);
	native protected void register_deleteSpatialIndex_void(long pNativeObject, String method);
	native protected void register_addField_IField(long pNativeObject, String method);
	native protected void register_deleteField_IField(long pNativeObject, String method);
	native protected void register_createFeatureBuffer_void(long pNativeObject, String method);
	native protected void register_insert_IFeature(long pNativeObject, String method);
	native protected void register_insertFeatureBuffer_IFeature(long pNativeObject, String method);
	native protected void register_update_IFeature(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_deleteFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_createTableProxy_void(long pNativeObject, String method);
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
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_endQuery_CFeatureIterator(this.nativeObject.pointer, "endQuery_CFeatureIterator_callback");
			this.register_createSpatialIndex_ISpatialIndexParam(this.nativeObject.pointer, "createSpatialIndex_ISpatialIndexParam_callback");
			this.register_getFeatureClassType_void(this.nativeObject.pointer, "getFeatureClassType_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getFieldsRef_void(this.nativeObject.pointer, "getFieldsRef_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_getGeometryField_void(this.nativeObject.pointer, "getGeometryField_void_callback");
			this.register_getIDField_void(this.nativeObject.pointer, "getIDField_void_callback");
			this.register_getSpatialIndexEnum_void(this.nativeObject.pointer, "getSpatialIndexEnum_void_callback");
			this.register_getFeature_ev_uint32(this.nativeObject.pointer, "getFeature_ev_uint32_callback");
			this.register_query_IQueryFilter(this.nativeObject.pointer, "query_IQueryFilter_callback");
			this.register_select_IQueryFilter(this.nativeObject.pointer, "select_IQueryFilter_callback");
			this.register_getFeatureCount_IQueryFilter(this.nativeObject.pointer, "getFeatureCount_IQueryFilter_callback");
			this.register_createSpatialIndex_EVSpatialIndexEnum(this.nativeObject.pointer, "createSpatialIndex_EVSpatialIndexEnum_callback");
			this.register_rebulidSpatialIndex_void(this.nativeObject.pointer, "rebulidSpatialIndex_void_callback");
			this.register_deleteSpatialIndex_void(this.nativeObject.pointer, "deleteSpatialIndex_void_callback");
			this.register_addField_IField(this.nativeObject.pointer, "addField_IField_callback");
			this.register_deleteField_IField(this.nativeObject.pointer, "deleteField_IField_callback");
			this.register_createFeatureBuffer_void(this.nativeObject.pointer, "createFeatureBuffer_void_callback");
			this.register_insert_IFeature(this.nativeObject.pointer, "insert_IFeature_callback");
			this.register_insertFeatureBuffer_IFeature(this.nativeObject.pointer, "insertFeatureBuffer_IFeature_callback");
			this.register_update_IFeature(this.nativeObject.pointer, "update_IFeature_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_deleteFeature_ev_uint32(this.nativeObject.pointer, "deleteFeature_ev_uint32_callback");
			this.register_createTableProxy_void(this.nativeObject.pointer, "createTableProxy_void_callback");
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
	
	public static VectorFeatureClass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorFeatureClass obj = null;
 		if(baseObj instanceof VectorFeatureClass)
		{
			obj = (VectorFeatureClass)baseObj;
		} else {
			obj = new VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorFeatureClass");
			obj.increaseCast();
		}

		return obj;
	}
}
