package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataset extends com.earthview.world.spatial.geodataset.Ifeatureclass {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset", new VectorOctreeDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDatasetProxy", new VectorOctreeDatasetClassFactory());
	}

	native private String getDataVersion_void(long pNativeObject);
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

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒
	 * @param  
	 * @return 数据集包围盒对象
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
	 * 获取坐标系统信息
	 * @param  
	 * @return 坐标参考信息
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
	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据源句柄
	 * @return 数据源句柄
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

	protected  long getID_void_callback()
	{
		long returnValue = getID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取ID值
	 * @param  
	 * @return SRID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getSRID_void_callback()
	{
		int returnValue = getSRID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSRID_void(long pNativeObject);
	/**
	 * 获取数据集坐标参考SRID值
	 * @param  
	 * @return SRID
	 */
	public int getSRID()
	{
		int returnValue = getSRID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSRID_void_NoVirtual(long pNativeObject);
	protected int getSRID_NoVirtual()
	{
		int returnValue = getSRID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/// <summary>
	/// 获取GEOMETRY类别
	/// </summary>
	/// <returnsEVGeometryType， 返回GEOMETRY类别</returns>
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

	native private int getLayerType_void(long pNativeObject);
	/**
	 * 获取对应图层的类型
	 * @param  
	 * @return 图层的类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getLayerType()
	{
		int returnValue = getLayerType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	protected  boolean getOctreeNodes_EVString_MemoryDataStreamPtr_callback(String octreeCode, long octreeNodes)
	{
		String octreeCodeParamValue = octreeCode;
		com.earthview.world.core.MemoryDataStreamPtr octreeNodesParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		octreeNodesParamValue.setDelegate(true);
		octreeNodesParamValue.setInstancePointer(new InstancePointer(octreeNodes));
		IClassFactory octreeNodesParamValueClassFactory = GlobalClassFactoryMap.get(octreeNodesParamValue.getCppInstanceTypeName());
		if (octreeNodesParamValueClassFactory != null)
		{
			octreeNodesParamValue.setDelegate(true);
			octreeNodesParamValue = (com.earthview.world.core.MemoryDataStreamPtr)octreeNodesParamValueClassFactory.create();
			octreeNodesParamValue.setDelegate(true);
			octreeNodesParamValue.setInstancePointer(new InstancePointer(octreeNodes));
		}
		boolean returnValue = getOctreeNodes(octreeCodeParamValue, octreeNodesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getOctreeNodes_EVString_MemoryDataStreamPtr(long pNativeObject, String octreeCode, long octreeNodes);
	public boolean getOctreeNodes(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr octreeNodes)
	{
		String octreeCodeParamValue = octreeCode;
		long octreeNodesParamValue = octreeNodes.nativeObject.pointer;
		boolean returnValue = getOctreeNodes_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, octreeCodeParamValue, octreeNodesParamValue);
		return returnValue;
	}
	native private boolean getOctreeNodes_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String octreeCode, long octreeNodes);
	protected boolean getOctreeNodes_NoVirtual(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr octreeNodes)
	{
		String octreeCodeParamValue = octreeCode;
		long octreeNodesParamValue = octreeNodes.nativeObject.pointer;
		boolean returnValue = getOctreeNodes_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, octreeCodeParamValue, octreeNodesParamValue);
		return returnValue;
	}

	protected  boolean getOctreeObjects_EVString_MemoryDataStreamPtr_callback(String octreeCode, long objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		com.earthview.world.core.MemoryDataStreamPtr objectsStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		objectsStreamParamValue.setDelegate(true);
		objectsStreamParamValue.setInstancePointer(new InstancePointer(objectsStream));
		IClassFactory objectsStreamParamValueClassFactory = GlobalClassFactoryMap.get(objectsStreamParamValue.getCppInstanceTypeName());
		if (objectsStreamParamValueClassFactory != null)
		{
			objectsStreamParamValue.setDelegate(true);
			objectsStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)objectsStreamParamValueClassFactory.create();
			objectsStreamParamValue.setDelegate(true);
			objectsStreamParamValue.setInstancePointer(new InstancePointer(objectsStream));
		}
		boolean returnValue = getOctreeObjects(octreeCodeParamValue, objectsStreamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getOctreeObjects_EVString_MemoryDataStreamPtr(long pNativeObject, String octreeCode, long objectsStream);
	public boolean getOctreeObjects(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		long objectsStreamParamValue = objectsStream.nativeObject.pointer;
		boolean returnValue = getOctreeObjects_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, octreeCodeParamValue, objectsStreamParamValue);
		return returnValue;
	}
	native private boolean getOctreeObjects_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String octreeCode, long objectsStream);
	protected boolean getOctreeObjects_NoVirtual(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		long objectsStreamParamValue = objectsStream.nativeObject.pointer;
		boolean returnValue = getOctreeObjects_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, octreeCodeParamValue, objectsStreamParamValue);
		return returnValue;
	}

	protected  boolean writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_callback(String octreeCode, long octreeNodes, long objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		com.earthview.world.core.MemoryDataStreamPtr octreeNodesParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		octreeNodesParamValue.setDelegate(true);
		octreeNodesParamValue.setInstancePointer(new InstancePointer(octreeNodes));
		IClassFactory octreeNodesParamValueClassFactory = GlobalClassFactoryMap.get(octreeNodesParamValue.getCppInstanceTypeName());
		if (octreeNodesParamValueClassFactory != null)
		{
			octreeNodesParamValue.setDelegate(true);
			octreeNodesParamValue = (com.earthview.world.core.MemoryDataStreamPtr)octreeNodesParamValueClassFactory.create();
			octreeNodesParamValue.setDelegate(true);
			octreeNodesParamValue.setInstancePointer(new InstancePointer(octreeNodes));
		}
		com.earthview.world.core.MemoryDataStreamPtr objectsStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		objectsStreamParamValue.setDelegate(true);
		objectsStreamParamValue.setInstancePointer(new InstancePointer(objectsStream));
		IClassFactory objectsStreamParamValueClassFactory = GlobalClassFactoryMap.get(objectsStreamParamValue.getCppInstanceTypeName());
		if (objectsStreamParamValueClassFactory != null)
		{
			objectsStreamParamValue.setDelegate(true);
			objectsStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)objectsStreamParamValueClassFactory.create();
			objectsStreamParamValue.setDelegate(true);
			objectsStreamParamValue.setInstancePointer(new InstancePointer(objectsStream));
		}
		boolean returnValue = writeOctree(octreeCodeParamValue, octreeNodesParamValue, objectsStreamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(long pNativeObject, String octreeCode, long octreeNodes, long objectsStream);
	public boolean writeOctree(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr octreeNodes, com.earthview.world.core.MemoryDataStreamPtr objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		long octreeNodesParamValue = octreeNodes.nativeObject.pointer;
		long objectsStreamParamValue = objectsStream.nativeObject.pointer;
		boolean returnValue = writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(this.nativeObject.pointer, octreeCodeParamValue, octreeNodesParamValue, objectsStreamParamValue);
		return returnValue;
	}
	native private boolean writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String octreeCode, long octreeNodes, long objectsStream);
	protected boolean writeOctree_NoVirtual(String octreeCode, com.earthview.world.core.MemoryDataStreamPtr octreeNodes, com.earthview.world.core.MemoryDataStreamPtr objectsStream)
	{
		String octreeCodeParamValue = octreeCode;
		long octreeNodesParamValue = octreeNodes.nativeObject.pointer;
		long objectsStreamParamValue = objectsStream.nativeObject.pointer;
		boolean returnValue = writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, octreeCodeParamValue, octreeNodesParamValue, objectsStreamParamValue);
		return returnValue;
	}

	native private long getLayerInfoStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr getLayerInfoStream()
	{
		long returnValue = getLayerInfoStream_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类别
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

	native private boolean clearDataset_void(long pNativeObject);
	/**
	 * 清空数据集记录
	 */
	public boolean clearDataset()
	{
		boolean returnValue = clearDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	public VectorOctreeDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreeDataset(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
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
	
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getSRID_void(long pNativeObject, String method);
	native protected void register_getOctreeNodes_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getOctreeObjects_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(long pNativeObject, String method);
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
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getSRID_void(this.nativeObject.pointer, "getSRID_void_callback");
			this.register_getOctreeNodes_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "getOctreeNodes_EVString_MemoryDataStreamPtr_callback");
			this.register_getOctreeObjects_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "getOctreeObjects_EVString_MemoryDataStreamPtr_callback");
			this.register_writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(this.nativeObject.pointer, "writeOctree_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_callback");
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
	
	public static VectorOctreeDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreeDataset obj = null;
 		if(baseObj instanceof VectorOctreeDataset)
		{
			obj = (VectorOctreeDataset)baseObj;
		} else {
			obj = new VectorOctreeDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreeDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
