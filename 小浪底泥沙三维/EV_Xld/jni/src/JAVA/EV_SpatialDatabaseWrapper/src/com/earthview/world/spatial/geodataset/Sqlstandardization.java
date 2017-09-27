package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 由于不同数据库上sql语句中关键字有所不同，通过此类创建统一的方法
 */
public class Sqlstandardization extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CSqlstandardization", new SqlstandardizationClassFactory());
	}

	/**
	 * 构造函数
	 * @param driverType 驱动名
	 */
	public Sqlstandardization(String driverType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer driverTypePtr = new BasePointer(driverType);
		list.add("driverType", driverTypePtr.get());
		Create("CSqlstandardization", list);
	}

	public Sqlstandardization(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sqlstandardization(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Sqlstandardization fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sqlstandardization obj = null;
 		if(baseObj instanceof Sqlstandardization)
		{
			obj = (Sqlstandardization)baseObj;
		} else {
			obj = new Sqlstandardization(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlstandardization");
			obj.increaseCast();
		}

		return obj;
	}
}
