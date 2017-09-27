package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicCameraLockHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicCameraLockHandler emptyInstance = new DynamicCameraLockHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
