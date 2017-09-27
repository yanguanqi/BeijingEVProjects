package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效数据源类
 */
public class EffectDataSource extends com.earthview.world.spatial.geodataset.DatabaseDataSource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSource", new EffectDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSourceProxy", new EffectDataSourceClassFactory());
	}

	native private boolean getEffectInfos_CEffectInfoVector(long pNativeObject, long vec);
	/**
	 * 获取EV_EFFECT表里所有的特效信息。
	 * @param vec 传出的特效信息集合
	 * @return 操作是否成功
	 */
	public boolean getEffectInfos(com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		boolean returnValue = getEffectInfos_CEffectInfoVector(this.nativeObject.pointer, vecParamValue);
		return returnValue;
	}
	native private boolean getEffectInfos_EVString_CEffectInfoVector(long pNativeObject, String userTypeCode, long vec);
	/**
	 * 获取某个分类下的特效集合
	 * @param userTypeCode 用户分类号
	 * @param vec 传出的特效信息集合
	 * @return 操作是否成功
	 */
	public boolean getEffectInfos(String userTypeCode, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		String userTypeCodeParamValue = userTypeCode;
		long vecParamValue = vec.nativeObject.pointer;
		boolean returnValue = getEffectInfos_EVString_CEffectInfoVector(this.nativeObject.pointer, userTypeCodeParamValue, vecParamValue);
		return returnValue;
	}
	native private boolean isInEdit_void(long pNativeObject);
	/**
	 * 判断是否有特效数据源在编辑状态
	 * @return 是否在编辑
	 */
	public boolean isInEdit()
	{
		boolean returnValue = isInEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInEdit_EVString(long pNativeObject, String datasetname);
	/**
	 * 判断数据集是不是在编辑状态
	 * @param datasetname 数据集名称
	 * @return 是否在编辑
	 */
	public boolean isInEdit(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		boolean returnValue = isInEdit_EVString(this.nativeObject.pointer, datasetnameParamValue);
		return returnValue;
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

	native private long getDatasetInfos_EVDatasetType(long pNativeObject, int type);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IDataMetaInfos*,数据元信息集合对象
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
	 * 打开指定数据集名称的数据集，用完后通过closedataset来释放资源
	 * @param name 指定名称
	 * @return EarthView::World::Spatial::GeoDataset::IDataset*,数据集对象指针，如果名字不存在，这返回null
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

	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除指定数据集名称的数据集
	 * @param name 数据集名称
	 * @return ev_bool,成功删除，返回true;否则，返回false
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化字符串
	 * @param  
	 * @return EVString,XML
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

	native private boolean closeDataset_IDataset(long pNativeObject, long dataset);
	/**
	 * 关闭数据集，释放数据集内存
	 * @param dataset 数据集句柄，此处主指实体数据集
	 * @return ev_bool,关闭成功，返回true;关闭失败，返回false
	 */
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected boolean closeDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}

	protected  boolean existDataset_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existDataset(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existDataset_EVString(long pNativeObject, String name);
	/**
	 * 判断实体数据集是否存在
	 * @param  
	 * @return ev_bool,存在，返回true;不存在，返回false
	 */
	public boolean existDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean existDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean existDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  boolean createDataset_EVString_ev_int32_callback(String name, int srid)
	{
		String nameParamValue = name;
		int sridParamValue = srid;
		boolean returnValue = createDataset(nameParamValue, sridParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataset_EVString_ev_int32(long pNativeObject, String name, int srid);
	/**
	 * 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
	 * @param name 指定名称
	 * @return ev_bool,创建成功，返回true;创建失败，返回false
	 */
	public boolean createDataset(String name, int srid)
	{
		String nameParamValue = name;
		int sridParamValue = srid;
		boolean returnValue = createDataset_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, sridParamValue);
		return returnValue;
	}
	native private boolean createDataset_EVString_ev_int32_NoVirtual(long pNativeObject, String name, int srid);
	protected boolean createDataset_NoVirtual(String name, int srid)
	{
		String nameParamValue = name;
		int sridParamValue = srid;
		boolean returnValue = createDataset_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, sridParamValue);
		return returnValue;
	}

	native private long createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String name, long geofield, long fields);
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass的指针
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

	protected  long insertDatasetInfo_CDataMetaInfo_callback(long info)
	{
		com.earthview.world.spatial.geodataset.DataMetaInfo infoParamValue = (info == 0L ? null : new com.earthview.world.spatial.geodataset.DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(infoParamValue != null)
		{
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial.geodataset.DataMetaInfo)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		}
		long returnValue = insertDatasetInfo(infoParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long insertDatasetInfo_CDataMetaInfo(long pNativeObject, long info);
	/**
	 * 插入数据集元数据信息
	 * @param info 元数据信息
	 * @return ev_uint32,返回最后一个添加的数据的ID
	 */
	public long insertDatasetInfo(com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		long returnValue = insertDatasetInfo_CDataMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private long insertDatasetInfo_CDataMetaInfo_NoVirtual(long pNativeObject, long info);
	protected long insertDatasetInfo_NoVirtual(com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		long returnValue = insertDatasetInfo_CDataMetaInfo_NoVirtual(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}

	protected  boolean updateDatasetInfo_CDataMetaInfo_callback(long info)
	{
		com.earthview.world.spatial.geodataset.DataMetaInfo infoParamValue = (info == 0L ? null : new com.earthview.world.spatial.geodataset.DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(infoParamValue != null)
		{
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial.geodataset.DataMetaInfo)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		}
		boolean returnValue = updateDatasetInfo(infoParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateDatasetInfo_CDataMetaInfo(long pNativeObject, long info);
	/**
	 * 更新数据集元数据信息
	 * @param info 元数据信息
	 * @return ev_bool,更新成功，返回true;更新失败，返回false
	 */
	public boolean updateDatasetInfo(com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = updateDatasetInfo_CDataMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateDatasetInfo_CDataMetaInfo_NoVirtual(long pNativeObject, long info);
	protected boolean updateDatasetInfo_NoVirtual(com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = updateDatasetInfo_CDataMetaInfo_NoVirtual(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}

	protected  boolean deleteDatasetInfo_EVString_EVDatasetType_callback(String datasetName, int dsType)
	{
		String datasetNameParamValue = datasetName;
		com.earthview.world.spatial.geodataset.EVDatasetType dsTypeParamValue = com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(dsType);
		boolean returnValue = deleteDatasetInfo(datasetNameParamValue, dsTypeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteDatasetInfo_EVString_EVDatasetType(long pNativeObject, String datasetName, int dsType);
	/**
	 * 删除数据集元数据信息
	 * @param datasetName 数据集名称
	 * @param dsType 数据集类型
	 * @return ev_bool,删除成功，返回true;删除失败，返回false
	 */
	public boolean deleteDatasetInfo(String datasetName, com.earthview.world.spatial.geodataset.EVDatasetType dsType)
	{
		String datasetNameParamValue = datasetName;
		int dsTypeParamValue = dsType.getValue();
		boolean returnValue = deleteDatasetInfo_EVString_EVDatasetType(this.nativeObject.pointer, datasetNameParamValue, dsTypeParamValue);
		return returnValue;
	}
	native private boolean deleteDatasetInfo_EVString_EVDatasetType_NoVirtual(long pNativeObject, String datasetName, int dsType);
	protected boolean deleteDatasetInfo_NoVirtual(String datasetName, com.earthview.world.spatial.geodataset.EVDatasetType dsType)
	{
		String datasetNameParamValue = datasetName;
		int dsTypeParamValue = dsType.getValue();
		boolean returnValue = deleteDatasetInfo_EVString_EVDatasetType_NoVirtual(this.nativeObject.pointer, datasetNameParamValue, dsTypeParamValue);
		return returnValue;
	}

	protected  long getDatasetInfo_EVString_EVDatasetType_callback(String datasetName, int dsType)
	{
		String datasetNameParamValue = datasetName;
		com.earthview.world.spatial.geodataset.EVDatasetType dsTypeParamValue = com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(dsType);
		com.earthview.world.spatial.geodataset.Idatametainfo returnValue = getDatasetInfo(datasetNameParamValue, dsTypeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDatasetInfo_EVString_EVDatasetType(long pNativeObject, String datasetName, int dsType);
	/**
	 * 根据数据集名称获取数据集元数据信息
	 * @param datasetName 数据集名称
	 * @param dsType 数据集类型
	 * @return EarthView::World::Spatial::GeoDataset::IDataMetaInfo*,数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String datasetName, com.earthview.world.spatial.geodataset.EVDatasetType dsType)
	{
		String datasetNameParamValue = datasetName;
		int dsTypeParamValue = dsType.getValue();
		long returnValue = getDatasetInfo_EVString_EVDatasetType(this.nativeObject.pointer, datasetNameParamValue, dsTypeParamValue);
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
	native private long getDatasetInfo_EVString_EVDatasetType_NoVirtual(long pNativeObject, String datasetName, int dsType);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String datasetName, com.earthview.world.spatial.geodataset.EVDatasetType dsType)
	{
		String datasetNameParamValue = datasetName;
		int dsTypeParamValue = dsType.getValue();
		long returnValue = getDatasetInfo_EVString_EVDatasetType_NoVirtual(this.nativeObject.pointer, datasetNameParamValue, dsTypeParamValue);
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

	native private long getDatasetInfo_EVString(long pNativeObject, String datasetName);
	/**
	 * 根据数据集名称获取数据集元数据信息
	 * @param datasetName 数据集名称
	 * @return EarthView::World::Spatial::GeoDataset::IDataMetaInfo*,数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString(this.nativeObject.pointer, datasetNameParamValue);
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
	native private long getDatasetInfo_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
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

	public EffectDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		return super.getPropertySet_NoVirtual();
	}
	/**
	 * 判断数据源是否有效
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_getDatabase_void(long pNativeObject, String method);
	native protected void register_existDataset_EVString(long pNativeObject, String method);
	native protected void register_createDataset_EVString_ev_int32(long pNativeObject, String method);
	native protected void register_insertDatasetInfo_CDataMetaInfo(long pNativeObject, String method);
	native protected void register_updateDatasetInfo_CDataMetaInfo(long pNativeObject, String method);
	native protected void register_deleteDatasetInfo_EVString_EVDatasetType(long pNativeObject, String method);
	native protected void register_getDatasetInfo_EVString_EVDatasetType(long pNativeObject, String method);
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
			this.register_getDatabase_void(this.nativeObject.pointer, "getDatabase_void_callback");
			this.register_existDataset_EVString(this.nativeObject.pointer, "existDataset_EVString_callback");
			this.register_createDataset_EVString_ev_int32(this.nativeObject.pointer, "createDataset_EVString_ev_int32_callback");
			this.register_insertDatasetInfo_CDataMetaInfo(this.nativeObject.pointer, "insertDatasetInfo_CDataMetaInfo_callback");
			this.register_updateDatasetInfo_CDataMetaInfo(this.nativeObject.pointer, "updateDatasetInfo_CDataMetaInfo_callback");
			this.register_deleteDatasetInfo_EVString_EVDatasetType(this.nativeObject.pointer, "deleteDatasetInfo_EVString_EVDatasetType_callback");
			this.register_getDatasetInfo_EVString_EVDatasetType(this.nativeObject.pointer, "getDatasetInfo_EVString_EVDatasetType_callback");
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
	
	public static EffectDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectDataSource obj = null;
 		if(baseObj instanceof EffectDataSource)
		{
			obj = (EffectDataSource)baseObj;
		} else {
			obj = new EffectDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
