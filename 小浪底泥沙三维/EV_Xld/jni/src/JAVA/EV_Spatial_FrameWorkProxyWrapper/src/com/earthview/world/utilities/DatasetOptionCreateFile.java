package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreateFile extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create_File", new DatasetOptionCreateFileClassFactory());
	}

	native private long kml_KMLDatasetType(long pNativeObject, int kmlDatasetType);
	/**
	 * 设置一个创建KML数据集的选项，具体请见AppDataSource::createDataset()。
	 * @param kmlDatasetType KML数据集类型。
	 * @return EarthView::World::Utilities::DatasetOption数据集选项对象。
	 */
	public com.earthview.world.utilities.DatasetOption kml(com.earthview.world.utilities.KMLDatasetType kmlDatasetType)
	{
		int kmlDatasetTypeParamValue = kmlDatasetType.getValue();
		long returnValue = kml_KMLDatasetType(this.nativeObject.pointer, kmlDatasetTypeParamValue);
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
	public DatasetOptionCreateFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetOptionCreateFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetOptionCreateFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetOptionCreateFile obj = null;
 		if(baseObj instanceof DatasetOptionCreateFile)
		{
			obj = (DatasetOptionCreateFile)baseObj;
		} else {
			obj = new DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DatasetOption_Create_File");
			obj.increaseCast();
		}

		return obj;
	}
}
