package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class InvalidParametersExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InvalidParametersException emptyInstance = new InvalidParametersException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
