package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矢量数据源类
 */
public class DatabaseVectorSource extends com.earthview.world.spatial.geodataset.DatabaseDataSource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource", new DatabaseVectorSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCDatabaseVectorSourceProxy", new DatabaseVectorSourceClassFactory());
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源类型
	 * @param  
	 * @return 数据源类型
	 */
	public int getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected int getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getPropertySet_void(long pNativeObject);
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		long returnValue = getPropertySet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}
	native private long getPropertySet_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet_NoVirtual()
	{
		long returnValue = getPropertySet_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断数据源是否有效
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDatasetInfo_EVString(long pNativeObject, String name);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String name)
	{
		String nameParamValue = name;
		long returnValue = getDatasetInfo_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getDatasetInfo_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	native private long getDatasetInfos_EVDatasetType(long pNativeObject, int type);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}
	native private long getDatasetInfos_EVDatasetType_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos_NoVirtual(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}

	native private long openDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定数据集名称的数据集
	 * @param name 指定名称
	 * @return 数据集对象指针，如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long openDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idataset openDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private boolean closeDataset_IDataset(long pNativeObject, long pDataset);
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset(this.nativeObject.pointer, pDatasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_IDataset_NoVirtual(long pNativeObject, long pDataset);
	protected boolean closeDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset_NoVirtual(this.nativeObject.pointer, pDatasetParamValue);
		return returnValue;
	}

	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除指定数据集名称的数据集
	 * @param name 指定名称
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean deleteDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private long createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String name, long geofield, long fields);
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		String nameParamValue = name;
		long geofieldParamValue = geofield.nativeObject.pointer;
		long fieldsParamValue = fields.nativeObject.pointer;
		long returnValue = createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, nameParamValue, geofieldParamValue, fieldsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	native private long createFeatureClass_EVString_IGeometryField_IFields_NoVirtual(long pNativeObject, String name, long geofield, long fields);
	protected com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass_NoVirtual(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		String nameParamValue = name;
		long geofieldParamValue = geofield.nativeObject.pointer;
		long fieldsParamValue = fields.nativeObject.pointer;
		long returnValue = createFeatureClass_EVString_IGeometryField_IFields_NoVirtual(this.nativeObject.pointer, nameParamValue, geofieldParamValue, fieldsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}

	native private long openFeatureClass_EVString(long pNativeObject, String name);
	/**
	 * 打开FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针
	 */
	public com.earthview.world.spatial2d.geodataset.VectorFeatureClass openFeatureClass(String name)
	{
		String nameParamValue = name;
		long returnValue = openFeatureClass_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.VectorFeatureClass __returnValue = new com.earthview.world.spatial2d.geodataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate, "CVectorFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.VectorFeatureClass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorFeatureClass");
		}
		return __returnValue;
	}
	native private boolean deleteFeatureClass_EVString(long pNativeObject, String name);
	/**
	 * 删除FeatureClass数据集
	 * @param  
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteFeatureClass(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteFeatureClass_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getNetworkDatasetBuilder_void(long pNativeObject);
	/**
	 * 获取网络数据集的创建者
	 * @param  
	 * @return 成功，返回有效指针;否则，返回NULL
	 */
	public com.earthview.world.spatial2d.geodataset.NetworkDatasetBuilder getNetworkDatasetBuilder()
	{
		long returnValue = getNetworkDatasetBuilder_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.NetworkDatasetBuilder __returnValue = new com.earthview.world.spatial2d.geodataset.NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate, "CNetworkDatasetBuilder");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.NetworkDatasetBuilder)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNetworkDatasetBuilder");
		}
		return __returnValue;
	}
	native private long openNetworkDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开网络数据集
	 * @param  
	 * @return 成功，返回有效指针;否则，返回NULL
	 */
	public com.earthview.world.spatial2d.geodataset.NetworkDataset openNetworkDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openNetworkDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.NetworkDataset __returnValue = new com.earthview.world.spatial2d.geodataset.NetworkDataset(CreatedWhenConstruct.CWC_NotToCreate, "CNetworkDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.NetworkDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNetworkDataset");
		}
		return __returnValue;
	}
	native private boolean deleteNetworkDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除网络数据集
	 * @param  
	 * @return 成功，返回true;否则，返回False
	 */
	public boolean deleteNetworkDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteNetworkDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long openAnnoDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开标注数据集
	 * @param  
	 * @return 成功，返回有效指针;否则，返回NULL
	 */
	public com.earthview.world.spatial2d.geodataset.AnnoFeatureClass openAnnoDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openAnnoDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.AnnoFeatureClass __returnValue = new com.earthview.world.spatial2d.geodataset.AnnoFeatureClass(CreatedWhenConstruct.CWC_NotToCreate, "CAnnoFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.AnnoFeatureClass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnnoFeatureClass");
		}
		return __returnValue;
	}
	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化字符串
	 * @param  
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	protected  boolean IsEditing_void_callback()
	{
		boolean returnValue = IsEditing();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean IsEditing_void(long pNativeObject);
	/**
	 * 数据源是否正在被编辑
	 * @return 如果是返回true；否则返回false
	 */
	public boolean IsEditing()
	{
		boolean returnValue = IsEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean IsEditing_void_NoVirtual(long pNativeObject);
	protected boolean IsEditing_NoVirtual()
	{
		boolean returnValue = IsEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getDatabase_void_callback()
	{
		com.earthview.world.core.database.SqlDatabase returnValue = getDatabase();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDatabase_void(long pNativeObject);
	/**
	 * 获取数据库句柄
	 * @return EarthView::World::Core::Database::CSqlDatabase,数据库句柄
	 */
	public com.earthview.world.core.database.SqlDatabase getDatabase()
	{
		long returnValue = getDatabase_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private long getDatabase_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.database.SqlDatabase getDatabase_NoVirtual()
	{
		long returnValue = getDatabase_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}

	public DatabaseVectorSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatabaseVectorSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_IsEditing_void(long pNativeObject, String method);
	native protected void register_getDatabase_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getPropertySet_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_getDatasetInfo_EVString(long pNativeObject, String method);
	native protected void register_getDatasetInfos_EVDatasetType(long pNativeObject, String method);
	native protected void register_createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String method);
	native protected void register_openDataset_EVString(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_closeDataset_IDataset(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_IsEditing_void(this.nativeObject.pointer, "IsEditing_void_callback");
			this.register_getDatabase_void(this.nativeObject.pointer, "getDatabase_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getPropertySet_void(this.nativeObject.pointer, "getPropertySet_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_getDatasetInfo_EVString(this.nativeObject.pointer, "getDatasetInfo_EVString_callback");
			this.register_getDatasetInfos_EVDatasetType(this.nativeObject.pointer, "getDatasetInfos_EVDatasetType_callback");
			this.register_createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, "createFeatureClass_EVString_IGeometryField_IFields_callback");
			this.register_openDataset_EVString(this.nativeObject.pointer, "openDataset_EVString_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_closeDataset_IDataset(this.nativeObject.pointer, "closeDataset_IDataset_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static DatabaseVectorSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatabaseVectorSource obj = null;
 		if(baseObj instanceof DatabaseVectorSource)
		{
			obj = (DatabaseVectorSource)baseObj;
		} else {
			obj = new DatabaseVectorSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatabaseVectorSource");
			obj.increaseCast();
		}

		return obj;
	}
}
