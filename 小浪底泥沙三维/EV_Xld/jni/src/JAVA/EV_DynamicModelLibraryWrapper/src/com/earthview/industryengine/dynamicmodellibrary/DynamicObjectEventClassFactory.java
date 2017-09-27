package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicObjectEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicObjectEvent emptyInstance = new DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
