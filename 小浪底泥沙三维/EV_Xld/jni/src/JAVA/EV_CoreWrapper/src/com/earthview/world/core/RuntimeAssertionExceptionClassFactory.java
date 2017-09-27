package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RuntimeAssertionExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RuntimeAssertionException emptyInstance = new RuntimeAssertionException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
