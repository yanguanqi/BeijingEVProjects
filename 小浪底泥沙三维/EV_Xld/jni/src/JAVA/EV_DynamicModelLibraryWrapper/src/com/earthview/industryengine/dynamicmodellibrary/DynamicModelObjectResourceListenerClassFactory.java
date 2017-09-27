package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicModelObjectResourceListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicModelObjectResourceListener emptyInstance = new DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
