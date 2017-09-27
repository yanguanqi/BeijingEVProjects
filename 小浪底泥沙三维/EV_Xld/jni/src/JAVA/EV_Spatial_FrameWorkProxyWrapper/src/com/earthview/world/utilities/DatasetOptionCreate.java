package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreate extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create", new DatasetOptionCreateClassFactory());
	}

	native private long db_void(long pNativeObject);
	/**
	 * 获取数据集选项的"创建数据库数据集"对象，通过此对象你可以生成创建数据库型数据集的选项。
	 * @return EarthView::World::Utilities::DatasetOption_Create_DB对象。
	 */
	public com.earthview.world.utilities.DatasetOptionCreateDb db()
	{
		long returnValue = db_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DatasetOptionCreateDb __returnValue = new com.earthview.world.utilities.DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption_Create_DB");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOptionCreateDb)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption_Create_DB");
		}
		return __returnValue;
	}
	native private long file_void(long pNativeObject);
	/**
	 * 获取数据集选项的"创建文件数据集"对象，通过此对象你可以生成创建文件型数据集的选项。
	 * @return EarthView::World::Utilities::DatasetOption_Create_File对象。
	 */
	public com.earthview.world.utilities.DatasetOptionCreateFile file()
	{
		long returnValue = file_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DatasetOptionCreateFile __returnValue = new com.earthview.world.utilities.DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption_Create_File");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOptionCreateFile)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption_Create_File");
		}
		return __returnValue;
	}
	public DatasetOptionCreate(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetOptionCreate(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetOptionCreate fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetOptionCreate obj = null;
 		if(baseObj instanceof DatasetOptionCreate)
		{
			obj = (DatasetOptionCreate)baseObj;
		} else {
			obj = new DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DatasetOption_Create");
			obj.increaseCast();
		}

		return obj;
	}
}
