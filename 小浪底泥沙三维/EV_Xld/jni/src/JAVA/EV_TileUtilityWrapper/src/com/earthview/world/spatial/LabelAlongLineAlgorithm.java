package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 沿线注记的算法类
 */
public class LabelAlongLineAlgorithm extends com.earthview.world.spatial.LabelDrawAlgorithm {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelAlongLineAlgorithm", new LabelAlongLineAlgorithmClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LabelAlongLineAlgorithm() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelAlongLineAlgorithm", null);
	}

	public LabelAlongLineAlgorithm(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelAlongLineAlgorithm(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelAlongLineAlgorithm fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelAlongLineAlgorithm obj = null;
 		if(baseObj instanceof LabelAlongLineAlgorithm)
		{
			obj = (LabelAlongLineAlgorithm)baseObj;
		} else {
			obj = new LabelAlongLineAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelAlongLineAlgorithm");
			obj.increaseCast();
		}

		return obj;
	}
}
