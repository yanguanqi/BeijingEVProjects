package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class UnimplementedExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UnimplementedException emptyInstance = new UnimplementedException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
