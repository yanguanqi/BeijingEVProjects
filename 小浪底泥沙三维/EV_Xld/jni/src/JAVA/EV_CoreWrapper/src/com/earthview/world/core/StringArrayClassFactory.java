package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringArrayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StringArray emptyInstance = new StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
