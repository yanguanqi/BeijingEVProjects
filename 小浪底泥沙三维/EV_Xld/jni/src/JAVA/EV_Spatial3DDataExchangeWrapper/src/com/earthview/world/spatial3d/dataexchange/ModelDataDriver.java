package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类
 */
public class ModelDataDriver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataDriver", new ModelDataDriverClassFactory());
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据驱动类型
	 * @return 数据驱动类型
	 */
	public com.earthview.world.spatial3d.dataexchange.EVModelDataDriverType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataexchange.EVModelDataDriverType.toEnum(returnValue);
	}
	public ModelDataDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDataDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataDriver obj = null;
 		if(baseObj instanceof ModelDataDriver)
		{
			obj = (ModelDataDriver)baseObj;
		} else {
			obj = new ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
