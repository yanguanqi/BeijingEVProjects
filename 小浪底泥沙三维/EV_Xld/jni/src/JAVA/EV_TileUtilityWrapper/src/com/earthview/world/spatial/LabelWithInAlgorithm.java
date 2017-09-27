package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 内部注记的算法类
 */
public class LabelWithInAlgorithm extends com.earthview.world.spatial.LabelDrawAlgorithm {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelWithInAlgorithm", new LabelWithInAlgorithmClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LabelWithInAlgorithm() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelWithInAlgorithm", null);
	}

	public LabelWithInAlgorithm(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelWithInAlgorithm(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelWithInAlgorithm fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelWithInAlgorithm obj = null;
 		if(baseObj instanceof LabelWithInAlgorithm)
		{
			obj = (LabelWithInAlgorithm)baseObj;
		} else {
			obj = new LabelWithInAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelWithInAlgorithm");
			obj.increaseCast();
		}

		return obj;
	}
}
