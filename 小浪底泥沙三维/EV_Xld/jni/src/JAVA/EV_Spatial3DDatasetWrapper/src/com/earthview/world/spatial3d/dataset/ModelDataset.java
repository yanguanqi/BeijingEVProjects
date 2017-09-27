package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataset extends com.earthview.world.spatial.geodataset.Ifeatureclass {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDataset", new ModelDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelDatasetProxy", new ModelDatasetClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public ModelDataset(String datasetname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer datasetnamePtr = new BasePointer(datasetname);
		list.add("datasetname", datasetnamePtr.get());
		Create("JCModelDatasetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataset.ModelDataset".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getResourceDatasetRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifeatureclass returnValue = getResourceDatasetRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getResourceDatasetRef_void(long pNativeObject);
	/**
	 * 获取资源数据集句柄
	 * @param bFromTemplate TRUE获取模板库的资源数据集，FALSE获取本地模型资源数据集
	 * @return IFeatureClass*，数据集句柄
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass getResourceDatasetRef()
	{
		long returnValue = getResourceDatasetRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	native private long getResourceDatasetRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeatureclass getResourceDatasetRef_NoVirtual()
	{
		long returnValue = getResourceDatasetRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 数据集是否可编辑
	 * @param  
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

	protected  int refreshDataset_void_callback()
	{
		int returnValue = refreshDataset();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int refreshDataset_void(long pNativeObject);
	/**
	 * 刷新数据集
	 * @param  
	 * @return 0:不需要刷新1：刷新成功2:刷新失败
	 */
	public int refreshDataset()
	{
		int returnValue = refreshDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int refreshDataset_void_NoVirtual(long pNativeObject);
	protected int refreshDataset_NoVirtual()
	{
		int returnValue = refreshDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isTemplate_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean isTemplate()
	{
		boolean returnValue = isTemplate_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  String getAliasName_void_callback()
	{
		String returnValue = getAliasName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取别名
	 * @param  
	 * @return 数据集别名
	 */
	public String getAliasName()
	{
		String returnValue = getAliasName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAliasName_void_NoVirtual(long pNativeObject);
	protected String getAliasName_NoVirtual()
	{
		String returnValue = getAliasName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public ModelDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取要素数据集类型
	 * @return 要素数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType()
	{
		return super.getFeatureClassType_NoVirtual();
	}
	/**
	 * 获取几何体类型
	 * @return 几何体类型枚举
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取要素数据集的字段集合
	 * @return 字段集合对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFieldsRef()
	{
		return super.getFieldsRef_NoVirtual();
	}
	/**
	 * 获取要素数据集的字段数目
	 * @return 字段数目
	 */
	public long getFieldCount()
	{
		return super.getFieldCount_NoVirtual();
	}
	/**
	 * 获取指定索引的字段对象
	 * @param index 指定索引
	 * @return 字段对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geodataset.Ifield getFieldRef(long index)
	{
		return super.getFieldRef_NoVirtual(index);
	}
	/**
	 * 是否能找到指定字段名称。
	 * @param fieldName 指定字段名称
	 * @return 如果找到，返回索引；如果找不到，返回-1
	 */
	public int findField(String fieldName)
	{
		return super.findField_NoVirtual(fieldName);
	}
	/**
	 * 获取几何体字段对象
	 * @return 几何体字段对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geodataset.Ifield getGeometryField()
	{
		return super.getGeometryField_NoVirtual();
	}
	/**
	 * 获取ID字段对象
	 * @return ID字段对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geodataset.Ifield getIDField()
	{
		return super.getIDField_NoVirtual();
	}
	/**
	 * 获取空间索引类型枚举
	 * @return 空间索引类型枚举
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum()
	{
		return super.getSpatialIndexEnum_NoVirtual();
	}
	/**
	 * 获取指定ID的要素
	 * @param id 指定ID
	 * @return 要素对象。如果无该ID，返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long id)
	{
		return super.getFeature_NoVirtual(id);
	}
	/**
	 * 按照指定条件，进行查询
	 * @param filter 指定查询条件
	 * @return 要素查询结果迭代器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureiterator query(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		return super.query_NoVirtual(filter);
	}
	/**
	 * 按照指定条件，进行选择
	 * @param filter 指定空间索引类型
	 * @return 要素选择器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection select(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		return super.select_NoVirtual(filter);
	}
	/**
	 * 获取指定查询条件的要素数目
	 * @param filter 查询条件
	 * @return 要素数目
	 */
	public long getFeatureCount(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		return super.getFeatureCount_NoVirtual(filter);
	}
	/**
	 * 为数据集，创建指定空间索引
	 * @param spaIndex 指定空间索引类型
	 * @return ture，成功；false，失败
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		return super.createSpatialIndex_NoVirtual(spaIndex);
	}
	/**
	 * 重建空间索引
	 * @return true，成功；false，失败
	 */
	public boolean rebulidSpatialIndex()
	{
		return super.rebulidSpatialIndex_NoVirtual();
	}
	/**
	 * 删除空间索引
	 * @return true，成功；false，失败
	 */
	public boolean deleteSpatialIndex()
	{
		return super.deleteSpatialIndex_NoVirtual();
	}
	/**
	 * 添加字段
	 * @param field 指定索引
	 * @return ture，成功；false，失败
	 */
	public boolean addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.addField_NoVirtual(field);
	}
	/**
	 * 删除指定字段
	 * @param field 指定字段
	 * @return ture，成功；false，失败
	 */
	public boolean deleteField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.deleteField_NoVirtual(field);
	}
	/**
	 * 创建要素缓存对象，内存中创建，用于一次性写入数据集。
	 * @return 要素对象
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer()
	{
		return super.createFeatureBuffer_NoVirtual();
	}
	/**
	 * 在数据集上，插入新要素。
	 * @param feature 返回的要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		return super.insert_NoVirtual(feature);
	}
	/**
	 * 插入已知要素到数据集中
	 * @param buffer 指定要素对象
	 * @return 返回插入索引
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		return super.insertFeatureBuffer_NoVirtual(buffer);
	}
	/**
	 * 更新已知要素
	 * @param buffer 要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean update(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		return super.update_NoVirtual(buffer);
	}
	/**
	 * 获取数据集的范围
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取数据集的空间坐标系参考对象
	 * @return 空间坐标参考系对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		return super.getSpatialReferenceRef_NoVirtual();
	}
	/**
	 * 删除指定ID的要素
	 * @param id 指定ID
	 * @return ture，成功；false，失败
	 */
	public boolean deleteFeature(long id)
	{
		return super.deleteFeature_NoVirtual(id);
	}
	/**
	 * 创建一个数据表的代理对象。
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		return super.createTableProxy_NoVirtual();
	}
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
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
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		return super.getDataSourceRef_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		return super.startEditing_NoVirtual(withUndo);
	}
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		return super.stopEditing_NoVirtual(isSave);
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
	
	native protected void register_getResourceDatasetRef_void(long pNativeObject, String method);
	native protected void register_refreshDataset_void(long pNativeObject, String method);
	native protected void register_getAliasName_void(long pNativeObject, String method);
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
			this.register_getResourceDatasetRef_void(this.nativeObject.pointer, "getResourceDatasetRef_void_callback");
			this.register_refreshDataset_void(this.nativeObject.pointer, "refreshDataset_void_callback");
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
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
	
	public static ModelDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataset obj = null;
 		if(baseObj instanceof ModelDataset)
		{
			obj = (ModelDataset)baseObj;
		} else {
			obj = new ModelDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
