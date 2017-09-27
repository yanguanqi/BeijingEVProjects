package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathEngine extends com.earthview.world.spatial.math.EVMath {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMathEngine", new MathEngineClassFactory());
	}

	public MathEngine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MathEngine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MathEngine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MathEngine obj = null;
 		if(baseObj instanceof MathEngine)
		{
			obj = (MathEngine)baseObj;
		} else {
			obj = new MathEngine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMathEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
