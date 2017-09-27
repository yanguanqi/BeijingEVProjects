package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringVectorPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StringVectorPtr emptyInstance = new StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
