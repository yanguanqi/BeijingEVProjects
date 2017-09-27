package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreateDb extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create_DB", new DatasetOptionCreateDbClassFactory());
	}

	native private long vector_CFields_int_int(long pNativeObject, long fields, int geoType, int espg);
	/**
	 * 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
	 * @param geoType EVGeometryType。
	 * @param espg EVWellKnownGeoCSType或EVWellKnownProjCSType。
	 * @return EarthView::World::Utilities::DatasetOption数据集选项对象。
	 */
	public com.earthview.world.utilities.DatasetOption vector(com.earthview.world.spatial.geodataset.Fields fields, int geoType, int espg)
	{
		long fieldsParamValue = fields.nativeObject.pointer;
		int geoTypeParamValue = geoType;
		int espgParamValue = espg;
		long returnValue = vector_CFields_int_int(this.nativeObject.pointer, fieldsParamValue, geoTypeParamValue, espgParamValue);
		com.earthview.world.utilities.DatasetOption __returnValue = new com.earthview.world.utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption");
		}
		return __returnValue;
	}
	native private long vector_CFields_int_EVString(long pNativeObject, long fields, int geoType, String wktCoordsys);
	/**
	 * 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
	 * @param geoType EVGeometryType。
	 * @param espg EVWellKnownGeoCSType或EVWellKnownProjCSType。
	 * @return EarthView::World::Utilities::DatasetOption数据集选项对象。
	 */
	public com.earthview.world.utilities.DatasetOption vector(com.earthview.world.spatial.geodataset.Fields fields, int geoType, String wktCoordsys)
	{
		long fieldsParamValue = fields.nativeObject.pointer;
		int geoTypeParamValue = geoType;
		String wktCoordsysParamValue = wktCoordsys;
		long returnValue = vector_CFields_int_EVString(this.nativeObject.pointer, fieldsParamValue, geoTypeParamValue, wktCoordsysParamValue);
		com.earthview.world.utilities.DatasetOption __returnValue = new com.earthview.world.utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption");
		}
		return __returnValue;
	}
	native private long model_CFields_ModelDatasetType_int(long pNativeObject, long fields, int modelDatasetType, int espg);
	/**
	 * 设置一个创建模型数据集的选项，具体请见AppDataSource::createDataset()。
	 * @param fields 数据集字段设置。
	 * @param modelDatasetType 模型数据集类型。
	 * @param espg EVWellKnownGeoCSType或EVWellKnownProjCSType。
	 * @return EarthView::World::Utilities::DatasetOption数据集选项对象。
	 */
	public com.earthview.world.utilities.DatasetOption model(com.earthview.world.spatial.geodataset.Fields fields, com.earthview.world.utilities.ModelDatasetType modelDatasetType, int espg)
	{
		long fieldsParamValue = fields.nativeObject.pointer;
		int modelDatasetTypeParamValue = modelDatasetType.getValue();
		int espgParamValue = espg;
		long returnValue = model_CFields_ModelDatasetType_int(this.nativeObject.pointer, fieldsParamValue, modelDatasetTypeParamValue, espgParamValue);
		com.earthview.world.utilities.DatasetOption __returnValue = new com.earthview.world.utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption");
		}
		return __returnValue;
	}
	native private long effect_int(long pNativeObject, int espg);
	/**
	 * 设置一个创建特效数据集的选项，具体请见AppDataSource::createDataset()。
	 * @param espg EVWellKnownGeoCSType或EVWellKnownProjCSType。
	 * @return EarthView::World::Utilities::DatasetOption数据集选项对象。
	 */
	public com.earthview.world.utilities.DatasetOption effect(int espg)
	{
		int espgParamValue = espg;
		long returnValue = effect_int(this.nativeObject.pointer, espgParamValue);
		com.earthview.world.utilities.DatasetOption __returnValue = new com.earthview.world.utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption");
		}
		return __returnValue;
	}
	public DatasetOptionCreateDb(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetOptionCreateDb(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetOptionCreateDb fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetOptionCreateDb obj = null;
 		if(baseObj instanceof DatasetOptionCreateDb)
		{
			obj = (DatasetOptionCreateDb)baseObj;
		} else {
			obj = new DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DatasetOption_Create_DB");
			obj.increaseCast();
		}

		return obj;
	}
}
