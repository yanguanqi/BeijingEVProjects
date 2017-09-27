package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 平台的模型数据交换驱动类，入库和导出
 */
public class EarthViewModelDriver extends com.earthview.world.spatial3d.dataexchange.ModelDataDriver {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CEarthViewModelDriver", new EarthViewModelDriverClassFactory());
	}

	public EarthViewModelDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EarthViewModelDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EarthViewModelDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EarthViewModelDriver obj = null;
 		if(baseObj instanceof EarthViewModelDriver)
		{
			obj = (EarthViewModelDriver)baseObj;
		} else {
			obj = new EarthViewModelDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEarthViewModelDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
