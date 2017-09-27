package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 数据集选项类。
public class DatasetOption extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption", new DatasetOptionClassFactory());
	}

	/**
	 * 构造函数。
	 */
	public DatasetOption() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DatasetOption", null);
	}

	native private long create_void(long pNativeObject);
	/**
	 * 获取数据集选项的"创建数据集"对象，通过此对象你可以生成创建数据集的选项。
	 * @return EarthView::World::Utilities::DatasetOption_Create对象。
	 */
	public com.earthview.world.utilities.DatasetOptionCreate create()
	{
		long returnValue = create_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DatasetOptionCreate __returnValue = new com.earthview.world.utilities.DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate, "DatasetOption_Create");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DatasetOptionCreate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetOption_Create");
		}
		return __returnValue;
	}
	public DatasetOption(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetOption(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetOption fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetOption obj = null;
 		if(baseObj instanceof DatasetOption)
		{
			obj = (DatasetOption)baseObj;
		} else {
			obj = new DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DatasetOption");
			obj.increaseCast();
		}

		return obj;
	}
}
