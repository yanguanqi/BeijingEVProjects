package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicModelObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicModelObject emptyInstance = new DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
